import time

def compute_median_python(arr):
    start_time = time.time()

    sorted_arr = sorted(arr)

    n = len(sorted_arr)
    if n % 2 == 0:
        median = (sorted_arr[n // 2 - 1] + sorted_arr[n // 2]) / 2.0
    else:
        median = sorted_arr[n // 2]

    end_time = time.time()
    return median, end_time - start_time
