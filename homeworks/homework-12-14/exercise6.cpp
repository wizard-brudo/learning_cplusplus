#include <iostream>
using namespace std;

int main()
{
    int a, b, summa = 0;
    cout << "Введите два целых числа:";
    cin >> a >> b;
    int i = a;
    if (a < b)
    {
        // while (i < b)
        // {
        //     if (i % 2 != 0)
        //     {
        //         cout << i << " ";
        //         summa += i;
        //     }
        // }
        // Почему i <= b?Чтобы при случаи 0 1 вывелось 1
        for (; i <= b; i++)
        {
            if (i % 2 != 0)
            {
                cout << i << " ";
                summa += i;
            }
        }
        cout << endl;
    }
    else if (a > b)
    {
        // while (i > b)
        // {
        //     if (i % 2 != 0)
        //     {
        //         cout << i << " ";
        //         summa += i;
        //     }
        // }
        // Почему i >= b?Чтобы при случаи 1 0 вывелось 1
        for (; i >= b; i--)
        {
            if (i % 2 != 0)
            {
                cout << i << " ";
                summa += i;
            }
        }
        cout << endl;
    }
    else
    {
        // Когда a==b выводим это
        cout << "A и B равны" << endl;
    }
    if(summa) {
        cout << "Сумма нечётных чисел:" << summa << endl;
    }

    return 0;
}