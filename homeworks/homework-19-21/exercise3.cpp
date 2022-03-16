#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    srand(time(0));
    const int ROW = 4, COL = 6;
    int arr[ROW][COL], random_number, count=0, index_row=-1, index_column=-1;
    // Заполняем матрицу случайными числами
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            arr[i][j] = rand() % 24 + (-5);
        }
    }
    // Генерируем случайное число
    random_number = rand() % 24 + (-5);
    // Подсчитываем количество вхождений случайного числа и выводим матрицу
    for (int i = 0; i < ROW; i++)
    {
        index_row = -1;
        for (int j = 0; j < COL; j++)
        {
            cout << setw(6) << arr[i][j];
            if(arr[i][j] == random_number) {
                count++;
                index_row = i;
                index_column = j;
            }
        }
        if(index_row != -1)
            cout << "  Столбец  : " << index_column << "    Строка: " << index_row;
        cout << endl;
    }
    cout << "Случайное число: " << random_number << endl;
    if(count)
        cout << "Количество повторений: " << count << endl;
    else
        cout << "Заданного случайного числа нет" << endl;

    return 0;
}