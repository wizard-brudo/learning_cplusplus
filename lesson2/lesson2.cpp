#include <iostream>
using namespace std;
/*
Моя
вторая 
программа!

Многострочный комментарий
*/
int main() {
    printf("Hello, C!");	// Cи

	std::cout << std::endl; // переход на новую строку С++
	/*std::*/cout << "Hello, World!\n"; // C++
	
	cout << 2021 + 1 << endl << '\n'<< "\n";

	cout << "Hello, STD!\nПривет, Мир!\n\n";

	// Задача: Вывести на экран строку текста - Hello, "STEP"!

	cout << "Hello, \"STEP\"!";

	//cout << 'hello "Step"';

	/*
	'a' - это символ
	"a" - это си-строка
	*/

	// Задача: Вывести на экран путь к папке -   c:\windows\system\last\1.txt

	cout << "\nc:\\windows\\system\\last\\1.txt";
	cout << "\nc:/windows/system/last\\1.txt";

	//cout << "\a";

	// Задача: Вывести на экран  |	 1	|	2	|	3	|

	cout << "\n\t ----------------------------------------------- ";
	cout << "\n\t|\t1\t|\t2\t|\t3\t|";
	cout << "\n\t|-----------------------------------------------|";
	cout << "\n\t|    Surname    |      Name     |      Year     |";
	cout << "\n\t|-----------------------------------------------|";
	// Escape - последовательности / управляющие последовательности
	// '\n' - переход на новую строку
	// '\"' - вывод парных ковычек на экран
	// '\\' - вывод левого слэша на экран
	// '\a' - звук
	// '\t' - переход на позицию табуляции


	//cout << endl << (int)'a'; // 97
	//cout << endl << (char)193; //

    return 0;
}