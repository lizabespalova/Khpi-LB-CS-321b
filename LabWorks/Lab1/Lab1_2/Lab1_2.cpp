// Lab1_2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <iomanip>
#define M 5
using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    int mas[M];
    for (int i = 0; i < M; i++)
    {
        mas[i] = rand() % 11 + 1;
        cout << setw(4) << mas[i];
    }
    int position;
    int chislo;
    cout << endl;
    cout << "Введите позицию" << endl;
    cin >> position;
    cout << endl;
    cout << "Введите число" << endl;
    cin >> chislo;
    int arr[ M + 1];
    for (int  i = 0; i <position; i++)
    {
        arr[i] = mas[i];
    }
    arr[position] = chislo;
    for (int i =M; i > position; i--)
    {
        arr[i] = mas[i-1];
      
    }

    for (int i = 0; i < M+1; i++)
    {
        cout << setw(4) << arr[i];
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
 //const int n = 9;
    //int i, j;
    //int c = 0;
    //int matr[n][n];
    //cout << "Ваша матрица" << endl;
    //for (i = 0; i < n; ++i) {
    //    for (j = 0; j < n; ++j) {
    //      /*  matr[i][j] = rand() % 10 + 1;*/
    //        matr[i][j] = ++c;
    //    }
    //}
    //for (i = 0; i < n; ++i) {
    //    for (j = 0; j < n; ++j) {
    //        cout << setw(4)<< matr[i][j] ;
    //    }
    //    cout << endl;
    //}
    //int temp = 0;
    //cout << "Ваша отображенная матрица:" << endl;
    //for (i = 0; i < n; ++i)
    //{
    //    for (j = 0; j < n; ++j)
    //    {
    //        if (i >= j && i + j <= n - 1) {
    //            temp = matr[i][n - j - 1];
    //            matr[i][n - j - 1] = matr[i][j];
    //            matr[i][j] = temp;
    //    }
    //   }
    //}
    //for (i = 0; i < n; ++i) {
    //    for (j = 0; j < n; ++j) {
    //        cout << setw(4) << matr[i][j];
    //    }
    //    cout << endl;
    //}

    //return 0;



  /*  int mas[M][M];
    for (int i = 0; i < M; i++)
    {
        for (int j = 0;j < M;j++) {
            mas[i][j] = rand() % 11 + 1;
            cout << setw(4) << mas[i][j];
        }
        cout << endl;
    }
    int sum = 0;
    int arr[M];
    for (int j = 0; j < M; j++)
    {
        sum = 0;
        for (int i = 0; i < M;i++) {
            sum += mas[i][j];
            arr[j] = sum;
        }
    }
    for (int j = 0; j < M; j++)
    {
        cout << arr[j] << endl;
    }*/
/*short a;
short b;
short c;
short d;
int rez = 0;
cin >> a;
cin >> b;
cin >> c;
cin >> d;
rez = ((short)a & 0x1f) << 11;
rez |= ((short)b & 1) << 9;
rez |= ((short)c & 1) << 8;
rez |= ((short)d & 0xff);
printf("%04x", rez);
cout << "\n";
scanf("%hd", &rez);
a = (rez >> 11) & 0x1f;
b = (rez >> 9) & 1;
c = (rez >> 8) & 1;
d = rez & 0xff;
printf("%hd\n", a);
printf("%hd\n", b);
printf("%hd\n", c);
printf("%hd\n", d);*/

/* for (int i = 0; i < M; i++)
   {
       sum = 0;
       for (int j = 0;j < M;j++) {
           sum += mas[i][j];
    }
       cout << "Сумма в" << i << "строке:"<<sum << endl;
   }*/

   /* int arr[M * M];
      cout << endl;
      cout << endl;
      for (int i = 0; i < M; i++)
      {
          for (int j = 0;j < M;j++) {
              arr[i * M + j] = mas[i][j];
      }
     }
      for (int i = 0; i < M*M; i++)
      {
          cout << setw(4) << arr[i];
      }*/

      /* double x, y;
         cout << "Введите x,y\n";
         cin >> x;
         cout << endl;
         cin >> y;
         if ((x * x + y * y <= 1 && 1 >= x >= -1 && 0 <= y <= 1) || (x * x + y * y <= 1 && 0 >= x >= 1 && 0 >= y >= 1)) {
             cout << "Точка принадлежит" << endl;
         }
         else {
             cout << "Точка не принадлежит" << endl;
         }*/