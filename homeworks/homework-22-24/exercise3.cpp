#include <iostream>
#include <iomanip>
#include "lib/lib_arr.h"
using namespace std;

int get_min(int arr[], const int SIZE);
int get_min(int arr[][COL], const int ROW);
double get_min(double number, double number2, double number3);
int get_min(int number, int number2);

int main()
{
    const int N = 10, ROW = 5;
    double a,b,c;
    int arr[N], matrix[ROW][COL], user_input,n1,n2;
    fill_this(arr, N);
    fill_this(matrix, ROW);
    do
    {
        cout << R"(Какой из минимумов вы хотите получить:
1.Минимум из массива
2.Двумерного массива
3.Трех переменных дробного типа
4.Двух переменных целого типа)" << endl;
        cout << "Введите номер пункта:";
        cin >> user_input;
        switch (user_input)
        {
        case 1:
            cout << "Массив:";
            show(arr, N);
            cout << endl;
            cout << "Минимум из массива:" << get_min(arr, N) << endl;
            break;
        case 2:
            cout << "Матрица:" << endl;
            show(matrix, ROW);
            cout << endl;
            cout << "Минимум из матрицы:" << get_min(matrix, ROW) << endl;
            break;
        case 3:
            cout << "Введите три дробных числа:";
            cin >> a >> b >> c;
            cout << "Минимум из дробных переменных:" << get_min(a,b,c) << endl;
            break;
        case 4:
            cout << "Введите два целых числа:";
            cin >> n1 >> n2;
            cout << "Минимум из целых переменных:" << get_min(n1,n2) << endl;
            break;
        default:
            if(user_input != 5)
                cout << "Неизвестный аргумент" << endl;
            break;
        }
    } while (user_input != 5);
    return 0;
}
int get_min(int arr[], const int SIZE)
{
    int min = arr[0];
    for (int i = 0; i < SIZE; i++)
    {
        if (arr[i] < min)
            min = arr[i];
    }
    return min;
}
int get_min(int arr[][COL], const int ROW)
{
    int min = arr[0][0];
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            if (arr[i][j] < min)
                min = arr[i][j];
        }
    }
    return min;
}
double get_min(double number, double number2, double number3)
{
    if (number < number2 && number < number3)
        return number;
    else if(number2 < number1 && number2 < number3)
        return number2;
    return number3;
}
int get_min(int number, int number2)
{
    return number < number2 ? number : number2;
}
