from importlib import import_module

try:
    _core = import_module("mypkg.cpp_zlib_module.zlib_module")
except ImportError as e:
    raise RuntimeError("C++ extension failed to import") from e


def get_zlib_version_len():
    return _core.get_zlib_version_len()
