#include <iostream>
using namespace std;

int main() {
    int a,b, pow2 = 1;
    do
    {
        cout << "Введите два положительных числа(a < b):";
        cin >> a >> b;
        if (a < 1 || b < 1 || a > b)
            cout << "Некоректный ответ, пажалуйста введите положительные числа где a < b" << endl;
    } while (a < 1 || b < 1 || a > b); // Программа  запрашивает  целые  положительные  числа  a и  b (a меньше  в).  
    for (int i = a; i < b; i++)
    {
        pow2 *= 2;
        cout << 2 << "^" << i << "=" << pow2 << endl;
    }
    
    return 0;
}