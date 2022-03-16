#include <iostream>
using namespace std;

int main() {
    const int N = 10;
    int arr[N] {1,2,3,4,5,6,7,8,9,10}, temp, k;
    cout << "Исходный массив:";
    for (int index = 0; index < N; index++)
    {
        cout << arr[index]  << "    ";
    }
    cout << endl;
    cout << "Введи велечину сдвига:";
    cin >> k;
    // Количество сдвигов
    for (int i = 0; i < k; i++)
    {
        // сдвиг элементов
        temp = arr[N-1];
        for (int j = N-1; j >= 0; j--)
        {
            arr[j] = arr[j-1];
        }
        arr[0] = temp;
    }
    for (int index = 0; index < N; index++)
    {
        cout << arr[index]  << "    ";
    }
    return 0;
}