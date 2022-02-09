// Lab_1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <windows.h>
#include<stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS
using namespace std;
struct data {
	char surname[15];
	char initials;
	short birthdate;
	float salary;
	int mas[10];
};
void print(data mm[]) {
	
	int n; //количество элементов в массиве
	int i, j;// текущие индексы в массиве
	int m;//индекс минимального элемента
	float sqx;//рабочая переменная
	printf("-----------------------------------------------\n");
	printf("|                  Отдел кадров               |\n");
	printf("|---------------------------------------------|\n");
	printf("|  Фамилия |  Инициалы | Год рождения | Оклад |\n");
	printf("|---------------------------------------------|\n");
	for (i = 0; i < n; i++) {
		printf("| %8s | %c | %5d | %-11.2f |\n",
			mm[i].surname, mm[i].initials, mm[i].birthdate, mm[i].salary);


	}
	printf("|---------------------------------------------|\n");

}
int main(void) {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	struct data inf;
	int choice;
         	cout << "Выберите операцию:" << endl;
			cout << "(1)Ввод с экрана" << endl;
			cout << "(2)Случайным образом" << endl;
			cout << "(3)Сортировка" << endl;
			cout << "(4)Печать" << endl;
			cin >> choice;
			system("cls");
			while (choice > 4) {
				cout << "Такого действия нет, попробуйте еще" << endl;
				cin >> choice;
			}
			if (choice == 1)
			{
				input(mas, 5);
			}
			else if (choice == 2)
			{
				random(mas, 5);
			}
			else if (choice == 3)
			{
				sort(mas, 5);
			}
			else if (choice == 4)
			{
				print(data mm);
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
//using namespace std;
//struct Number {
//	int mas[5];
//};Number spis[5];
//
//void Print()
//{
//	spis[0].mas[0] = 1;
//	spis[1].mas[1] = 8;
//	spis[2].mas[2] = 3;
//	spis[3].mas[3] = 6;
//	spis[4].mas[4] = 12;
//	for (int i = 0; i < 5; i++)
//	{
//		cout << spis[i].mas[i] << " ";
//	}
//	cout << endl;
//
//}
//
//void Input(Number mas[], int size)
//{
//	cout << "Введите данные:" << endl;
//
//	for (int i = 0; i < size; i++)
//	{
//		cin >> spis[i].mas[i];
//	}
//	cout << "Ваши данные:" << endl;
//	for (int i = 0; i < size; i++)
//	{
//		cout << spis[i].mas[i] << " ";
//	}
//
//	cout << endl;
//}
//void Random(Number mas[], int size)
//{
//	cout << "Ваши данные:" << endl;
//
//	for (int i = 0; i < size; i++)
//	{
//		spis[i].mas[i] = rand() % 100 + 1;
//	}
//	for (int i = 0; i < size; i++)
//	{
//		cout << spis[i].mas[i] << " ";
//	}
//
//	cout << endl;
//}
//void Sort(Number mas[], int size)
//{
//
//	cout << "Ваши данные:" << endl;
//	for (int i = 0; i < size; i++)
//	{
//		spis[i].mas[i] = rand() % 100 + 1;
//	}
//	for (int i = 0; i < size; i++)
//	{
//		cout << spis[i].mas[i] << " ";
//	}
//	cout << endl;
//	cout << "Сортировка ваших данных:" << endl;
//	for (int i = 0; i < size; i++)
//	{
//		for (int j = i + 1; j < size; j++)
//		{
//			if (spis[i].mas[i] > spis[j].mas[j]) {
//				swap(spis[i].mas[i], spis[j].mas[j]);
//			}
//		}
//		cout << spis[i].mas[i] << " ";
//	}
//
//	cout << endl;
//}
//
//int main() {
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//	int choice = 0;
//	Number mas[5];
//	srand(time(NULL));
//	while (true) {
//		cout << "Выберите операцию:" << endl;
//		cout << "(1)Ввод с экрана" << endl;
//		cout << "(2)Случайным образом" << endl;
//		cout << "(3)Сортировка" << endl;
//		cout << "(4)Печать" << endl;
//		cin >> choice;
//		system("cls");
//		while (choice > 4) {
//			cout << "Такого действия нет, попробуйте еще" << endl;
//			cin >> choice;
//		}
//		if (choice == 1)
//		{
//			Input(mas, 5);
//		}
//		else if (choice == 2)
//		{
//			Random(mas, 5);
//		}
//		else if (choice == 3)
//		{
//			Sort(mas, 5);
//		}
//		else if (choice == 4)
//		{
//			Print();
//		}
//
//	}
//}
