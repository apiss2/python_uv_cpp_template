import numpy as np
from mypkg.cpp_zlib_module.pyInterface import get_zlib_version_len
from mypkg.cpp_eigen_module.pyInterface import add_matrices


def main():
    print(get_zlib_version_len())
    print(add_matrices(np.eye(4), np.ones((4, 4))))


if __name__ == "__main__":
    main()
