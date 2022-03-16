#include <iostream>
using namespace std;

int main() {
    int num1,num2,num3,num4, counter=0;
    for (int i = 1000; i <= 9999; i++)
    {
        num1 = i / 1000;
        num2 = i % 1000 / 100;
        num3 = i % 100 / 10;
        num4 = i % 10;
        if(num1+num2+num3+num4 == 15) {
            cout << i <<endl;
            counter++;
        }
    }
    cout << "Количество цифер сумма которых равна 15:" << counter << endl;
    
}