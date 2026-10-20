@echo off
rem Quick start: checks prerequisites, asks for your ROM, builds the game and
rem makes a shortcut. Safe to rerun; finished steps are skipped.
powershell -NoProfile -ExecutionPolicy Bypass -File "%~dp0tools\setup.ps1" %*
pause
