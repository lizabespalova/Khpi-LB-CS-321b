// RGZ.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include<stdlib.h>
#include<conio.h>
#include<iostream>
#include<windows.h>
#include<chrono>
#define N 10
using namespace std;

//гномья сортировка
void  GnomsortNaoborot(int A[N]) {
   
    for (int i = 0; i < N; ++i)
        
    for (int i = 0; i + 1 < N; ++i) {
        if (A[i] < A[i + 1]) {
            swap(A[i], A[i + 1]);

            if (i != 0)
                i -= 2;
        }
    }

}
void Gnomsort(int A[N]) {
    int i = 0;
    int tmp = 0;
    int mas[N];
    while (i < N) {
        if (i == 0 || A[i - 1] <= A[i])
            i++;
        else {
            tmp = A[i];
            A[i] = A[i - 1];
            A[i - 1] = tmp;
            i--;
           
        }
    }
}
    int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int A[N], tmp;
    int i = 0;
    cout << "Изначальный массив:" << endl;
    for (i = 0;i < N;i++) {
        A[i] = rand() % 100+1;
        cout << A[i]<< " ";
    }
    cout << endl;
    auto start = std::chrono::high_resolution_clock::now();
    Gnomsort(A);
    auto end = std::chrono::high_resolution_clock::now();
    chrono::duration<double>duration = end - start;
    printf("Продолжительность выполнения программы: %.10lf\n", duration.count());
    cout << "Конечный результат:" << endl;
    for (i = 0; i < N; i++) {
        cout << A[i]<< " ";
    }
    cout << endl;
  
   auto nachalo = std::chrono::high_resolution_clock::now();
   GnomsortNaoborot(A);
   auto conec = std::chrono::high_resolution_clock::now();
   chrono::duration<double>durations = conec -nachalo;
   printf("Продолжительность выполнения программы: %.10lf\n", durations.count());
   cout << "Массив по убыванию:" << endl;
       for (i = 0; i < N; i++) {
           cout << A[i] << " ";
       }
   cout << endl;

 
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
  