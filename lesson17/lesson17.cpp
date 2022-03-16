#include <iostream>
using namespace std;

int main()
{
    // char sym;
    // int rows;
    // cout << "Enter rows and symbol:";
    // cin >> rows >> sym;
    //
    // for (int i = 0; i < rows; i++)// проход по строкам
    //{
    //	for (int j = 0; j < rows; j++)
    //	{
    //		if (i + j <= rows - 1)
    //			cout << sym << " ";
    //		else
    //			cout << "  ";
    //	}
    //	cout << "   ";
    //	for (int j = 0; j < rows; j++)
    //	{
    //		if (i <= j)
    //			cout << sym << " ";
    //		else
    //			cout << "  ";
    //	}
    //	cout << "   ";
    //	for (int j = 0; j < rows; j++)
    //	{
    //		if (i + j >= rows - 1)
    //			cout << sym << " ";
    //		else
    //			cout << "  ";
    //	}
    //	cout << "   ";

    //	for (int j = 0; j < rows; j++)
    //	{
    //		if (i >= j)
    //			cout << sym << " ";
    //		else
    //			cout << "  ";
    //	}
    //	cout << endl;
    //}

    //-------------------------------------------------------------
    /*
    Вывести на экран 4 разных треугольника в горизонтальный ряд
    */

    // char sym;
    // int rows;
    // cout << "Enter rows and symbol:";
    // cin >> rows >> sym;

    // for (int i = 0; i < rows; i++)// i - индекс/номер строки
    //{
    //	for (int k = 1; k < 5; k++) // k - номер фигуры
    //	{
    //		for (int j = 0; j < rows; j++)// j - индекс/номер столбца
    //		{
    //			switch (k)
    //			{
    //			case 1: (i >= j ? cout << sym << " " : cout << "  ");
    //				/*if (i >= j)	cout << sym << " ";
    //				else cout << "  ";*/
    //				break;
    //			case 2:
    //				if (i + j >= rows - 1) cout << sym << " ";
    //				else cout << "  ";
    //				break;
    //			case 3:
    //				if (i >=j) cout << sym << " ";
    //				else cout << "  ";
    //				break;
    //			case 4:
    //				if (i <= j) cout << sym << " ";
    //				else cout << "  ";
    //				break;
    //			}
    //		}
    //		cout << "   ";
    //	}
    //	cout << endl;
    // }

    //-------------------------------------------------------------
    /*
    Написать программу, которая выводит на экран
    первые двадцать троек Пифагора(пронумеровать).
    Тройкой Пифагора считаются три числа a, b и c,
    для которых выполняется соотношение:  a*a + b*b = c*c

    3  4  5
    4  3  5
    */

    // int a, b, c, k = 0;
    // for(a = 1; a < 50; a ++)
    //	for (b = 1; b < 50; b++)
    //		for (c = 1; c < 50; c++)  // или без оператора break;  условие:   c < 50 && k !=20
    //		{
    //			if (a*a + b * b == c * c)
    //			{
    //				k++;
    //				cout << k << "). " << a << "  " << b << "  " << c << endl;
    //
    //			}
    //			if (k == 20) break;
    //		}

    //--------------------------------------------------------------
    // Программа выводит на экран числа от 1 до 21 в 3 колонки:
    /*

    1       8       15
    2       9       16
    3       10      17
    4       11      18
    5       12      19
    6       13      20
    7       14      21

    */
    int k;

    for (int i = 1; i <= 7; i++)
    {
        k = i;
        for (int j = 1; j <= 3; j++)
        {
            cout << k << "\t";
            k += 7;
        }
        cout << endl;
    }
    return 0;
}