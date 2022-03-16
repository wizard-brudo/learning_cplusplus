#include <iostream>
#include "lib/lib_arr.h"
using namespace std;
bool is_perfect_number(int number);
int amount_perfect_numbers(int numbers[],const int SIZE);
int amount_perfect_numbers(int matrix[][COL],const int ROW);

int main() {
    const int N = 10,ROW=6;
    int arr[N],matrix[ROW][COL];
    // Заполняем массив и матрицу случайными числами
    fill_this(arr,N,1,150),fill_this(matrix,ROW,1,150);
    cout << "Массив:";
    show(arr,N);
    cout << endl;
    cout << "Матрица:" << endl;
    show(matrix,ROW);
    cout << endl;
    cout << "Количество совершенных чисел  в массиве:" << amount_perfect_numbers(arr,N) << endl;
    cout << "Количество совершенных чисел  в матрице:" << amount_perfect_numbers(matrix,ROW) << endl;
    return 0;
}

int amount_perfect_numbers(int numbers[],const int SIZE) {
    int count = 0;
    for (int i = 0; i < SIZE; i++)
    {
        if(is_perfect_number(numbers[i]))
            count++;
    }
    return count;
}
int amount_perfect_numbers(int matrix[][COL],const int ROW) {
    int count = 0;
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            if(is_perfect_number(matrix[i][j]))
                count++;
        }
        
    }
    return count;
}

bool is_perfect_number(int number) {
    int summa = 0;
    for (int i = 1; i < number; i++)
    {
        if(number % i == 0)
            summa += i;
    }
    return summa == number;
}