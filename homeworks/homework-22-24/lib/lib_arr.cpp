#include "lib_arr.h"
#include <iostream>
#include <iomanip>
using namespace std;
void fill_this(int arr[][COL],const int ROW, int a, int b) {
    srand(time(0));
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            arr[i][j] = rand() % (b-a+1)+a;
        }
    }
}

void fill_this(int arr[],const int SIZE, int a, int b) {
    srand(time(0));
    for (int i = 0; i < SIZE; i++)
    {
        arr[i] = rand() % (b-a+1)+a;
    }
}


void show(int arr[][COL],const int ROW) {
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            cout << setw(6) << arr[i][j];
        }
        cout << endl;
    }
}
void sort(int arr[], int SIZE, bool direction)
{
    int element, element_index;
    for (int i = 0; i < SIZE; i++)
    {
        element = arr[i];
        element_index = i;
        for (int j = i + 1; j < SIZE; j++)
        {
            if (direction)
            {
                if (arr[j] < element)
                {
                    element = arr[j];
                    element_index = j;
                }
            } else {
                if (arr[j] > element)
                {
                    element = arr[j];
                    element_index = j;
                }
            }
        }
        arr[element_index] = arr[i];
        arr[i] = element;
    }
}

bool is_palindrom(int arr[], const int SIZE)
{
    for (int i = 0; i < SIZE; i++)
    {
        if (arr[i] != arr[SIZE - i - 1])
            return false;
    }
    return true;
}

bool repeations(int arr[], int SIZE, int disered_number)
{
    int count = 0;
    for (int i = 0; i < SIZE; i++)
    {
        if (arr[i] == disered_number)
            count++;
    }
    return count;
}

bool find(int arr[], int SIZE, int disered_number)
{
    for (int i = 0; i < SIZE; i++)
    {
        if (arr[i] == disered_number)
            return true;
    }
    return false;
}

int find_index(int arr[], int SIZE, int disered_number)
{
    for (int i = 0; i < SIZE; i++)
    {
        if (arr[i] == disered_number)
            return i;
    }
    return -1;
}

double average(int numbers[], int SIZE)
{
    double summa = 0;
    for (int i = 0; i < SIZE; i++)
    {
        summa += numbers[i];
    }
    return summa / SIZE;
}

void show(int arr[], int SIZE, bool direction)
{
    if (direction)
    {
        for (int i = 0; i < SIZE; i++)
        {
            cout << arr[i] << " ";
        }
    }
    else
    {
        for (int i = SIZE - 1; i >= 0; i--)
        {
            cout << arr[i] << " ";
        }
    }
}
