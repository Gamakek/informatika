def process_arrays_advanced():
    
    print("Введите 5 элементов для массива A через пробел:")
    A = list(map(int, input().split()))
    
    print("Введите 5 элементов для массива B через пробел:")
    B = list(map(int, input().split()))

    max_A = max(A)
    max_B = max(B)
    
    print("\nИсходные массивы:")
    print(f"Массив A: {A}")
    print(f"Массив B: {B}")
    
    A_transformed = [round(x / max_A, 2) for x in A]
    B_transformed = [round(x / max_B, 2) for x in B]
    
    print("\nПреобразованные массивы:")
    print(f"Массив A: {A_transformed}")
    print(f"Массив B: {B_transformed}")

process_arrays_advanced()
