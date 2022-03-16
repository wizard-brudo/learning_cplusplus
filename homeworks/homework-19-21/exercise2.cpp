#include <iostream>
using namespace std;

int main()
{
    srand(time(0));
    const int N = 9;
    double average;
    int arr[N], range_start, range_finish, summa=0, max, max_index;
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
    // Сортировка выбором
    if (average > 0)
    {
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
    }
    // Вывод массива
    for (int i = 0; i < N; i++)
    {
        cout << arr[i] << "   ";
    }
    cout << endl;
    
    return 0;
}