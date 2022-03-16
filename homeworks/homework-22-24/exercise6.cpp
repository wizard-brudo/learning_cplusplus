#include "lib/lib_arr.h"
#include <iostream>
using namespace std;

int summa(int number);
int summa(int arr[],const int SIZE);

int main() {
    const int N = 10;
    int arr[N];
    fill_this(arr,N);
    cout << "Сумма числа 5555:" << summa(5555) << endl;
    cout << "Массив:";
    show(arr,N);
    cout << endl;
    cout << "Сумма массива:" << summa(arr,N) << endl;
    return 0;
}

int summa(int number) {
    int summa = 0;
    while (number)
    {
        summa += number % 10;
        number /= 10;
    }
    return summa;
}
int summa(int arr[],const int SIZE) {
    int summa = 0;
    for (int i = 0; i < SIZE; i++)
    {
        summa += arr[i];
    }
    return summa; 
}