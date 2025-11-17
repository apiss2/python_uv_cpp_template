from importlib import import_module

try:
    _core = import_module("mypkg.cpp_eigen_module.eigen_module")
except ImportError as e:
    raise RuntimeError("C++ extension failed to import") from e


def multiply(a, b):
    return _core.multiply(a, b)


def add_matrices(a, b):
    return _core.add_matrices(a, b)


class Counter:
    def __init__(self):
        self.Counter = _core.Counter

    def increment(self) -> None:
        self.Counter.increment()

    def get(self) -> int:
        return self.Counter.get()
