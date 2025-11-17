pybind11_add_module(zlib_module cpp_zlib_module_code.cpp)

if (WIN32)
    # Windows → 同梱したバイナリを使う
    target_include_directories(zlib_module PRIVATE
        ${CMAKE_SOURCE_DIR}/extern/zlib/include
    )
    target_link_libraries(zlib_module PRIVATE
        ${CMAKE_SOURCE_DIR}/extern/zlib/lib/zlibstatic.lib
    )
else()
    # mac / linux → システムの zlib を使う
    find_package(ZLIB REQUIRED)
    target_link_libraries(zlib_module PRIVATE ZLIB::ZLIB)
endif()

# Python パッケージ配置
install(TARGETS zlib_module
    LIBRARY DESTINATION mypkg/cpp_zlib_module)
