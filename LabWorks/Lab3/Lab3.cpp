// Lab3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <windows.h>
#include<stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS
#define M 3
using namespace std;
struct data {
	char surname[15];
	char initials;
	short birthdate;
	float salary;
	int mas[10];
};
void input(struct data mm[]) {
	int n = M; //количество элементов в массиве
	int i, j;// текущие индексы в массиве
	int m;//индекс минимального элемента
	float sqx;//рабочая переменная
	for (n = 0; n < M; n++)
	{
		printf("%d.Введите: фамилию, инициалы, год рождения, оклад>",
			n + 1);
		scanf_s("%s", mm[n].surname, sizeof(mm[n].surname));
		if (!strcmp(mm[n].surname, "***")) break;
		scanf_s("%s", &mm[n].initials, sizeof(mm[n].surname));
		scanf_s("%hd", &mm[n].birthdate);
		scanf_s("%f", &mm[n].salary);
	}
}
void sort(struct data mm[]) {
	struct data inf;
	int n = M;
	int m;
	for (int i = 0; i < n - 1; i++) {
		m = i; /* минимальный элемент - первый */
		for (int j = i + 1; j < n; j++)

			if (strcmp(mm[m].surname, mm[j].surname) > 0) m = j;
		if (m > i) {

			inf = mm[i];
			mm[i] = mm[m];
			mm[m] = inf;
		}
	}
	printf("-----------------------------------------------\n");
	printf("|                  Отдел кадров               |\n");
	printf("|---------------------------------------------|\n");
	printf("|  Фамилия |  Инициалы | Год рождения | Оклад |\n");
	printf("|---------------------------------------------|\n");
	for (int i = 0; i < n; i++)
		printf("|%-10s | %c | %5hd | %-11.2f |\n",
			mm[i].surname, mm[i].initials, mm[i].birthdate, mm[i].salary);
	printf("|---------------------------------------------|\n");

}
/*void random(struct data mm[]) {
	for (int n = 0; n < 10; n++) {
		printf("%d. Введите фамилию>", n + 1);
		scanf_s("s", mm[n].surname, sizeof(mm[n].surname));
		if (!strcmp(mm[n].surname, "***"))break;
		scanf_s(" % c", &mm[n].initials, sizeof(mm[n].surname));
		scanf_s(" % sh", &mm[n].birthdate);
		scanf_s(" % f", &mm[n].salary);
	}*/

void print(struct data mm[]) {

	int n = M; //количество элементов в массиве
	int i, j;// текущие индексы в массиве
	int m;//индекс минимального элемента
	float sqx;//рабочая переменная
	printf("-----------------------------------------------\n");
	printf("|                  Отдел кадров               |\n");
	printf("|---------------------------------------------|\n");
	printf("|  Фамилия |  Инициалы | Год рождения | Оклад |\n");
	printf("|---------------------------------------------|\n");
	for (i = 0; i < n; i++)
		printf("| %12s | %2c | %5hd | %-15.2f |\n",
			mm[i].surname, mm[i].initials, mm[i].birthdate, mm[i].salary);
	printf("|---------------------------------------------|\n");


}
int main(void) {
	setlocale(LC_ALL, "rus");
	system("chcp 1251");
	struct data inf;
	struct data spis[10];
	int choice;
	cout << "Выберите, как заполним таблицу:" << endl;
	cout << "(1)Ввод с экрана" << endl;
	cout << "(2)Случайным образом" << endl;
	cin >> choice;
	system("cls");
	while (choice > 2) {
		cout << "Такого действия нет, попробуйте еще" << endl;
		cin >> choice;
	}
	if (choice == 1)
	{
		input(spis);
	}
	/*else if (choice == 2)
	{
		random(spis);
	}*/
	cout << "Выберите операцию которую будем проводить:" << endl;
	cout << "(1)Сортировка" << endl;
	cout << "(2)Печать" << endl;
	int answer;
	cin >> answer;
	if (answer == 1)
	{
		sort(spis);
	}
	else if (answer == 2)
	{
		print(spis);
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
