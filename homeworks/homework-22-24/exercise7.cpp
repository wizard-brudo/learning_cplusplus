#include <iostream>
#include "lib/lib_arr.h"
using namespace std;

void reverse(int arr[], const int SIZE);
int reverse(int number);

int main() {
    const int N = 10;
    int arr[N], user_number;
    fill_this(arr,N);
    cout << "Массив:";
    show(arr,N);
    cout << endl;
    reverse(arr,N);
    cout << "Массив после реверса:";
    show(arr,N);
    cout << endl;
    cout << "Введите число:";
    cin >> user_number;
    cout << "Перевёрнутое число:" << reverse(user_number) << endl;
    return 0;
}

void reverse(int arr[], const int SIZE) {
    int temp;
    for (int i = 0, j = SIZE - 1; i < j; i++, j--)
    {
        temp = arr[j];
        arr[j] = arr[i];
        arr[i] = temp;
    }
}
int reverse(int number) {
    int reversed_number = 0;
    while(number) {
        reversed_number = number % 10 + reversed_number * 10;
        number /= 10;
    }
    return reversed_number;
}