#include <iostream>
using namespace std;

int main()
{
    int user_number, digit, copy_digit, counter_digit = 0, copy_user_number, counter=0, untouched_number;
    bool is_repeat = false;
    cout << "Введите целое число:";
    cin >> user_number;
    untouched_number = user_number;
    // Идём справа на лево ибо я забыл как идти слева направо =)
    while (user_number)
    {
        // Обнуляем переменные
        is_repeat = false;
        counter_digit = 0;
        // Получаем цифру
        digit = user_number % 10;
        user_number /= 10;
        copy_user_number = untouched_number;
        // Смотрим не проходили ли мы эту цифру
        // - Зачем counter?
        // - Затем чтобы мы когда проходили число не наткнулись на цифру которое сейчас и обрабатываем
        // - Это полезно к примеру когда мы только в начале обработке числа
        for (int i = 0; i < counter; i++)
        {
            copy_digit = copy_user_number % 10;
            copy_user_number /= 10;
            // Если проходили ставим флаг то что мы эту цифру прошли и выходим из цикла
            if (copy_digit == digit)
            {
                is_repeat = true;
                break;
            }
            
        }
        // Востонавливаем переменную
        copy_user_number = user_number;
        if (is_repeat == false)
        {
            // Смотрим количество повторенний заданной цифры(digit)
            while (copy_user_number)
            {
                copy_digit = copy_user_number % 10;
                copy_user_number /= 10;
                if (copy_digit == digit)
                    counter_digit++;
            }
            cout << "Цифра " << digit << " количество повторений в числе :" << counter_digit+1 << endl;
        }
        counter++;
    }
    return 0;
}