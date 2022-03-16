#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Двухмерный массив это посути матрица
    const int ROW = 4, COL = 6;
    // long long нужен для того чтобы не было переполнение если пользователь введёт большое число
    long long arr[ROW][COL], user_number;
    cout << "Введите число:";
    cin >> user_number;
    arr[0][0] = user_number;
    for (int i = 0; i < ROW; i++)
    {
        if(i != 0)
            arr[i][0] = arr[i-1][5]; 
        for (int j = 1; j < COL; j++)
        {
            arr[i][j] = arr[i][j - 1] * 2;
            cout << setw(10) << arr[i][j];
        }
        cout << endl;
    }
    return 0;
}