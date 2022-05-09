#include <iostream>
using namespace std;

int get_rnd_number(int a=1, int b=10) {
    srand(time(0));
    int temp;
    if (a > b)
    {
        temp = a;
        a = b;
        b = temp;
    }
    return (rand() % (b - a + 1) + a);
}

int main() {
    int rows, col;
    cout << "Введите количество строк:";
    cin >> rows;
    int **matrix = new int*[rows];
    for (int i = 0; i < rows; i++)
    {
        col = get_rnd_number(1,10);
        matrix[i] = new int[col];
        matrix[i][0] = col;
        for (int j = 1; j < col; j++)
        {
            matrix[i][j] = get_rnd_number(-10,10);
            cout << matrix[i][j] << " ";
        }
        cout << endl;
        delete[] matrix[i];
    }
    
    delete[] matrix;
    return 0;
}