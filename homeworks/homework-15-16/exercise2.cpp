#include <iostream>
using namespace std;

int main()
{
    int figure;
    int rows;
    // Вы же простите меня за сырую строку? =)
    cout << R"(Доступные фигуры:
1.Правая верхнея часть треугольника(а)
2.Левая нижнея часть треугольника(б)
3.Верхнея часть песочных часов(в)
4.Нижнея часть песочных часов(г)
5.Песочные часы(д)
6.Перевёрнутые песочные часы(е)
7.Правая часть бесконечности(ж)
8.Левая часть бесконечности(з)
9.Левая вернея часть треугольника(и)
10.Правая нижнея часть треугольника(к)
11.Ромб(л)
12.Контур Ромба(м)
13.Выход
)";
    cout << "Введите количество строк:";
    cin >> rows;
    do
    {
        cout << "Введите номер фигуры и количество строк:";
        cin >> figure;
        switch (figure)
        {
        case 1:
            for (int i = 0; i < rows; i++)
            {
                for (int j = 0; j < rows; j++)
                {
                    if (i <= j)
                        cout << "* ";
                    else
                        cout << "  ";
                }
                cout << endl;
            }
            break;
        case 2:
            for (int i = 0; i < rows; i++)
            {
                for (int j = 0; j <= i; j++)
                {
                    cout << "* ";
                }
                cout << endl;
            }
            break;
        case 3:
            for (int i = 0; i < rows; i++)
            {
                for (int j = 0; j < rows; j++)
                {
                    if (i <=j && i+j <= rows-1)
                        cout << "* ";
                    else
                        cout << "  ";
                }
                cout << endl;
            }
            break;
        case 4:
            for (int i = 0; i < rows; i++)
            {
                for (int j = 0; j < rows; j++)
                {
                    if (i >=j && i+j >= rows-1)
                        cout << "* ";
                    else
                        cout << "  ";
                }
                cout << endl;
            }
            break;
        case 5:
            for (int i = 0; i < rows; i++)
            {
                for (int j = 0; j < rows; j++)
                {
                    if ((i >=j && i+j >= rows-1) || (i <=j && i+j <= rows-1))
                        cout << "* ";
                    else
                        cout << "  ";
                }
                cout << endl;
            }
            break;
        case 6:
            for (int i = 0; i < rows; i++)
            {
                for (int j = 0; j < rows; j++)
                {
                    if ((i >= j&&i <= rows - 1 - j) || (i <= j&&i >= rows - 1 - j))
                        cout << "* ";
                    else
                        cout << "  ";
                }
                cout << endl;
            }
            break;
        case 7:
            for (int i = 0; i < rows; i++)
            {
                for (int j = 0; j < rows; j++)
                {
                    if (i >= j&&i <= rows - 1 - j)
                        cout << "* ";
                    else
                        cout << "  ";
                }
                cout << endl;
            }
            break;
        case 8:
            for (int i = 0; i < rows; i++)
            {
                for (int j = 0; j < rows; j++)
                {
                    if (i <= j&&i >= rows - 1 - j)
                        cout << "* ";
                    else
                        cout << "  ";
                }
                cout << endl;
            }
            break;
        case 9:
            for (int i = 0; i < rows; i++)
            {
            	for (int j = 0; j < rows; j++)
            	{
            		if (i + j <= rows-1)
            			cout << "* ";
            	}
            	cout << endl;
            }
            break;
        case 10:
            for (int i = 0; i < rows; i++)
            {
            	for (int j = 0; j < rows; j++)
            	{
            		if (i + j >= rows - 1)
            			cout << "* ";
            		else
            			cout << "  "; 
            	}
            	cout << endl;
            }
            break;
        case 11:
            for (int i = 0; i < rows; i++)
            {
                for (int j = 0; j < rows; j++)
                {
                    if (j<=rows/2+i&&j>=rows/2-i && j<=rows/2+rows-i-1&&j>=i-rows/2)
                        cout << "*" << " ";
                    else
                        cout << "  ";
                }
                cout << endl;
            }
            break;
        case 12:
            for (int i = 0; i < rows; i++)
            {
                for (int j = 0; j < rows; j++)
                {
                    if (i+j==rows/2 || j-i==rows/2 || i-j==rows/2 || i+j == rows+rows/2-1)
                        cout<<'*';
                    else cout<<' ';
                }
                cout << endl;
            }
            break;
        default:
            if(figure != 13)
                cout << "Неизвестная фигура" << endl;
            break;
        }
    } while (figure != 13);
    return 0;
}