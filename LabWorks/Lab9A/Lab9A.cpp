// Lab9A.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <windows.h>
using namespace std;
#include<iomanip>
#define M 5

int main()

{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int arr[M][M];
	int mass[M][M];
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < M; j++)
		{
			arr[i][j] = rand() % 10 + 1;
			mass[i][j] = arr[i][j];
			cout << setw(4) << arr[i][j];
		}
		cout << endl;
	}
	int max = 0;
	int temp = 0;
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < M; j++)
		{
			if (arr[i][j] >= arr[i][max])
				max = j;

		}
		cout << "Максимальное значение в строке:" << arr[i][max] << endl;

		temp = arr[i][0];
		arr[i][0] = arr[i][max];
		arr[i][max] = temp;
		max = 0;
	}
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cout << setw(4) << arr[i][j];
		}
		cout << endl;
	}
	cout << "Исходный массив:\n";
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cout << setw(4) << mass[i][j];
		}
		cout << endl;
	}
	int min = 0;
	int change = 0;
	for (int j = 0; j < M; j++)
	{
		for (int i = 0;i < M;i++) {
			if (mass[i][j] <= mass[min][j])
				min = i;
		}
		cout << "Минимальное значение столбца:" << mass[min][j] << endl;
		change = mass[M - 1][j];
		mass[M - 1][j] = mass[min][j];
		mass[min][j] = change;
	}
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cout << setw(4) << mass[i][j];
		}
		cout << endl;
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
