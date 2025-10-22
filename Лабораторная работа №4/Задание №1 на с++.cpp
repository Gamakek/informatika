#include <iostream>
#include <windows.h>

void Max(const float* arr, int size, float* maxValue) {
	*maxValue = arr[0];
	for (int i = 1; i < size; i++) {
		if (arr[i] > *maxValue) {
			*maxValue = arr[i];
		}
	}
}

void DForMax(float* arr, int size, int maxValue) {
	for (int i = 0; i < size; i++) {
		arr[i] = arr[i] / maxValue;
	}
}

void VieweOut(const float* arr, int size, const char* name) {
	std::cout << "Массив " << name << ":";
	for (int i = 0; i < size; i++) {
		std::cout << arr[i] << ' ';
	}
	std::cout << std::endl;
}

void Proces(float* arrA, float* arrB, int size) {

	std::cout << "До изменения:" << std::endl;
	VieweOut(arrA, size, "A");
	float MaxA = 0;
	Max(arrA, size, &MaxA);
	DForMax(arrA, size, MaxA);
	std::cout << "После изменений:" << std::endl;
	VieweOut(arrA, size, "A");

	std::cout << "До изменения:" << std::endl;
	VieweOut(arrB, size, "B");
	float MaxB = 0;
	Max(arrB, size, &MaxB);
	DForMax(arrB, size, MaxB);
	std::cout << "После изменений:" << std::endl;
	VieweOut(arrB, size, "B");
}

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	const int N = 5;
	float* A = new float[N];
	float* B = new float[N];

	std::cout << "Введите " << N << " элементов для массива A:" << std::endl;
	for (int i = 0; i < N; i++) {
		std::cin >> A[i];
	}
	std::cout << "Введите " << N << " элементов для массива B" << std::endl;
	for (int i = 0; i < N; i++) {
		std::cin >> B[i];
	}
	
	Proces(A, B, N);

	delete[] A;
	delete[] B;

	return 0;
}