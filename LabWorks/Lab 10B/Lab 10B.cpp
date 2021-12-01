// Lab 10B.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
#include <windows.h>
using namespace std;
#include<iomanip>
#define M 5
int function1(int arr[M][M], int) {
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < M;j++) {
			arr[i][j] = rand() % 10 -3;

        }
	}
	return arr[M][M];
}
int funct2(int arr[M][M],int) {
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < M;j++) {
			cout << setw(4) << arr[i][j];
		}
		cout << endl;
	}
	return arr[M][M];
}

int func2(int arr[M][M], int, int polozchisl) {
	int a;
	int polozchisl=0;
	int mas[M];
	cout << "\nВведите номер строки, где будем искать положительные числа(от 0 до 4):\n" << endl;
	cin >> a;
	cout << "Ваша выбранная строка : " <<endl;
	    for (int i =0;i<M ;i++) {
			for (int j = 0;j < M;j++)
				mas[i] = arr[a][i];
			cout << mas[i] << " ";
	}
		for (int i = 0; i < M; i++)
		{
			if (mas[i] >=0) {
				polozchisl = mas[i];
				return polozchisl;
			}
		}
}
int main(int polozchisl, int mas[M])

{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int arr[M][M];
	function1(arr, M);
	funct2(arr, M);
	func2(arr, M);
	cout << "\n";
	cout << "Ваши положительные числа:" << endl;
	for (int i = 0; i < M; i++)
	{
		cout << func2(polozchisl) << " ";
	}
	
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
