#include <pybind11/pybind11.h>
#include <zlib.h>

namespace py = pybind11;

int get_zlib_version_len()
{
    const char *ver = zlibVersion();
    return strlen(ver);
}

PYBIND11_MODULE(zlib_module, m)
{
    m.doc() = "C++ extension for zlib module";
    m.def("get_zlib_version_len", &get_zlib_version_len);
}
