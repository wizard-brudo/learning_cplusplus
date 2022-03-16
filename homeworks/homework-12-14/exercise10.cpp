#include <iostream>
using namespace std;

int main() {
    int n,a,b,powA=1,powB=1;
    do
    {
        cout << "Введите положительные числа a и b (a меньше в) и целое число n:";
        cin >> a >> b >> n;
        if(a > b || a < 1 || b < 1)
            cout << "Ошибка,введите положительные a и b где a меньше б" << endl;
    } while (a > b || a < 1 || b < 1);
    // Вычисляем n^a
    for (int i = 0; i < a; i++)
    {
        powA *= n;
    }
    // Вычисляем n^b
    for (int i = 0; i < b; i++)
    {
        powB *= n;
    }
    // Выводим все значения от n^a до n^b
    cout << "все значения от "<<n<<"^"<<a<<"("<<powA<<") до "<<n<<"^"<<b<<"("<<powB<<"):";
    for (int i = powA; i < powB; i++)
    {
        cout << i << " ";
    }
    cout << endl;
    
}