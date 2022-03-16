#include <iostream>
using namespace std;

int main() {
    /*
    В одномерном массиве, состоящем из N целых чисел вычислить и вывести на экран:  
        + количество четных элементов  
        + сумму четных элементов  
        + количество нечетных элементов  
        + сумму нечетных элементов  
        + сумму элементов с четными индексами  
        + сумму элементов с нечетными индексами  
        + количество четных элементов с четными индексами  
    Рассчитать средние арифметические значения для четных и для нечетных значений массива 
    отдельно. 
    */
    const int N = 10;
    int nums[N]{7,9,4,5,6,55,8,57,333,75}, summa_even = 0, summa_even_index = 0, counter_even = 0, summa_odd = 0, summa_odd_index = 0,counter_even_element_with_indices = 0, counter_odd = 0;
    for (int i = 0; i < N; i++)
    {
        // Проверка чётности индексов
        if(i % 2 == 0)
            summa_even_index += nums[i];
        else
            summa_odd_index += nums[i];
        // Проверка на четные элементы с четными индексами
        if(i % 2 == 0 && nums[i] % 2 == 0)
            counter_even_element_with_indices++;
        // Проверка чётности элементов
        if (nums[i] % 2 == 0)
        {
            summa_even += nums[i];
            counter_even++;
        } else {
            summa_odd += nums[i];
            counter_odd++;
        }
    }
    if (counter_even) {
        cout << "Количество четных элементов:"<< counter_even << endl;
        cout << "Cумма четных элементов: " << summa_even << endl;
    }
    else
        cout << "Чётных элементов нет" << endl;
    if(counter_odd) {
        cout << "Количество нечетных элементов:"<<  counter_odd << endl;
        cout << "Cумма нечетных элементов:"<< summa_odd << endl;
    } else
        cout << "Нечётных элементов нет" << endl;
    cout << "Сумма элементов с четными индексами:"<< summa_even_index << endl;
    cout << "Сумма элементов с нечетными индексами:"<<summa_odd_index << endl;
    if(counter_even_element_with_indices)
        cout << "Количество четных элементов с четными индексами:"<< counter_even_element_with_indices << endl;
    else
        cout << "Четных элементов с четными индексами нет" << endl;
    return 0;
}