#include <iostream>
using namespace std;

int main() {
    //-------------------------------------------------------------

	/*
	Программа запрашивает ввод с клавиатуры размеры прямоугольника
	(количество строк, столбцов), символ и выводит на экран прямоугольную
	рамку из символа.

		**************
		*            *
		*            *
		*            *
		**************
	
	*/

	//int row, col, i, j;
	//char simb;
	//cout << "\nВведите количество строк ";
	//cin >> row;
	//cout << "\nВведите количество колонок ";
	//cin >> col;
	//cout << "\nВведите символ ";
	//cin >> simb;

	//i = 0;
	//while (i < row)// проход по строкам
	//{
	//	j = 0;
	//	while (j < col)
	//	{
	//		//cout << simb;
	//		cout << i << ", " << j << '\t';
	//		j++;
	//	}
	//	i++;
	//	cout << endl;
	//}

	//cout << endl;
	//i = 0;
	//while (i < row)// проход по строкам
	//{
	//	j = 0;// Обнуление счетчика для колонок!!!
	//	while (j < col)
	//	{
	//		if (i == 0 || i == row-1 || j==0 || j==col-1)
	//			cout << simb << " ";
	//		else cout << "  ";
	//		j++;
	//	}
	//	i++;
	//	cout << endl;
	//}

	//cout << endl << endl;
	//
	//for (i = 0; i < row; i++)  // проход по строкам
	//{
	//	for (j = 0; j < col; j++)  // проход по колонкам
	//	{
	//		if (i == 0 || i == row - 1 || j == 0 || j == col - 1)
	//		{
	//			cout << simb << " ";
	//			Sleep(300); // задержка при выводе на милисекунды(параметр)
	//		}
	//		else cout << "  ";
	//	}
	//	cout << endl;
	//}

	// Илья
	//int s = 0, k = 0, dl, vs;
	//cin >> dl;
	//cin >> vs;
	//while (k < vs) {
	//	while (s < dl) {
	//		s++;
	//		if (k >= 1 && k < vs - 1 && s > 1 && s <= dl - 1) {
	//			cout << "# ";
	//		}
	//		else {
	//			cout << "* ";
	//		}
	//	}
	//	k++;
	//	cout << endl;
	//	s = 0;
	//}

	//-------------------------------------------------------------

	/*
	Программа считает средний балл группы из 4 студентов
	(средний балл для каждого студента и общий по группе).

	У каждого студента есть 5 оценок(оценки вводятся с клавиатуры).
	
	//Добавить проверку правильности ввода оценки (от 1 до 10).
	*/
	//int nota,  summa, i, j, st, marks;
	//double media_grup = 0, media_st; 
	////cout << "Введи количество студентов ";
	////cin >> st;
	////cout << "Введи количество оценок ";
	////cin >> marks;
	//	
	//cout << "Ввод оценок группы студентов. \n";
	//for( i = 0; i < /*st*/4; i++)
	//{
	//	summa = 0;  // обнуление начального значения для суммы оценок каждого студента
	//	cout << "\nОценки( от 1 до 10) студента № "<< i + 1 << "\n";
	//	for(j = 0 ; j < /*marks*/5; )
	//	{
	//		cout << j + 1 << ": ";
	//		cin >> nota;
	//		if (nota >= 1 && nota <= 10)
	//		{
	//			summa += nota;
	//			j++;// Меняем счетчик оценок только при вводе верной оценки
	//		}
	//		else cout << "\nОценка неверная, введи от 1 до 10\n";
	//	}
	//	media_st = summa/(double)/*marks*/5.;
	//	cout << "Средний балл студента № "<< i+1 << " = "<< media_st;
	//	media_grup += media_st;
	//}
	//
	//cout << "\n Средний балл группы = "<<  media_grup/(double)st;
	


	//-------------------------------------------------------------
	/*
	Программа запрашивает количество строк и символ - выводит на экран треугольник
	*
	* *
	* * *
	* * * *
	* * * * *

	*/

	//int row, i, j;
	//char simb;
	//cout << "\nВведите количество строк ";
	//cin >> row;
	//
	//cout << "\nВведите символ ";
	//cin >> simb;
	//// Вариант оптимальней
	//for (int i = 0; i < row; i++)
	//{
	//	for (int j = 0; j <= i; j++)
	//	{
	//		cout << simb << ' ';
	//	}
	//	cout << endl;
	//}
	//	

	//cout << endl;
	//// Вариант общий
	//for (int i = 0; i < row; i++)
	//{
	//	for (int j = 0; j < row; j++)
	//	{
	//		if (i >= j)
	//			cout << simb << ' ';
	//		/*else
	//			cout << "  ";*/
	//	}
	//	cout << endl;
	//}

	//-------------------------------------------------------------
	/*

	Программа запрашивает количество строк и символ - выводит на экран треугольник
	* * * * *
	  * * * *
		* * *
		  * *
			*
	
	*/

	//int row, i, j;
	//char simb;
	//cout << "\nВведите количество строк ";
	//cin >> row;
	//for (int i = 0; i < row; i++)
	//{
	//	for (int j = 0; j < row; j++)
	//	{
	//		if (i <= j)
	//			cout << "* ";
	//		else// Обязательно
	//			cout << "  ";
	//	}
	//	cout << endl;
	//}



	//-------------------------------------------------------------
	/*
	Программа запрашивает количество строк и символ - выводит на экран треугольник
	Выше вспомогательной диагонали

	* * * * *
	* * * *
	* * *
	* *
	*

	*/

	//int row, i, j;
	//char simb;
	//cout << "\nВведите количество строк ";
	//cin >> row;
	//for (int i = 0; i < row; i++)
	//{
	//	for (int j = 0; j < row; j++)
	//	{
	//		if (i + j <= row-1)
	//			cout << "* ";
	//		//else// не обязательно
	//		//	cout << "  ";
	//	}
	//	cout << endl;
	//}

	//-------------------------------------------------------------
	/*
	Программа запрашивает количество строк и символ - выводит на экран треугольник
	Ниже вспомогательной диагонали
			  *
			* * 
		  * * * 
		* * * *
	  * * * * *
	

	*/

	//int row, i, j;
	//char simb;
	//cout << "\nВведите количество строк ";
	//cin >> row;
	//for (int i = 0; i < row; i++)
	//{
	//	for (int j = 0; j < row; j++)
	//	{
	//		if (i + j >= row - 1)
	//			cout << "* ";// 2 символа: * и пробел
	//		else//  обязательно
	//			cout << "  "; // 2 пробела
	//	}
	//	cout << endl;
	//}

	//-------------------------------------------------------------
	/*
	Программа запрашивает количество строк и символ - выводит на экран две
	диагонали

		*       *
		  *   *
			*
		  *   *
		*       *

	*/


	//int row, i, j;

	//cout << "\nВведите количество строк ";
	//cin >> row;
	//for (int i = 0; i < row; i++)
	//{
	//	for (int j = 0; j < row; j++)
	//	{
	//		if (i==j || i+j==row-1)
	//			cout << "* ";
	//		else//  обязательно
	//			cout << "  "; 
	//	}
	//	cout << endl;
	//}


	//-------------------------------------------------------------
	// Верхняя часть песочных часов

	/*int row, i, j;
	
	cout << "\nВведите количество строк ";
	cin >> row;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < row; j++)
		{
			if (i <=j && i+j <= row-1)
				cout << "* " ;
			else
				cout << "  ";
		}
		cout << endl;
	}*/

	//-------------------------------------------------------------
	
	//Программа запрашивает нечетное количество строк и символ - выводит на экран Ромб

	/*int row, i, j;

	cout << "\nВведите нечетное количество строк ";
	cin >> row;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < row; j++)
		{
			if (i+j== row /2 || j-i== row /2 || i-j== row /2 || i+j == row + row/2-1)
				cout << "*" << " ";
			else
				cout << "  ";
		}
		cout << endl;
	}*/



	//-------------------------------------------------------------
	/*
	Вывести на экран 4 разных треугольника в горизонтальный ряд
	*/

	
	char sym;
	int rows;
	cout << "Enter rows and symbol:";
	cin >> rows >> sym;
	for (int i = 0; i < rows; i++)// проход по строкам
	{
		for (int j = 0; j < rows; j++)
		{
			if (i + j <= rows - 1)
				cout << sym << " ";
			else
				cout << "  ";
		}
		cout << "   ";
		for (int j = 0; j < rows; j++)
		{
			if (i <= j)
				cout << sym << " ";
			else
				cout << "  ";
		}
		cout << "   ";
		for (int j = 0; j < rows; j++)
		{
			if (i + j >= rows - 1)
				cout << sym << " ";
			else
				cout << "  ";
		}
		cout << "   ";
	
		for (int j = 0; j < rows; j++)
		{
			if (i >= j)
				cout << sym << " ";
			else
				cout << "  ";
		}
		cout << endl;
	}

    return 0;
}