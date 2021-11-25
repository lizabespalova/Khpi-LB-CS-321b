// Lab8B.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//


#include <iostream>
//#include <algorithm>
#include <iomanip>
#include<windows.h>
//#include <string>

using namespace std;




int main()

{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int arr_size;
    cout << "Введите количество элементов массива: ";
    cin >> arr_size;
   
    int k; 
    int i; 
    int j; 
    cout << "Ваш массив:" << endl;
    for (i = 0; i < arr_size; i++) {
        arr[i] = rand() % 10 + 1;
        cout << arr[i] << " ";
    }
    cout << endl;
    char num; 
    char udal = '-';
    char dobav = '+';
    while (true) {
        cout << "Вы хотите удалить или добавить элементы? <-/+> ";
        cin >> num;
        if (num == dobav) {
            int numstr; 
            cout << "Сколько элементов вы хотите добавить? ";
            cin >> k
            cout << "Выберите позицию, с которой вы хотите добавть данное количество элементов: " << k << endl;
            cin >> numstr;
            
            for (i = 0; i < numstr; i++) {
                add_new_arr[i] = arr[i];
            }
            
            cout << "Новые элементы: ";
            for (j = 0; j < k; j++) {
                add_elements[j] = rand() % 10 + 1;
                cout << add_elements[j] << " ";
            }
            cout << endl;
            for (j = 0, i = numstr; i < arr_size + k; i++, j++) {
                add_new_arr[i] = add_elements[j];
            }
            for (j = numstr + k, i = numstr; j < arr_size + k; j++, i++) {
                add_new_arr[i + k] = arr[i];
            }
            cout << "Ваш новый массив:" << endl;
            for (i = 0; i < arr_size + k; i++) {
                cout << add_new_arr[i] << " ";
            }
            cout << endl;
        }
        else if (num == udal) {
            cout << "Сколько элементов вы хотите удалить? ";
            cin >> k;
            cout << "Выберите позицию, с которой вы хотите удалить данное количество элементов: " << k << endl;
            cin >> i;
            if (arr_size == k and i == 0) {
                cout << "Массив удалён!" << endl;
            }
            else {
                for (; i < arr_size - k; i++) {
                    arr[i] = arr[i + k];
                }
                cout << "Ваш новый массив:" << endl;
                for (i = 0; i < arr_size - k; i++) {
                    cout << arr[i] << " ";
                }
                cout << endl;
            }
        }
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
