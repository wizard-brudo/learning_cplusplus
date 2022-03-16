#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    srand(time(0));

    // cout << rand() << endl;
    // cout << "RAND_MAX = " << RAND_MAX << endl;
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << rand() << "     ";
    // }
    // cout << endl;
    // int count = 0, rand_number;

    // for (int i = 0; i < 5; i++)
    // {
    //     rand_number = rand() % 2;
    //     cout << rand_number << " ";
    //     if (rand_number)
    //     {
    //         count++;
    //     }

    // }
    // cout << "Количество единиц: "<< count << endl;
    // cout << endl;
    // for (int i = 0; i < 10; i++)
    // {
    //     cout << rand() % 6 - 3 << "     ";
    // }
    // int a,b;
    // cout << "Введи границы диапазона: ";
    // cin >> a >> b;
    // for (int i = 0; i < 10; i++)
    // {
    //     cout << rand() % (b-a-+1) + a << "  ";
    // }
    /*
        Сгенерировать и вывести на экран 20 случайных чисел
        в диапазоне от -10 до 10.
        Посчитать сколько раз сгенерировался 0.
    */
    // int rand_number, count_zero=0;
    // for (int i = 0; i < 20; i++)
    // {
    //     rand_number = rand() % (10+10+1) - 10;
    //     cout << rand_number << "    ";
    //     if (rand_number == 0)
    //     {
    //         count_zero++;
    //     }

    // }
    // cout << endl;
    // if (count_zero)
    // {
    //     cout << "Количество нулей: " << count_zero << endl;
    // } else {
    //     cout << "Нулей нет" << endl;
    // }
    /*
        Сгенерировать и вывести на экран 10 случайных чисел
        дробного типа
    */
    // cout << setprecision(2) << setiosflags(ios::fixed);
    // for (int i = 0; i < 20; i++)
    // {
    //     cout << (rand() % 10 ) / 4.123 - rand()*0.001 << "  ";
    // }
    // int answer, a = rand()%9+1, b = rand()%9+1;
    // cout << a << " * " << b << " = ";
    // cin >> answer;
    // if(answer == a*b)
    //     cout << "Ответ корректный" << endl;
    // else
    //     cout << "Ответ некорректный" << endl;
    // int count_correct=0, count_uncorrect=0;
    // for (int i = 0; i < 5; i++)
    // {
    //     int answer, a = rand()%9+1, b = rand()%9+1;
    //     cout << i+1 << ". " << a << " * " << b << " = ";
    //     cin >> answer;
    //     if(answer == a*b) {
    //         count_correct++;
    //         cout << "Ответ корректный" << endl;
    //     }
    //     else {
    //         count_uncorrect++;
    //         cout << "Ответ некорректный" << endl;
    //     }
    // }
    // if(count_correct)
    //     cout << "Верных ответов:" <<count_correct << endl;
    // else
    //     cout << "Верных ответов нет";
    // if(count_uncorrect)
    //     cout << "Неверных ответов:" <<count_uncorrect<< endl;
    // else
    //     cout << "Нверных ответов нет";
    // int count_correct=0, count_uncorrect=0 , i=1;
    // char want_continue = 'N';
    // do
    // {
    //     int answer, a = rand()%9+1, b = rand()%9+1;
    //     cout << i << ". " << a << " * " << b << " = ";
    //     cin >> answer;
    //     if(answer == a*b) {
    //         count_correct++;
    //         cout << "Ответ корректный" << endl;
    //     }
    //     else {
    //         count_uncorrect++;
    //         cout << "Ответ некорректный" << endl;
    //     }
    //     i++;
    //     cout << "Хотите продолжить?:";
    //     cin >> want_continue;
    // } while(want_continue == 'Y' || want_continue == 'y');
    // if(count_correct)
    //     cout << "Верных ответов:" <<count_correct << endl;
    // else
    //     cout << "Верных ответов нет" << endl;
    // if(count_uncorrect)
    //     cout << "Неверных ответов:" <<count_uncorrect<< endl;
    // else
    //     cout << "Нверных ответов нет" << endl;
    int attempts = 0, user;
    char want_continue;
    do
    {
        int computer = rand() % 10 + 1;
        attempts=0;
        do
        {
            //cout << computer << endl;
            cout << "Введите число от 1 до 10:";
            cin >> user;
            if (user > computer)
                cout << "Вы ввели больше загаданного числа" << endl;
            else if (user < computer)
                cout << "Вы ввели меньше загаданного числа" << endl;
            else
            {
                cout << "Вы ввели загаданное число" << endl;
            }
            attempts++;

        } while (user != computer);
        cout << "Количество попыток:" << attempts << endl;
        do
        {
            cout << "Хотите продолжить?:";
            cin >> want_continue;
        } while (want_continue == 'y' && want_continue == 'Y' && want_continue == 'n' && want_continue == 'N');
    } while (want_continue == 'Y' || want_continue == 'y');
    // const int N = 20;
    // int arr[N], k = 0;
    // bool is_repeat = false;
    // for (int i = 0; i < N;)
    // {
    //     is_repeat = false;
    //     arr[i] = rand() % N + 1;
    //     for (int j = 0; j < i; j++)
    //     {
    //         if (arr[i] == arr[j])
    //         {
    //             is_repeat = true;
    //             break;
    //         }
    //     }
    //     if (!is_repeat)
    //         i++;
    // }
    // for (int i = 0; i < N; i++)
    // {
    //     cout << arr[i] << "     ";
    // }
    

    return 0;
}