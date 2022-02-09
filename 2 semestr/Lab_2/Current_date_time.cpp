#pragma once
#include "Current_date_time.h"

struct Array {
	int ar;
};
Array ar[M];

void Screen() {
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
#ifdef DEBUG
	/*char currDate[30];
	time_t t = time(NULL);
	struct tm tm = *localtime(&t);
	sprintf(currDate, "%d-%d-%d %d:%d:%d", tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday, tm.tm_hour, tm.tm_min, tm.tm_sec);
	cout << "Ваше время" << "\t" << currDate << endl;*/
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
