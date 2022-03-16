#include <iostream>
using namespace std;

int main() {
    int d1,d2,d3, counter = 0;
    for (int i = 100; i <= 999; i++)
    {
        d1 = i / 100;
        d2 = i / 10 % 10;
        d3 = i % 10;
        if (d1 != d2 && d2 != d3 && d1 != d3)
            counter++;
    }
    cout << "Количество чисел с разными цифрами:" << counter << endl;
    return 0;
}