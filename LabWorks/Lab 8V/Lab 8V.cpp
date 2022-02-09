// Lab 8V.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <numeric>
#include <algorithm>
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int  count = 0;
	int chislo, eshechislo, tretiysluchai = 0;
	int sum = 0;
	int naoborot = 0;
	int i;
	cout << "Введите число" << endl;
	cin >> chislo;
	eshechislo = chislo;
	tretiysluchai = chislo;
	while (chislo)
	{
		chislo /= 10;
		count++;
	}

	int* arr = new int[count];
	for (int i = 0; i < count; i++)
	{
		/*arr[i] = eshechislo % 10;
		eshechislo /= 10;*/

		sum += arr[i];

	}
	cout << "Ваша сумма:" << sum << endl;
	for (int i = 0; i < count; i++)
	{
		naoborot += (arr[i] * (pow(10, count - i - 1)));
	}
	cout << "Число наоборот:" << naoborot << endl;
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
