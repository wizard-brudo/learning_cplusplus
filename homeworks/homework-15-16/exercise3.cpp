#include <iostream>
using namespace std;

int main() {
    int summa = 0;
    for (int i = 1; i < 10000; i++)
    {
        summa = 0;
        for (int j = 1; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                summa += j;
            }
        }
        if (summa == i)
            cout << i << "  ";
    }
    cout << endl;
    return 0;
}