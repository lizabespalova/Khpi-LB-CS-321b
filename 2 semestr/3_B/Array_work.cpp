#include "Array_work.h"

void b(int* arr, int size) {
	int count = 0;
	cout << endl;
	cout << "Отрицательный массив:" << endl;

	for (int i = 0; i < size; i++) {
		if (*(arr + i) < 0) {
			count++;
		}
	}

}
void c(int* arr, int size) {
	int razm = 0;
	cout << endl;
	{ cout << "Положительный массив:" << endl; }

	for (int i = 0; i < size; i++) {
		if (*(arr + i) < 0) {
			razm++;
		}
	}

}
void d(int* arr, int size) {
	int razmer = 0;
	cout << endl;
	{ cout << "Нулевой массив:" << endl; }

	for (int i = 0; i < size; i++) {
		if (*(arr + i) == 0) {
			razmer++;
		}
	}
}
void B(int* arr, int size, int count) {
	
	int nul = 0;
	int* b_mas = new int[count];
	count = 0;
	for (int i = 0; i < size; i++) {
		if (*(arr + i) < 0) {
			*(b_mas + count) = *(arr + i);
			nul++;
		 { cout << *(b_mas + count) << setw(4); 
			}
			count++;
		}
	}
	if (nul == 0) {
		cout << "Отрицательных значений в массиве нет" << endl;
	}
}
int C (int* arr,  int size, int razm ) {
	
	int* c = new int[razm];
	razm = 0;
	int nul = 0;
	for (int i = 0; i < size; i++) {
		if (*(arr + i) > 0) {
			*(c + razm) = *(arr + i);
			nul++;
	 { cout << *(c + razm) << setw(4); }
			razm++;
		}
	}
	if (nul == 0) {
		cout << "Положительных значений  в массиве нет" << endl;
	}
	return  c, razm;
}
int D(int* arr, int size, int razmer) {
	
	int* d = new int[razmer];
	razmer = 0;
	int nul = 0;
	for (int i = 0; i < size; i++) {
		if (*(arr + i) == 0) {
			*(d + razmer) = *(arr + i);
			nul++;
			 cout << *(d + razmer) << setw(4); 
			razmer++;
		}
		
	}
	if (nul == 0) {
	{ cout << "Нулей в массиве нет" << endl; }
	}
	return d, razmer;
}
