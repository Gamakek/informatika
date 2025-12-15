import time
import median
import median_python 

def run_benchmark(n):
    test_data = [float(i) for i in range(n)]

    start_time = time.time()
    cpp_median = median.compute(test_data)
    cpp_time = time.time() - start_time

    py_median, py_time = median_python.compute_median_python(test_data)

    return cpp_median, cpp_time, py_median, py_time

results = []
for iterations in [1000000, 5000000, 10000000]:
    cpp_med, cpp_t, py_med, py_t = run_benchmark(iterations)
    results.append((iterations, round(cpp_t, 2), round(py_t, 2)))

print("№ Теста\tКоличество итераций\tC++ (с)\tPython (с)")
for i, (n, cpp, py) in enumerate(results, 1):
    print(f"{i}\t{n}\t\t{cpp}\t{py}")