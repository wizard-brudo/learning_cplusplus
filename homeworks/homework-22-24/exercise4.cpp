#include <iostream>
using namespace std;

bool is_perfect_number(int number);
int main() {
    int number;
    cout << "Введите число:";
    cin >> number;
    if(is_perfect_number(number))
        cout << "Это число совершенно" << endl;
    else
        cout << "Это число не совершенно" << endl;
    return 0;
}

bool is_perfect_number(int number) {
    int summa = 0;
    for (int i = 1; i <= number / 2; i++)
    {
        if(number % i == 0)
            summa += i;
    }
    return summa == number;
}