#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    srand(time(0));
    const int N = 5, M = 10;
    int arr[N][M], arr2[N][N], k=0, c=0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            arr[i][j] = rand() % 50;
        }
        
    }
    cout << "Исходный массив:" << endl;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cout << setw(6) << arr[i][j];
        }
        cout << endl;
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j += 2)
        {
            arr2[k][c] = arr[i][j] + arr[i][j+1];
            c++;
        }
        k++,c=0;
    }
    cout << "Результат:" << endl;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << setw(6) << arr2[i][j];
        }
        cout << endl;
    }
    return 0;
}