#pragma once
#include "Current_date_time.h"

struct Array {
	int ar;
};
Array ar[M];

void Screen() {
#ifdef DEBUG
	cout << "������� ����:" << __DATE__ << endl;
	cout << "������� �����:" << __TIME__ << endl;
#endif
	cout << "������� ������:" << endl;
	for (int i = 0; i < M; i++)
	{
		cin >> ar[i].ar;
	}
	cout << "���� ��������� ������:" << endl;
	for (int i = 0; i < M; i++)
	{
		cout<< ar[i].ar<<" ";
	}
#ifdef DEBUG
	cout << "\n";
	cout << "��� �����:" << __FILE__<<endl;
	cout << "��� �������:" << __FUNCTION__ << endl;
#endif
}




void Random() {
#ifdef DEBUG
	/*char currDate[30];
	time_t t = time(NULL);
	struct tm tm = *localtime(&t);
	sprintf(currDate, "%d-%d-%d %d:%d:%d", tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday, tm.tm_hour, tm.tm_min, tm.tm_sec);
	cout << "���� �����" << "\t" << currDate << endl;*/
	cout << "������� ����:" << __DATE__ << endl;
	cout << "������� �����:" << __TIME__ << endl;
#endif
	for (int i=0; i<M; i++) 
	{
		ar[i].ar = rand() % 10 + 1;
	}
	cout << "���� ������, ����������� ��������� �������:" << endl;
	for (int i = 0; i < M; i++)
	{
		cout << ar[i].ar << " ";
	}
#ifdef DEBUG
	cout << "\n";
	cout << "��� �����:" << __FILE__ << endl;
	cout << "��� �������:" << __FUNCTION__ << endl;
#endif
}
