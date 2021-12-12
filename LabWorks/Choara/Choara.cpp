// Choara.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <windows.h>
#include <iostream>
#include<chrono>
#define M 5 // 
#define N 100
using namespace std;

    void qSortI(int a[], int size) {
    int i, j; // указатели, участвующие в разделении
    int lb, ub; // границы сортируемого в цикле фрагмента

    int levo[M], pravo[M]; // массивы частей 
    // каждый запрос задается парой значений,
    // а именно: левой(lbstack) и правой(ubstack)
    // границами промежутка
    int tekpoz = 1; // текущая позиция 
    int seredina; // середина массива
    int pivot; // опорный элемент
    int temp;

    levo[1] = 0;
    pravo[1] = size - 1;
    cout << endl;

    do {
        // Взять границы lb и ub текущего массива из массива.
        lb = levo[tekpoz];
        ub = pravo[tekpoz];
        tekpoz--;

        do {
            // Шаг 1. Разделение по элементу pivot
            seredina = (lb + ub) >> 1;
            i = lb; j = ub; pivot = a[seredina];
            do {
                while (a[i] < pivot) i++;
                while (pivot < a[j]) j--;
                if (i <= j) {
                    temp = a[i]; a[i] = a[j]; a[j] = temp;
                    i++; j--;
                }
            } while (i <= j);

            // Сейчас указатель i указывает на начало правого подмассива,
            // j - на конец левого 
            // Шаги 2, 3. Отправляем большую часть в массив и двигаем lb,ub
            if (i < seredina) { // правая часть больше
                if (i < ub) { // если в ней больше 1 элемента - нужно
                    tekpoz++; // сортировать, запрос в массив
                    levo[tekpoz] = i;
                    pravo[tekpoz] = ub;
                }

                ub = j; // следующая итерация разделения
                // будет работать с левой частью
            }
            else { // левая часть больше
                if (j > lb) {
                    tekpoz++;
                    levo[tekpoz] = lb;
                    pravo[tekpoz] = j;

                }
                lb = i;

            }
        } while (lb < ub);  // пока в меньшей части более 1 элемента
    } while (tekpoz != 0);    // пока есть элементы в массиве
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int mass[M];
    int mas[N];
    int arr[N];
    cout << "Рандомный массив:";
    cout << endl;
    for (int i = 0; i < M; i++)
    {
        mass[i] = rand() % 100 + 1;
        mas[i] = mass[i];
        cout << mass[i] << " ";
    }
    double sum = 0;
    double srznach = 0;
    for (int time = 0;time < N;time++) {
        for (int i = 0; i < M; i++)
        {
            mass[i] = mas[i];
        }
        auto start = std::chrono::high_resolution_clock::now();
        qSortI(mass, M);
        auto end = std::chrono::high_resolution_clock::now();
        chrono::duration<double>duration = end - start;
        printf("Продолжительность выполнения программы: %.10lf", duration.count());
        sum += duration.count();
    }
    srznach = sum / N;
    cout << endl;
    printf("Среднее время: %.10lf\n", srznach);
    cout << "Сортировка рандомного массива:";
    cout << endl;
    for (int i = 0; i < M; i++)
    {
        cout << mass[i] << " ";
    }
    cout << endl;
    cout << "*************************************************************";
    cout << endl;
    int i, j; // указатели, участвующие в разделении
    int lb, ub; // границы сортируемого в цикле фрагмента

    int levo[M], pravo[M]; // массивы частей 
    // каждый запрос задается парой значений,
    // а именно: левой(lbstack) и правой(ubstack)
    // границами промежутка
    int tekpoz = 1; // текущая позиция 
    int seredina; // середина массива
    int pivot; // опорный элемент
    int temp;

    levo[1] = 0;
    pravo[1] = M - 1;


    do {
        // Взять границы lb и ub текущего массива из массива.
        lb = levo[tekpoz];
        ub = pravo[tekpoz];
        tekpoz--;

        do {
            // Шаг 1. Разделение по элементу pivot
            seredina = (lb + ub) / 2;
            i = lb; j = ub; pivot = mass[seredina];
            do {
                while (mass[i] > pivot) i++;
                while (pivot > mass[j]) j--;
                if (i <= j) {
                    temp = mass[i];
                    mass[i] = mass[j];
                    mass[j] = temp;
                    i++; j--;
                }
            } while (i <= j);

            // Сейчас указатель i указывает на начало правого подмассива,
            // j - на конец левого 
            // Шаги 2, 3. Отправляем большую часть в массив и двигаем lb,ub
            if (i < seredina) { // правая часть больше
                if (i > ub) { // если в ней больше 1 элемента - нужно
                    tekpoz++; // сортировать, запрос в массив
                    levo[tekpoz] = i;
                    pravo[tekpoz] = ub;
                }

                ub = j; // следующая итерация разделения
                // будет работать с левой частью
            }
            else { // левая часть больше
                if (j > lb) {
                    tekpoz++;
                    levo[tekpoz] = lb;
                    pravo[tekpoz] = j;

                }
                lb = i;
            }
        } while (lb > ub);    // пока в меньшей части более 1 элемента
    } while (tekpoz != 0);    // пока есть элементы в массиве
    for (int i = 0; i < M; i++)
    {
        arr[i] = mass[i];
    }
    cout << "Упорядоченный массив наоборот:" << endl;
    for (i = 0; i < M; i++) {
        cout << mass[i] << " ";
    }
    sum = 0;
    srznach = 0;
    for (int time = 0;time < N;time++) {
        for (int i = 0; i < M; i++)
        {
            mass[i] = arr[i];
        }
        auto nachalo = std::chrono::high_resolution_clock::now();
        qSortI(mass, M);
        auto conec = std::chrono::high_resolution_clock::now();
        chrono::duration<double>durations = conec - nachalo;
        printf("Продолжительность выполнения программы: %.10lf", durations.count());
        sum += durations.count();
    }
    srznach = sum / N;
    cout << endl;
    printf("Среднее время: %.10lf\n", srznach);
    cout << "Сортировка упорядоченного массива наоборот:";
    cout << endl;
    for (i = 0; i < M; i++) {
        cout << mass[i] << " ";
    }
    cout << endl;
    cout << "*************************************************************";
    cout << endl;
    cout << "Упорядоченный массив:" ;
    qSortI(mass, M);
    for (i = 0; i < M; i++) {
        cout << mass[i] << " ";
    }
    sum = 0;
    srznach = 0;
    for (int time = 0;time < N;time++) {
        auto debuit = std::chrono::high_resolution_clock::now();
        qSortI(mass, M);
        auto finish = std::chrono::high_resolution_clock::now();
        chrono::duration<double>durationses = finish - debuit;
        printf("Продолжительность выполнения программы: %.10lf", durationses.count());
        sum += durationses.count();
    }
    srznach = sum / N;
    cout << endl;
    printf("Среднее время: %.10lf\n", srznach);
    cout << "Сортировка упорядоченного массива:";
    cout << endl;
    for (i = 0; i < M; i++) {
        cout << mass[i] << " ";
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
