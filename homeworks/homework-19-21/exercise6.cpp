#include <iostream>
using namespace std;

int main()
{
    srand(time(0));
    const int N = 9;
    double average;
    int arr[N]{ 14,8,19,9,6,17,11,19,7}, range_start, range_finish, summa = 0, max, max_index,temp;
    bool average_is_more_zero = false;
    cout << "Введите диапазон:";
    cin >> range_start >> range_finish;
    for (int i = 0; i < N; i++)
    {
        arr[i] = rand() % (range_finish - range_start - (+1)) + range_start;
    }
    for (int i = 0; i < N; i++)
    {
        cout << arr[i] << "   ";
    }
    cout << endl;
    for (int i = 0; i < N; i++)
    {
        summa += arr[i];
    }
    average = (double)summa / N;
    cout << "Среднее арифметическое:" << average << endl;
    // Сортировка методом выбора
    if (average > 0)
    {
        average_is_more_zero = true;
        for (int i = 0; i < 6; i++)
        {
            max = arr[i];
            max_index = i;
            for (int j = i + 1; j < 6; j++)
            {
                if (arr[j] < max)
                {
                    max = arr[j];
                    max_index = j;
                }
            }
            arr[max_index] = arr[i];
            arr[i] = max;
        }
        // Выводим промежуточный результат чтобы можно было понять перевёрнут ли массив
        cout << "Промежуточный результат:" << endl;
        for (int i = 0; i < N; i++)
        {
            if (average_is_more_zero == true)
            {
                if (i == 6)
                    cout << "|  ";
            }
            else
            {
                if (i == 3)
                    cout << "|  ";
            }
            cout << arr[i] << "   ";
        }
        cout << endl;
        // Переворачиваем оставшиюся часть массива
        for (int i = 6, j = N - 1; i < j; i++, j--)
        {
            temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
        }
    }
    else
    {
        for (int i = 0; i < 3; i++)
        {
            max = arr[i];
            max_index = i;
            for (int j = i + 1; j < 3; j++)
            {
                if (arr[j] < max)
                {
                    max = arr[j];
                    max_index = j;
                }
            }
            arr[max_index] = arr[i];
            arr[i] = max;
        }
        // Выводим промежуточный результат чтобы можно было понять перевёрнут ли массив
        cout << "Промежуточный результат:" << endl;
        for (int i = 0; i < N; i++)
        {
            if (average_is_more_zero == true)
            {
                if (i == 6)
                    cout << "|  ";
            }
            else
            {
                if (i == 3)
                    cout << "|  ";
            }
            cout << arr[i] << "   ";
        }
        cout << endl;
        // Переворачиваем оставшиюся часть массива
        for (int i = 3, j = N - 1; i < j; i++, j--)
        {
            temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
        }
    }
    cout << "Результат:" << endl;
    // Вывод массива
    for (int i = 0; i < N; i++)
    {
        if (average_is_more_zero == true)
        {
            if (i == 6)
                cout << "|  ";
        }
        else
        {
            if (i == 3)
                cout << "|  ";
        }
        cout << arr[i] << "   ";
    }
    cout << endl;
    return 0;
}