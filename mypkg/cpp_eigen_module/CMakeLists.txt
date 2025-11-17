pybind11_add_module(eigen_module cpp_eigen_module_code.cpp)

# ヘッダとして include するだけ
include_directories(${CMAKE_SOURCE_DIR}/extern/eigen)

# Python パッケージ配置
install(TARGETS eigen_module
    LIBRARY DESTINATION mypkg/cpp_eigen_module)
