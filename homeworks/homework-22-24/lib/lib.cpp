#include <iostream>
using namespace std;

bool is_pythagorean_triple(int a, int b, int c)
{
    return a * a + b * b == c * c;
}



void show_pythagorean_triple(int range_start, int range_finish, int count)
{
    int k = 0;
    for (int a = range_start; a < range_finish; a++)
    {
        for (int b = range_start; b < range_finish; b++)
        {
            for (int c = range_start; c < range_finish; c++)
            {
                if (is_pythagorean_triple(a, b, c))
                {
                    cout << k++ << ". " << a << " " << b << " " << c << endl;
                }
                if (k == count)
                    break;
            }
        }
    }
}

bool is_even(int number)
{
    return number % 2 ? false : true;
}

bool is_more(int n, int n2)
{
    return n > n2;
}

int summa(int a, int b)
{
    return a + b;
}

int capacity(int number)
{
    int i = 0;
    while (number)
    {
        number /= 10;
        i++;
    }
    return i;
}

int get_digit(int number, int index)
{
    int count = capacity(number);
    while (count > index)
    {
        number /= 10;
        count--;
    }
    return number % 10;
}

void line(char ch, int repeat)
{
    for (int i = 0; i < repeat; i++)
    {
        cout << ch;
    }
    cout << endl;
}


void line()
{
    for (int i = 0; i < 10; i++)
    {
        cout << "*";
    }
    cout << endl;
}

int max(int a, int b)
{
    if (a > b)
        return a;
    return b;
}

int max(int a, int b, int c)
{
    if (a > b && a > c)
        return a;
    if (b > a && b > c)
        return b;
    return c;
}

double average(int a, int b, int c)
{
    return (a + b + c) / 3.;
}

bool is_palindrom(int number)
{
    int count = capacity(number);
    for (int i = 1, j = count; i <= count / 2; i++, j--)
    {
        if (get_digit(number, i) != get_digit(number, j))
            return false;
    }
    return true;
}

void show_max(int a, int b, int c)
{
    int max = (a > b ? a : b);
    max = (c > max ? c : max);
    cout << "\nМаксимальное значение: " << max;
}
