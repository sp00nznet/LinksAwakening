# Quick-start setup for the Link's Awakening DX recompilation (Windows).
#
# Runs the same commands as README "Step by step", in order, skipping steps
# that are already done, so a rerun after a failure resumes. Asks before
# installing anything. Your ROM is copied to rom.gbc in this folder and never
# leaves your machine. Details of every run go to setup.log.

$ErrorActionPreference = 'Stop'
$Root = Split-Path -Parent $PSScriptRoot
Set-Location $Root
$Log = Join-Path $Root 'setup.log'
Start-Transcript -Path $Log -Force | Out-Null

$Msys = 'C:\msys64'
$Bin = "$Msys\mingw64\bin"
$Packages = 'mingw-w64-x86_64-gcc', 'mingw-w64-x86_64-cmake', 'mingw-w64-x86_64-ninja', 'mingw-w64-x86_64-SDL2', 'git'
$RepoUrl = 'https://github.com/sp00nznet/LinksAwakening.git'
# Rev 2 (USA, Europe) is the revision this project is tested on.
$KnownSha1 = '1C091225688D966928CC74336DBEF2E07D12A47C'

function Fail($msg) {
    Write-Host ''
    Write-Host "Setup stopped: $msg" -ForegroundColor Red
    Write-Host "Details are in $Log"
    Stop-Transcript | Out-Null
    exit 1
}
function Step($msg) { Write-Host ''; Write-Host "== $msg" -ForegroundColor Cyan }
function Ask($q) { (Read-Host "$q [y/N]") -match '^(y|yes)$' }
function Run($exe) {
    # Native command wrapper: echo it, run it, fail on a non-zero exit.
    Write-Host "> $exe $($args -join ' ')"
    & $exe @args
    if ($LASTEXITCODE -ne 0) { Fail "'$exe' exited with code $LASTEXITCODE." }
}

# 1. MSYS2 (compiler toolchain)
Step 'Checking for MSYS2'
if (-not (Test-Path "$Msys\usr\bin\pacman.exe")) {
    Write-Host 'MSYS2 provides the C compiler, CMake and SDL2 this build needs.'
    Write-Host 'It installs to C:\msys64 (about 500 MB with the packages).'
    if (-not (Ask 'Install MSYS2 now with winget?')) { Fail 'MSYS2 is required. Install it from https://www.msys2.org and rerun Setup.cmd.' }
    Run winget install -e --id MSYS2.MSYS2 --accept-package-agreements --accept-source-agreements
    if (-not (Test-Path "$Msys\usr\bin\pacman.exe")) { Fail 'MSYS2 did not install to C:\msys64. Install it from https://www.msys2.org and rerun.' }
}
$env:PATH = "$Bin;$Msys\usr\bin;$env:PATH"

# 2. Packages
Step 'Checking compiler packages'
$missing = @($Packages | Where-Object { & "$Msys\usr\bin\pacman.exe" -Q $_ 2>$null | Out-Null; $LASTEXITCODE -ne 0 })
if ($missing.Count -gt 0) {
    Write-Host "Missing: $($missing -join ', ') (about 400 MB from the MSYS2 mirrors)."
    if (-not (Ask 'Install them now?')) { Fail 'the compiler packages are required.' }
    Run "$Msys\usr\bin\pacman.exe" -S --needed --noconfirm @missing
}

# 3. Source: a zip download has no git history and no gbrecomp/ submodule.
Step 'Checking source'
if (-not (Test-Path 'gbrecomp\runtime\CMakeLists.txt')) {
    if (-not (Test-Path '.git')) {
        Run git init -q
        Run git remote add origin $RepoUrl
        Run git fetch -q --depth 1 origin main
        Run git reset -q FETCH_HEAD
    }
    # longpaths: nested submodule metadata can pass Windows' 260-char limit.
    Run git -c core.longpaths=true submodule update --init --recursive
}

# 4. ROM
Step 'Finding your ROM'
if (-not (Test-Path 'rom.gbc')) {
    $found = @(Get-ChildItem -Path $Root, "$HOME\Downloads", "$HOME\Desktop", "$HOME\Documents" -File -ErrorAction SilentlyContinue |
        Where-Object { $_.Name -match 'awakening' -and $_.Extension -in '.gbc', '.zip' })
    $src = $null
    if ($found.Count -gt 0) {
        Write-Host "Found: $($found[0].FullName)"
        if (Ask 'Use this file?') { $src = $found[0].FullName }
    }
    if (-not $src) { $src = (Read-Host "Path to your Link's Awakening DX ROM (.gbc or .zip)").Trim('"') }
    if (-not (Test-Path $src)) { Fail "no file at '$src'." }
    if ($src -like '*.zip') {
        $tmp = Join-Path $env:TEMP 'la-rom'
        Remove-Item $tmp -Recurse -Force -ErrorAction SilentlyContinue
        Expand-Archive $src $tmp
        $src = (Get-ChildItem $tmp -Filter *.gbc -Recurse | Select-Object -First 1).FullName
        if (-not $src) { Fail 'that zip has no .gbc file in it.' }
    }
    Copy-Item $src 'rom.gbc'
}
$sha = (Get-FileHash 'rom.gbc' -Algorithm SHA1).Hash
if ($sha -ne $KnownSha1) {
    Write-Host "Warning: rom.gbc (SHA-1 $sha) is not the tested revision, Link's Awakening DX (USA, Europe) (Rev 2). It may not work." -ForegroundColor Yellow
}

# 5. Recompiler
Step 'Building the recompiler'
if (-not (Test-Path 'gbrecomp\build\bin\gbrecomp.exe')) {
    Run cmake -S gbrecomp -B gbrecomp/build -G Ninja
    Run cmake --build gbrecomp/build --target gbrecomp
}

# 6. Generate C from the ROM
Step 'Recompiling the ROM to C'
if (-not (Test-Path 'gen\rom.c') -or (Get-Item 'gen\rom.c').LastWriteTime -lt (Get-Item 'rom.gbc').LastWriteTime) {
    Run gbrecomp\build\bin\gbrecomp.exe rom.gbc -o gen
}

# 7. Build the game (the first build compiles ~110 MB of C: 5-15 minutes)
Step 'Building the game'
Run cmake -S . -B build -G Ninja
Run cmake --build build

# 8. Shortcut
$exe = Join-Path $Root 'build\linksawakening.exe'
$lnk = Join-Path $Root "Link's Awakening DX.lnk"
$sc = (New-Object -ComObject WScript.Shell).CreateShortcut($lnk)
$sc.TargetPath = $exe
$sc.WorkingDirectory = Split-Path $exe
$sc.Save()

Write-Host ''
Write-Host "Done. Double-click ""Link's Awakening DX"" in this folder to play." -ForegroundColor Green
Stop-Transcript | Out-Null
