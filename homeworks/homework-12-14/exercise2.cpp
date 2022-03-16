#include <iostream>
using namespace std;

int main() {
    int summa = 0;
    // int i = 1;
    // while(i < 1000) {
    //     summa += i;
    //     i++;
    // }
    for (int i = 1; i <= 1000; i++)
    {
        summa += i;
    }
    cout << "Среднее арифметическое всех целых чисел от 1 до 1000:" << summa / 1000.0 << endl;
    return 0;
}