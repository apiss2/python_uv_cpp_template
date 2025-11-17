cmake_minimum_required(VERSION 3.18)

project(cppmodule LANGUAGES CXX)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
add_compile_options("/utf-8")


# --- サブモジュールをそれぞれ追加 ---
add_subdirectory(extern/pybind11)
add_subdirectory(mypkg/cpp_eigen_module)
add_subdirectory(mypkg/cpp_zlib_module)
