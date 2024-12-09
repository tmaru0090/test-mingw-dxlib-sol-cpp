cmake_minimum_required(VERSION 3.31)
set(CMAKE_C_COMPILER gcc)
set(CMAKE_CXX_COMPILER g++)
project("test-dxlib-sol-cpp")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ../../bin/)
set(CMAKE_CXX_FLAGS -static)


set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)  # Optional: Disable compiler-specific extensions

set(DXLIB_DIR C:/Users/tanukimaru/use-bin/dxlib-mingw/12_1_0_i686_release_posix_dwarf_rt_v10_rev3/)
set(SOL_DIR C:/Users/tanukimaru/Downloads/other/sol2-develop/include/)
set(LUA_DIR C:/Users/tanukimaru/Downloads/other/lua-5.4.2_Sources/lua54-mingw/)
set(WINDOWS_FLAGS -m32 -mwindows)
set(CFLAGS -Wall)

add_subdirectory(src)

