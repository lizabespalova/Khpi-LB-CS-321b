// Lab 10.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <windows.h>
using namespace std;
#include<iomanip>
#define M 3


    int * Dvummatrix(int arr[], int)
{
	int mass[M][M];
	int ar[M][M];
	int mnoz;
	int temp = 0;
	cout << "\nОдномерный массив после функции:\n";
	for (int i = 0; i < M; i++)
	{
		for (int j = 0;j < M;j++) {
			mass[i][j] = arr[i * M + j];
			cout << setw(4) << mass[i][j];
		}
		cout << endl;
	}

	for (int i = 0; i < M; i++)
	{
		for (int j = 0;j < M; j++) {
			if (i == j) {
				mnoz = j;

			}
			
			temp = mass[i][0];
			mass[i][0] = mass[i][mnoz];
			mass[i][mnoz] = temp;
			mnoz = 0;
		}

	}

	for (int i = 0; i < M; i++)
	{
		for (int j = 1;j < M;j++) {
			mass[i][j] = mass[i][0] * mass[i][j];
		}
	}
	for (int i = 0; i < M; i++)
	{
		for (int j = 0;j < M;j++) {
			mass[i][0] = mass[i][0] * mass[i][0];
			ar[i][j] = mass[i][j];
		}
	}
	cout << "\nНужный массив:\n";
	int newmnoz=0;
	int change = 0;
	for (int i = 0; i < M; i++)
	{
		for (int j = 0;j < M; j++) {
			if (i == j) {
			newmnoz = j;
			}
			change = ar[i][0];
			ar[i][0] = ar[i][newmnoz];
			ar[i][newmnoz] = change;
			newmnoz = 0;
		}
	}

	for (int i = 0; i < M; i++)
	{
		for (int j = 0;j < M; j++) {
			cout << setw(4) << ar[i][j];
			
		}
		cout << endl;
	}
	for (int i = 0; i < M;i++)
	{
		for (int j = 0; j < M; j++)
		{
			arr[i * M + j] = ar[i][j];

		}
	}
	return arr;
}
	int main(int ar)

{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int arr[M*M];
	cout << "Одномерный массив до функции:\n";
	for (int i = 0; i < M*M;i++)
	{
		arr[i] = rand() % 10 + 1;
		cout << setw(4) <<  arr[i] << " ";
	}
	Dvummatrix(arr, M);
	cout << "Одномерный массив после функции:\n";
	for (int i = 0; i < M*M; i++)
	{
		cout << setw(4) << arr[i] << " ";
	}
	return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
