cmake_minimum_required(VERSION 3.16)
project(LinksAwakeningWin C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

# Find SDL2
find_package(PkgConfig REQUIRED)
pkg_check_modules(SDL2 REQUIRED sdl2)

# Core source files
set(CORE_SOURCES
    src/main.c
    src/gb_runtime.c
    src/gb_cpu.c
    src/gb_ppu.c
    src/gb_apu.c
    src/gb_input.c
    src/win32_menu.c
    src/save_system.c
    src/config.c
)

# Collect transpiled game bank files
file(GLOB GAME_SOURCES game/bank_*.c)
list(APPEND GAME_SOURCES game/rom_data.c)
if(EXISTS ${CMAKE_SOURCE_DIR}/game/cross_func_stubs.c)
    list(APPEND GAME_SOURCES game/cross_func_stubs.c)
endif()

# Windows resource file for icon (disabled until icon is added)
# if(WIN32)
#     set(RC_FILE assets/icon.rc)
# endif()

add_executable(zelda_la WIN32
    ${CORE_SOURCES}
    ${GAME_SOURCES}
    ${RC_FILE}
)

target_include_directories(zelda_la PRIVATE
    ${CMAKE_SOURCE_DIR}/src
    ${CMAKE_SOURCE_DIR}/game
    ${SDL2_INCLUDE_DIRS}
)

target_link_libraries(zelda_la PRIVATE
    ${SDL2_LIBRARIES}
)

if(WIN32)
    target_link_libraries(zelda_la PRIVATE
        mingw32
        SDL2main
        SDL2
        comdlg32
    )
endif()

target_compile_options(zelda_la PRIVATE
    ${SDL2_CFLAGS_OTHER}
    -Wall
    -Wno-unused-variable
    -Wno-unused-function
    -Wno-unused-label
    -Wno-unused-but-set-variable
    -Wno-int-conversion
    -Wno-pointer-to-int-cast
    -Wno-int-to-pointer-cast
    -Wno-incompatible-pointer-types
    -Wno-overflow
    -O2
)

# Transpiled game files: suppress all warnings since they're auto-generated
foreach(GAME_SRC ${GAME_SOURCES})
    set_source_files_properties(${GAME_SRC} PROPERTIES COMPILE_FLAGS "-w -Wno-implicit-function-declaration")
endforeach()
