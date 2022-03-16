#include <iostream>
using namespace std;

int main()
{
    int n, s;
    double powN=1;
    do
    {
        cout << "Введите число и его степень(целое положительное число):";
        cin >> n >> s;
        if (s < 1)
            cout << "Ошибка некоректная степень";
    } while (s < 1); // Программа запрашивает целое число n  и степень s (целое положительное число).
    // Вычисляем скобки
    // powS - степень n на которую мы умножаем s
    for (int i = 0; i < s; i++)
    {
        powN *= n;
    }
    // Умножаем степень на то что у нас получилось в скобках
    cout << n <<"^"<<s << "=" << powN << endl;
    return 0;
}