// RGZ.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include<stdlib.h>
#include<conio.h>
#include<iostream>
#include<windows.h>
#include<chrono>
#define N 45
#define M 100
using namespace std;

//гномья сортировка
//
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
    int mas[N];
    int arr[N];
    cout << "Рандомный массив:" << endl;
    for (i = 0;i < N;i++) {
        A[i] = rand() % 100 + 1;
        cout << A[i] << " ";
        mas[i] = A[i];
    }
    cout << endl;
    double sum = 0;
    double srznach = 0;
    for (int time = 0;time < M;time++) {
        for ( i = 0; i < N; i++)
        {
            A[i] = mas[i];
        }
        auto start = std::chrono::high_resolution_clock::now();
        Gnomsort(A);
        auto end = std::chrono::high_resolution_clock::now();
        chrono::duration<double>duration = end - start;
       /* printf("Продолжительность выполнения программы: %.10lf\n", duration.count());*/
        sum += duration.count();
    }
    srznach = sum / M;
    printf("Среднее время: %.10lf\n", srznach);
    cout << "Сортировка рандомного массива:" << endl;
    for (i = 0; i < N; i++) {
        cout << A[i] << " ";
    }
    cout << endl;
    cout << "*************************************************************";
    cout << endl;
    for (int i = 0; i < N; i++) {

        for (int i = 0; i + 1 < N; i++) {
            if (A[i] < A[i + 1]) {
                swap(A[i], A[i + 1]);

                if (i != 0)
                    i -= 2;
            }
           
        }
        arr[i] = A[i];
    }
    sum = 0;
    srznach = 0;
    cout << "Упорядоченный массив наоборот:" << endl;
    for (i = 0; i < N; i++) {
        cout << A[i] << " ";
    }
    cout << endl;
    for (int time = 0;time < M;time++) {
        for (i = 0; i < N; i++)
        {
            A[i] = arr[i];
        }
        auto nachalo = std::chrono::high_resolution_clock::now();
        Gnomsort(A);
        auto conec = std::chrono::high_resolution_clock::now();
        chrono::duration<double>durations = conec - nachalo;
      /*  printf("Продолжительность выполнения программы: %.10lf\n", durations.count());*/
        sum += durations.count();
        }
        srznach = sum / M;
        printf("Среднее время: %.10lf\n", srznach);
    
    cout << "Сортировка упорядоченного массива наоборот:";
    cout << endl;
    for (i = 0; i < N; i++) {
        cout << A[i] << " ";
    }
    cout << endl;
    cout << "*************************************************************";
    cout << endl;
    cout << "Упорядоченный массив:" << endl;
    Gnomsort(A);
    sum = 0;
    srznach = 0;
    for (i = 0; i < N; i++) {
        cout << A[i] << " ";
    }
    cout << endl;
    for (int time = 0;time < M;time++) {
        auto debuit = std::chrono::high_resolution_clock::now();
        Gnomsort(A);
        auto finish = std::chrono::high_resolution_clock::now();
        chrono::duration<double>durationses = finish - debuit;
      /*  printf("Продолжительность выполнения программы: %.10lf\n", durationses.count());*/
        sum += durationses.count();
    }
    srznach = sum / M;
    printf("Среднее время: %.10lf\n", srznach);
    cout << "Сортировка упорядоченного массива:" << endl;
    for (i = 0; i < N; i++) {
        cout << A[i] << " ";
    }
    cout << endl;
    cout << "*************************************************************";
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
  