#include <iostream>
using namespace std;

int main() {
    // Ставим 1 а не 0 так любое число умноженное на ноль равно ноль
    // А также long потому что число получиться огромным
    long multiply = 1;
    int a;
    do
    {
        cout << "Введите любое число от 1 до 20:";
        cin >> a;
    } while (a > 20 || a < 1);
    // Можно без счётчика но мы теряем переменную
    // while (a <= 20)
    // {
    //     multiply *= a;
    //     a++;
    // }
    // Можно со счётчиком так мы не потеряем переменную a
    for (int i = a; i <= 20; i++)
    {
        multiply *= i;
    }
    cout << "Произведение всех целых чисел от "<< a <<" до 20:" << multiply << endl;
    return 0;
}