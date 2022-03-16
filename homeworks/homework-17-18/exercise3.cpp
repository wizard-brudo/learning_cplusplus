#include <iostream>
using namespace std;

int main() {
    const int LENGTH_ARRAY = 5, LENGTH_COMBINED_ARRAY=10;
    int arr1[LENGTH_ARRAY]{-3, 20, 0, 7, 8},arr2[LENGTH_ARRAY]{25, -12, 51, 0, 64},combined_array[LENGTH_COMBINED_ARRAY]{0}, k=0;
    // Копируем чётные элементы из обоих массивов
    for (int i = 0; i < LENGTH_ARRAY; i++)
    {
        if(arr1[i] %  2 == 0 && arr1[i] != 0) {
            combined_array[k] = arr1[i];
            k++;
        }

    }
    for (int i = 0; i < LENGTH_ARRAY; i++)
    {
        if(arr2[i] %  2 == 0 && arr2[i] != 0) {
            combined_array[k] = arr2[i];
            k++;
        }

    }
    // Копируем нечётные элементы из обоих массивов
    for (int i = 0; i < LENGTH_ARRAY; i++)
    {
        if(arr1[i] %  2 != 0 ) {
            combined_array[k] = arr1[i];
            k++;
        }

    }
    for (int i = 0; i < LENGTH_ARRAY; i++)
    {
        if(arr2[i] %  2 != 0 ) {
            combined_array[k] = arr2[i];
            k++;
        }

    }
    // Выводим скомбинированный массив
    cout << "Результат(массив):";
    for (int i = 0; i < LENGTH_COMBINED_ARRAY; i++)
    {
        cout << combined_array[i] << "  ";
    }
    
    return 0;
}