// Lab7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <stdio.h>
#include <math.h>
#include <windows.h>
#pragma warning (disable : 4996)

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	short a;
	double x, y;
	short b;
	for (a = 0; a < 5;a++)
	{
		printf("|  x  |     y    |\n");
		printf("|-----|----------|\n");
		for (x = 0; x <= 8; x += 0.25) {

			if (x <= 2)
				y = 1 + (0 - pow(x - 1, 2));

			else if (x <= 4)
				y = 1 + (0 - pow(x - 3, 2));

			else if (x <= 6)
				y = -1 - (0 - pow(x - 5, 2));

			else if (x <= 8)
				y = -1 - (0 - pow(x - 7, 2));


			printf("|%5.2lf|%10.7lf|", x + a * 8, y);
			b = ((y + 1) * 10);
			//if ((y - 1) * 10 * b > 0)b++;
			for (; b > -2;b--) printf(" ");
			printf("*\n");
		}
		printf("Нажмите клавишу enter...\n");
		getchar();
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
