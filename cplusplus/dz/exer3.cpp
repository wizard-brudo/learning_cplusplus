#include <iostream>
#include "mystl/include/lib_arr.h"
#include "mystl/include/templates.h"
using namespace std;


void del_by_index(int*& arr, int& size, int index)
{
	size--;
	int* new_arr = new int[size];
	int i;
	for (i = 0; i < index; i++) 
	{
		new_arr[i] = arr[i];
	}
	for (int k = index; k < size; k++, i++)
	{
		new_arr[k] = arr[i + 1];
	}

	delete[] arr;
	arr = new_arr;
}

int main()
{
    int length, *arr;
    cout << "Введите размер массива:";
    cin >> length;
    arr = new int[length];
    fill_it(arr, length);
    wrapper_show(arr, length);
    del_by_index(arr, length, 5);
    wrapper_show(arr, length);
    return 0;
}