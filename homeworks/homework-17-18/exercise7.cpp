#include <iostream>
using namespace std;

int main()
{
    const int N = 5;
    int numbers[N]{0, 2, 8, 4, 10},min_odd_number = 0,index_min_odd_number = -1;
    // Ищем первое нечётное число
    for (int i = 0; i < N; i++)
    {
        if (numbers[i] < min_odd_number && numbers[i] % 2 != 0)
        {
            min_odd_number = numbers[i], index_min_odd_number = i;
            break;
        }
    }
    // Если нашли нечётное число ищем дальше
    if (min_odd_number != 0 && index_min_odd_number != -1)
    {
        for (int i = index_min_odd_number; i < N; i++)
        {
            if (numbers[i] < min_odd_number && numbers[i] % 2 != 0)
            {
                min_odd_number = numbers[i], index_min_odd_number = i;
            }
        }
        cout << "Самое маленькое нечетное число и его позиция:" << min_odd_number << "," << index_min_odd_number<< endl;
    } else {
        // Если нечего не нашли то выводим что четных чисел нет
        cout << "Нечётных чисел нет" << endl;
    }

    return 0;
}