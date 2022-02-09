#include "Array.h"
int Array(int* arr, int size) {
	srand(time(NULL));
	cout << "Ваш массив:" << endl;
	for (int i = 0; i < size; i++) {
		*(arr + i) = rand() % 20 - 10;
		cout << *(arr + i) << setw(4);
	}
	return  arr, size; 
}
int Negative_numbers(int *arr, int size) {
	int count = 0;
	cout << endl;
	cout << "Отрицательные элементы:" << endl;
	int* mas = new int[count];
	for (int i = 0; i < size; i++) {
		if (*(arr + i) < 0) {
			*(mas+i) = *(arr + i);
		cout << *(mas + i) << setw(4);
		}
	}
	delete[]arr;
	delete[] mas;
	return 0;
}
	

int Replacement(int* arr, int size) {
	cout << endl;
	cout << "Максимальный элемент:" << endl;
	int max = *arr;
	for (int i = 0; i < size;i++) {
		if (max< *(arr + i)) {
			max = *(arr + i);
		}
	}
	cout << max << endl;
	cout << "Замена положительных чисел массива на значение максимального элемента:" << endl;
	for (int i = 0; i < size; i++) {
		if (*(arr+i) > 0) {
			*(arr+i) = max;
		}
		cout << *(arr+i) << setw(4);
	}
	delete[]arr;
	return 0;
	}

