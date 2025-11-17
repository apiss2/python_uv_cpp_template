#include <pybind11/pybind11.h>
#include <pybind11/eigen.h>
#include <Eigen/Dense>

namespace py = pybind11;

int multiply(int a, int b)
{
    return a * b;
}

class Counter
{
public:
    Counter(int start = 0) : value(start) {}
    void increment() { value++; }
    int get() const { return value; }

private:
    int value;
};

Eigen::MatrixXd add_matrices(const Eigen::MatrixXd &a, const Eigen::MatrixXd &b)
{
    return a + b;
}

PYBIND11_MODULE(eigen_module, m)
{
    m.doc() = "C++ extension for eigen module";
    m.def("multiply", &multiply);
    m.def("add_matrices", &add_matrices);
    py::class_<Counter>(m, "Counter")
        .def(py::init<int>())
        .def("increment", &Counter::increment)
        .def("get", &Counter::get);
}
