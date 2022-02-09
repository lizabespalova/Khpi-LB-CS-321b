#pragma once
#include <iostream>
//#include<chrono>
//#include <time.h>
#include <windows.h>
#pragma warning (disable: 4996)
#define M 5
#define PRINT_TYPE(A) switch (A){case 1: Screen(); break;\
 case 2: Random(); break;}
#define DEBUG
using namespace std;


void Screen();
void Random();