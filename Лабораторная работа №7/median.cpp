#include <Python.h>
#include <algorithm>
#include <vector>

static PyObject* median_compute(PyObject* self, PyObject* args) {
    PyObject* listObj;

    if (!PyArg_ParseTuple(args, "O", &listObj))
        return NULL;

    long length = PyList_Size(listObj);

    std::vector<double> data;
    for (long i = 0; i < length; ++i) {
        PyObject* item = PyList_GetItem(listObj, i);
        data.push_back(PyFloat_AsDouble(item));
    }

    std::sort(data.begin(), data.end());

    double median;
    if (length % 2 == 0) {
        median = (data[length / 2 - 1] + data[length / 2]) / 2.0;
    }
    else {
        median = data[length / 2];
    }

    return PyFloat_FromDouble(median);
}

static char median_docs[] =
"compute(list): вычисляет медиану списка чисел\n";

static PyMethodDef median_methods[] = {
    {"compute", (PyCFunction)median_compute, METH_VARARGS, median_docs},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef median_module = {
    PyModuleDef_HEAD_INIT,
    "median",
    "Модуль для вычисления медианы массива",
    -1,
    median_methods
};

PyMODINIT_FUNC PyInit_median(void) {
    return PyModule_Create(&median_module);
}
