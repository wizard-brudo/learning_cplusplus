#include <iostream>
using namespace std;

int main() {
    const int N = 10;
    int arr[N]{1,50,30,-2,-3,-4,-5,23,47,475}, first_negative=0, last_negative=0, summa_negative=0;
    for (int i = 0; i < N; i++)
    {
        if(arr[i] < 0 && first_negative == 0)
            first_negative = arr[i];
        if(arr[i] < 0) {
            summa_negative += arr[i];
            last_negative = arr[i];
        }
    }
    if(first_negative == 0 && last_negative == 0)
        cout << "Отрицательных значений нет" << endl;
    else if(first_negative == last_negative)
        cout << "Найденно только одно отрицательное значение" << endl;
    else {
        cout << "Сумма отрицательных чисел: " << summa_negative << endl;
    }
    return 0;
}