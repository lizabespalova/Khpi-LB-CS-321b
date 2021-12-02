// Lab 10B.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
#include <iomanip>
#include <time.h>
#include <windows.h>
using namespace std;
#define M 100


int array_print(int arr[M][M], int razm_str, int razm_stol) {

    for (int i = 0; i < razm_str; i++) {
        for (int j = 0; j < razm_stol; j++) {
            arr[i][j] = rand() % 10 - 5;
            cout << setw(3) << arr[i][j];
        }
        cout << endl;
    }
    return 0;
}

int positive(int arr[M][M], int vibor, int razm_stol) {
    int sum = 0;
    cout << "Позитивные числа:" << endl;
    for (int j = 0; j < razm_stol; j++) {

        if (arr[vibor - 1][j] >= 0) {
            cout << setw(3) << arr[vibor - 1][j];
            sum++;
        }
    } cout << endl;
    return sum;
}

int main()
{
    srand(time(NULL));
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    // 2D array 
    int matrix[M][M];
    cout << "Создадим двумерный массив:" << endl;
    int razm_str, razm_stol;
    cout << "Введите количество строк в нем ";
    cin >> razm_str;
    cout << "Введите количество столбцов в нем ";
    cin >> razm_stol;

   
    array_print(matrix, razm_str, razm_stol);

    while (true) {
        
        int vibor;
        cout << "Выберите строку, в которой будем искать положительные числа ";
        cin >> vibor;


        if (vibor > 0 && vibor <= razm_str) {
            cout << "Количество позитивных чисел: " << positive(matrix, vibor, razm_str) << endl;
        }
        else
            cout << "Этой строки не существует" << endl;
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
