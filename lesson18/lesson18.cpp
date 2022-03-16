#include <iostream>
using namespace std;

int main()
{
    /*
        Объявить массив целого типа размером N элементов и сразу
        проинициализировать(положительными, отрицательными, нулевыми значениями).
        Посчитать:
        - количество положительных элементов
        - сумму положительных элементов
        - количество отрицательных элементов
        - сумму отрицательных элементов
        - количество нулевых значений
        - сумму всех значений массива

        Рассчитать среднее значение положительных, отрицательных значений
        и среднее значение всего массива. Вывести массив на экран.
    */
    // int counter_positive = 0, counter_negative = 0, counter_zero = 0, summa_pos = 0, summa_neg = 0, summa_all = 0;
    // int mas[10]{2,3,4,0,6,-5,-6,101,102,103};
    // for (int i = 0; i < 10; i++)
    // {
    //     if (mas[i] > 0) {
    //         summa_pos += mas[i];
    //         counter_positive++;
    //     }
    //     else if(mas[i] == 0)
    //         counter_zero++;
    //     else {
    //         summa_neg += mas[i];
    //         counter_negative++;
    //     }
    //     summa_all += mas[i];
    // }
    // if (counter_positive)
    // {
    //     cout << "Количество положительных чисел:" << counter_positive << endl;
    //     cout << "Среднее положительных чисел:" << summa_pos / (double)counter_positive<< endl;
    //     cout << "Сумма  положительных значений " << summa_pos << endl;
    // } else {
    //     cout << "Положительных чисел нет" << endl;
    // }
    // if (counter_negative) {
    //     cout << "Количество отрицательных:" << counter_negative << endl;
    //     cout << "Среднее отрицательных чисел:" << summa_neg / (double)counter_negative << endl;
    //     cout << "Сумма  отрицательных значений " << summa_pos << endl;
    // } else {
    //     cout << "Отрицательных чисел нет" << endl;
    // }
    // cout << "Количество нулевых:" << counter_zero << endl;
    // cout << "Среднее значение:" << summa_all / 10.0 << endl;
    // Копирование массива
    // const int N = 6;
    // int mas[N]{1,2,3,4,5,6}, copy[N];

    // for (int i = 0; i < N; i++) {
    //     copy[i] = mas[i];
    // }
    // for (int i = 0; i < N; i++)
    // {
    //     cout << copy[i] << "    ";
    // }
    // Копирование в обратном порядке
    // 1 Вариант
    // int k = 0;
    // for (int i = N - 1; i >= 0; i--) {
    //     copy[k] = mas[i];
    //     k++;
    // }
    // 2 Вариант
    // for (int i = 0; i < N; i++) {
    //     copy[i] = mas[N-i-1];
    // }
    // for (int i = 0; i < N; i++)
    // {
    //     cout << copy[i] << "    ";
    // }
    /*
        Дан одномерный массив, проинициализирован целыми значениями.
        Переписать в другой массив только положительные значения.

        исходный массив: 25, -125, 35 , 0, -36, -5, 3, -28, -1, 3
        результ. массив: 25, 35, 3, 3
    */
    // const int N = 10;
    // int mas[N]{25, -125, 35, 0, -36, -5, 3, -28, -1, 3}, pos[N]{}, neg[N]{};
    // int k = 0;
    // // Массив положительных
    // for (int i = 0; i < N; i++)
    // {
    //     if (mas[i] > 0)
    //     {
    //         pos[k] = mas[i];
    //         k++;
    //     }
    // }

    // int j = 0;
    // // Массив отрицательных
    // for (int i = 0; i < N; i++)
    // {
    //     if (mas[i] < 0)
    //     {
    //         neg[j] = mas[i];
    //         j++;
    //     }
    // }
    // // Вывод положительных
    // if (k)
    // {
    //     for (int i = 0; i < k; i++)
    //     {
    //         cout << pos[i] << "     ";
    //     }
    //     cout << endl;
    // }
    // else
    // {
    //     cout << "Положительных чисел нет";
    // }
    // if (j)
    // {
    //     // Вывод отрицательных
    //     for (int i = 0; i < j; i++)
    //     {
    //         // if(neg[i] != 0)
    //         cout << neg[i] << "     ";
    //     }
    // } else {
    //     cout << "Отрицатьных чисел нет";
    // }
    /*
        Написать программу, которая определяет,
        является ли одномерный массив палиндромом.

        Размер массива может может быть разным.
    */
    // const int N = 8;
    // int mas[N]{12321, 25, -69, 70, 70, -69, 25, 12321};
    // bool p = true;
    // for (int i = 0, j = N - 1; i < j; i++, j--)
    // {
    //     if (mas[i] != mas[j])
    //     {
    //         p = false;
    //         break;
    //     }
    // }
    // for (int i = 0; i < N / 2; i++)
    // {
    //     if (mas[i] != mas[N - i - 1])
    //     {
    //         p = false;
    //         break;
    //     }
    // }
    // if (p)
    //     cout << "Массив палиндром" << endl;
    // else
    //     cout << "Массив не палиндром" << endl;
    // const int N = 10;
    // int mas[N]{2,3,4,0,6,-5,-6,101,102,103};
    // for (int i = 0; i < N; i++)
    // {
    //     if (mas[i] % 2 == 0)
    //         cout << i << "  "; 
    // }
    // const int N = 10;
    // int mas[N]{2,3,4,0,6,-5,-6,101,102,103}, pn_ps[]{0};
    // int k = 0;
    // for (int i = 0; i < N; i++)
    // {
    //     if (mas[i] > 0) {
    //         pn_ps[k] = i+1;
    //         k++;
    //     }
        
    // }
    // for (int i = 0; i < k; i++)
    //     cout << pn_ps[i] << "   ";
    const int N = 10;
    int mas[N]{2,3,4,0,6,-5,-6, -6, -6,101}, max,min, index_max = 0 , index_min = 0 , counter_min = 0;
    max=mas[0];
    min=mas[0];
    cout << "Исходный массив:";
    for (int i = 0; i < N; i++)
    {
        if (mas[i] > max) {
            max = mas[i];
            index_max = i;
        }
        if(mas[i] < min) {
            min = mas[i];
            index_min = i;
        }
        cout << mas[i]<< "  ";
    }
    cout <<endl << "Максимальное:" << max << endl;
    cout << "Индекс максимального:" << index_max << endl;
    cout << "Минимальное:" << min << endl;
    cout << "Индекс минимального:";
    for (int i = 0; i < N; i++)
    {
        if(mas[i] == min) {
            cout << i << " ";
            counter_min++;
        }
    }
    cout << endl << "Количество минимального элемента:" << counter_min << endl;
    mas[index_max] = min;
    mas[index_min] = max;
    cout << "Массив после обмена:";
    for (int i = 0; i < N; i++)
    {
        cout << mas[i]<< "  ";
    }
    
    
    return 0;
}