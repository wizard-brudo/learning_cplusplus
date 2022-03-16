#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int N = 10;
    int max_index = 0, min_index = 0,n;
    long double array[N]{-1.3, 2.6, -3.2, 10, 50.3, 32.6, -65.3, 8.9, -9.7, 10.5}, summa_negative = 0, product = 1, product_even = 1;
    // Сумма отрицательных элементов
    for (int i = 0; i < N; i++)
    {
        if (array[i] < 0)
            summa_negative += array[i];
    }
    // Произведение  элементов,  находящихся  между  min  и  max  элементами
    //----------------------------------------------------------------------
    // Ищем  индексы max и min
    for (int i = 0; i < N; i++)
    {
        if (array[i] > array[max_index])
            max_index = i;
        if (array[i] < array[min_index])
            min_index = i;
    }
    // Находим произведение  элементов,  находящихся  между  min  и  max  элементами
    if (max_index > min_index)
        for (int i = min_index; i <= max_index; i++)
            product *= array[i];
    else
        for (int i = max_index; i <= min_index; i++)
            product *= array[i];

    // Находим произведение элементов с четными индексами
    for (int i = 0; i < N; i++)
    {
        if (i % 2 == 0) {
            product_even *= array[i];
        }
    }
    cout << setprecision(10);
    if (summa_negative)
        cout << "Сумма отрицательных элементов:" << summa_negative << endl;
    else
        cout << "Отрицательных чисел нет!"  << endl;
    
    if(product != 1)
        cout << "Произведение  элементов,  находящихся  между  min  и  max  элементами:" << product << endl;
    else
        cout << "Ошибка(может быть что не так с максимальным или минимальном числом)!" << endl;

    if(product_even != 1)
        cout << "Произведение элементов с четными индексами:" << product_even << endl;
    else
        cout << "Чётных чисел нет!" << endl;
    
}