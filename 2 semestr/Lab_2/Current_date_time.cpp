#pragma once
#include "Current_date_time.h"

struct Array {
	int ar;
};


void Screen() {
	Array ar[M];
#ifdef DEBUG
	cout << "Текущая дата:" << __DATE__ << endl;
	cout << "Текущее время:" << __TIME__ << endl;
#endif
	cout << "Введите данные:" << endl;
	for (int i = 0; i < M; i++)
	{
		cin >> ar[i].ar;
	}
	cout << "Ваши введенные данные:" << endl;
	for (int i = 0; i < M; i++)
	{
		cout<< ar[i].ar<<" ";
	}
#ifdef DEBUG
	cout << "\n";
	cout << "Имя файла:" << __FILE__<<endl;
	cout << "Имя функции:" << __FUNCTION__ << endl;
#endif
}




void Random() {
	Array ar[M];
#ifdef DEBUG
	cout << "Текущая дата:" << __DATE__ << endl;
	cout << "Текущее время:" << __TIME__ << endl;
#endif
	for (int i=0; i<M; i++) 
	{
		ar[i].ar = rand() % 10 + 1;
	}
	cout << "Ваши данные, заполненные случайным образом:" << endl;
	for (int i = 0; i < M; i++)
	{
		cout << ar[i].ar << " ";
	}
#ifdef DEBUG
	cout << "\n";
	cout << "Имя файла:" << __FILE__ << endl;
	cout << "Имя функции:" << __FUNCTION__ << endl;
#endif
}
