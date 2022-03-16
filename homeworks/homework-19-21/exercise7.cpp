#include <iostream>
using namespace std;

int main() {
    const int N = 10;
    int arr[N], range_start, range_finish, counter_digit=0;
    bool is_repeat = false;
    cout << "Введите диапозон:";
    cin >> range_start >> range_finish;
    for (int i = 0; i < N; i++)
    {
        arr[i] = rand() % (range_finish - range_start - 1) + range_start;
    }
    cout << "Массив: ";
    for (int i = 0; i < N; i++)
    {
        cout << arr[i] << "     ";
    }
    cout << endl;
    for (int i = 0; i < N; i++)
    {
        counter_digit = 0;
        is_repeat = false;
        for (int j = 0; j < i; j++)
        {
            if(arr[j] == arr[i]) {
                is_repeat = true;
                break;
            }
        }
        if(is_repeat == false) {
            for (int k = 0; k < N; k++)
            {
                if(arr[k] == arr[i]) {
                    counter_digit++;
                }
            }
            cout << "Цифра " << arr[i] << ", повторяться " << counter_digit << " раз(а)" << endl;
            
        }
        
    }
    
    cout << endl;
    return 0;
}