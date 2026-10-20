cmake_minimum_required(VERSION 3.21)
project(linksawakening C CXX)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Release)
endif()

# Multiplayer is not part of this game repo: it lives in sp00nznet/la-mp.
# The runtime gates every multiplayer call behind LA_HAS_MULTIPLAYER, so
# forcing it off builds a clean single-player game with no ENet.
set(LA_HAS_MULTIPLAYER OFF CACHE BOOL "Multiplayer lives in sp00nznet/la-mp" FORCE)

set(GBRT_DIR "${CMAKE_SOURCE_DIR}/gbrecomp/runtime")
if(NOT EXISTS "${GBRT_DIR}/CMakeLists.txt")
    message(FATAL_ERROR "gbrecomp/ submodule is empty. Run:\n  git submodule update --init --recursive")
endif()
add_subdirectory(${GBRT_DIR} gbrt)
target_compile_definitions(gbrt PRIVATE "GBRT_WINDOW_TITLE=\"Link's Awakening DX Recompiled\"")

# gen/ holds recompiler output, generated locally from the user's own ROM and
# never committed (see docs/architecture.md).
set(GEN_DIR "${CMAKE_SOURCE_DIR}/gen")
if(NOT EXISTS "${GEN_DIR}/rom.c")
    message(FATAL_ERROR
        "gen/rom.c is missing. Generate it from your own ROM first:\n"
        "  gbrecomp/build/bin/gbrecomp rom.gbc -o gen\n"
        "or run Setup.cmd, which does every step.")
endif()

add_executable(linksawakening rom_main.c ${GEN_DIR}/rom.c ${GEN_DIR}/rom_rom.c)
target_include_directories(linksawakening PRIVATE ${GEN_DIR})
target_link_libraries(linksawakening PRIVATE gbrt)

if(MINGW)
    # libgcc/libstdc++ go in the exe; winpthread stays a DLL, copied below.
    target_link_options(linksawakening PRIVATE -static-libgcc -static-libstdc++)
    get_filename_component(MINGW_BIN "${CMAKE_C_COMPILER}" DIRECTORY)
    add_custom_command(TARGET linksawakening POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy_if_different "${MINGW_BIN}/libwinpthread-1.dll" $<TARGET_FILE_DIR:linksawakening>)
endif()

# Put SDL2.dll next to the exe so build/linksawakening.exe runs as-is.
if(WIN32)
    add_custom_command(TARGET linksawakening POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy_if_different $<TARGET_RUNTIME_DLLS:linksawakening> $<TARGET_FILE_DIR:linksawakening>
        COMMAND_EXPAND_LISTS)
endif()
