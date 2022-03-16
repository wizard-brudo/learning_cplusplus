#include <iostream>
using namespace std;

int main()
{
    /*
        Найти сумму элементов массива между первым четным значением массива
        и последним четным значением массива, также вывести
        значения между этими числами на экран
        (пусть два четных числа обязательно есть в массиве).
        17 15 20 6 9 46 8 19 7
        index1 = 2 index2 = 6
        результат: 20 6 9 46 8 Сумма:
    */
    // const int N = 10;
    // int arr[N]{17,15,20,6,9,46,8,19,7,13}, first_even, last_even, summa = 0;
    // for (int i = 0; i < N; i++)
    // {
    //    if(arr[i] % 2 == 0) {
    //        first_even = i;
    //        break;
    //    }
    // }
    // for (int i = N-1; i >= 0; i--)
    // {
    //    if(arr[i] % 2 == 0) {
    //        last_even = i;
    //        break;
    //    }
    // }
    // for (int i = first_even; i <= last_even; i++)
    // {
    //     cout << arr[i] << "    ";
    //     summa += arr[i];
    // }
    // cout << endl;
    // cout << "Сумма:" << summa << endl;
    /*
        Программа определяет, находится ли введенное с клавиатуры
        число в массиве, методом прямого перебора. Если находится,
        то посчитать количество повторений,
        если нет - вывести сообщение.
    */
    // const int N = 10;
    // int arr[N]{501,-7,200,-151,5,7,3,200,-25,203}, user_input, counter=0;
    // cout << "Введите число:";
    // cin >> user_input;
    // for (int i = 0; i < N; i++)
    // {
    //     if (arr[i] == user_input)
    //         counter++;
        
    // }
    // if (counter)
    //     cout << "Количество повторений заданного числа:" << counter << endl;
    // else
    //     cout << "Заданного числа нет" << endl;
    // const int N = 8;
    // int arr[N]{-25,10,10,89,8,95,10,-3}, temp;

    // for (int i = 0,j = N-1;  i < j; i++,j--)
    // {
    //     temp = arr[i];
    //     arr[i] = arr[j];
    //     arr[j]=temp;
    // }
    // for (int i = 0; i < N; i++)
    // {
    //     cout << arr[i] << "     ";
    // }
    // const int N = 10;
    // int arr[N]{0,-7,0,0,5,7,3,0,-25,0}, arr2[N] , k=0;
    // for (int i = 0; i < N; i++)
    // {
    //     if (arr[i] != 0)
    //     {
    //         arr2[k] = arr[i];
    //         k++;
    //     }
        
    // }
    // for (; k < N; k++)
    //     arr2[k] = 1;
    
    // for (int i = 0; i < N; i++)
    // {
    //     cout << arr2[i] << "    ";
    // }
    // Вариант 2
    // for (int i = 0; i < N; i++)
    // {
    //     if (arr[i] != 0)
    //     {
    //         arr[k] = arr[i];
    //         k++;
    //     }
    // }
    // for (; k < N; k++)
    //     arr[k] = 1;
    
    // for (int i = 0; i < N; i++)
    // {
    //     cout << arr[i] << "    ";
    // }
    // const int N = 10;
    // int arr[N] {1,2,3,4,5,6,7,8,9,10}, temp;
    // temp = arr[0];
    // for (int i = 1; i < N; i++)
    // {
    //     arr[i - 1] = arr[i];
    // }
    // arr[N-1] = temp;
    // for (int i = 0; i < N; i++)
    // {
    //     cout << arr[i]  << "    ";
    // }
    // const int N = 10;
    // int arr[N] {1,2,3,4,5,6,7,8,9,10}, temp, k;
    // cout << "Введи велечину сдвига:";
    // cin >> k;
    // for (int i = 0; i < k; i++)
    // {
    //     temp = arr[0];
    //     for (int j = 1; j < N; j++)
    //     {
    //         arr[j - 1] = arr[j];
    //     }
    //     arr[N-1] = temp;
    // }
    // for (int index = 0; index < N; index++)
    // {
    //     cout << arr[index]  << "    ";
    // }
    return 0;
}