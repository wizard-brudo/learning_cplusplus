#include <iostream>
using namespace std;

int main() {
    // int i = 1; переменная для цикла while
    int n, factorial = 1;
    do
    {
        cout << "Введите любое положительное число:";
        cin >> n;
    } while (n < 0); // Почему ноль?Потому что в примерах есть пример с нулём Э0! = 1 (факториал 0 равен 1 (по определению факториала))
    // Начинаем вычислять факториал
    if(n == 0) { // Обрабатываем случай когда пользователь ввёл ноль
        factorial = 1;
    } else {
        // while (i <= n)
        // {
        //     factorial *= i;
        //     i++;
        // }
        for (int i = 1; i <= n; i++)
        {
            factorial *= i;
        }
        
    }
    cout << "Факториал числа "<< n << ":" << factorial << endl;
    
    return 0;
}