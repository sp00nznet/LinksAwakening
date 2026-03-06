cmake_minimum_required(VERSION 3.16)
project(la-dx-recompiled C CXX)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Release)
endif()
if(CMAKE_C_COMPILER_ID MATCHES "GNU|Clang")
    add_compile_options(-O3)
endif()

find_package(SDL2 REQUIRED)

# Runtime library
add_library(gbrt STATIC
    runtime/src/gbrt.c
    runtime/src/ppu.c
    runtime/src/audio.c
    runtime/src/interpreter.c
    runtime/src/platform_sdl.cpp
)

# ImGui (clone into runtime/third_party/imgui if not present)
if(EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/runtime/third_party/imgui/imgui.cpp")
    target_sources(gbrt PRIVATE
        runtime/third_party/imgui/imgui.cpp
        runtime/third_party/imgui/imgui_draw.cpp
        runtime/third_party/imgui/imgui_tables.cpp
        runtime/third_party/imgui/imgui_widgets.cpp
        runtime/third_party/imgui/imgui_demo.cpp
        runtime/third_party/imgui/backends/imgui_impl_sdl2.cpp
        runtime/third_party/imgui/backends/imgui_impl_sdlrenderer2.cpp
    )
    target_include_directories(gbrt PUBLIC runtime/third_party/imgui)
endif()

target_include_directories(gbrt PUBLIC runtime/include)
target_link_libraries(gbrt PUBLIC SDL2::SDL2)
target_compile_definitions(gbrt PUBLIC GB_HAS_SDL2)

# Game executable - requires generated files in recompiled/
if(EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/recompiled/rom.c")
    add_executable(rom
        recompiled/rom_main.c
        recompiled/rom.c
        recompiled/rom_rom.c
    )
    target_link_libraries(rom gbrt)
else()
    message(WARNING "recompiled/rom.c not found. Run gbrecomp first to generate it.")
endif()
