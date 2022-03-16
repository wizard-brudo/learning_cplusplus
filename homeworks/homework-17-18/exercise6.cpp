#include <iostream>
using namespace std;

int main()
{
    const int N = 10;
    int grades[N], grade, summa_grades=0, max_grade, min_grade, option, index_grade;
    double average_grade;
    // Запрашиваем оценки
    for (int i = 0; i < N;)
    {
        cout << i+1 <<". Введите оценку:";
        cin >> grade;
        if (grade < 1 || grade > 10)
            cout << "Неправильная оценка!Введите оценку в диапозоне от 1 до 10" << endl;
        else {
            grades[i] = grade;
            i++;
        }
    }
    cout << R"(Доступные опции:
1.Вывод оценок
2.Пересдача экзамена
3.Максимальная оценка
4.Минимальная оценка
5.Средний балл
6.Выходит ли стипендия
7.Выход
)";
    do
    {
        cout << "Введите опцию:";
        cin >> option;
        switch (option)
        {
        case 1:
            for (int i = 0; i < N; i++)
            {
                cout << i << ". "<<grades[i] << endl;
            }
            
            break;
        case 2:
            do
            {
                cout << "Введите порядковый номер оценки и оценку:";
                cin >> index_grade >> grade;
            } while (index_grade < 0 || index_grade > 10 || grade < 0 || grade > 10);
            if(grades[index_grade-1] != grade) {
                grades[index_grade] = grade;
                cout << "Оценка изменена!" << endl;
            } else {
                cout << "Оценка не изменена!Вы ввели такую же оценку!" << endl;
            }
            break;
        case 3:
            max_grade = grades[0];
            for (int i = 0; i < N; i++)
            {
                if (grades[i] > max_grade)
                    max_grade = grades[i];
            }
            cout << "Максимальная оценка: " << max_grade << endl;
            break;
        case 4:
            min_grade = grades[0];
            for (int i = 0; i < N; i++)
            {
                if (grades[i] < min_grade)
                    min_grade = grades[i];
            }
            cout << "Минимальная оценка оценка: " << min_grade<< endl;
            break;
        case 5:
            summa_grades = 0;
            for (int i = 0; i < N; i++)
            {
                summa_grades += grade;
            }
            
            average_grade = summa_grades / (double)N;
            cout << "Средней бал:" << average_grade << endl;
            break;
        case 6:
            if (average_grade >= 8.5)
                cout << "Стипендия выходит!" << endl << "Ваш средней бал:" << average_grade << endl;
            else
                cout << "Стипендия не выходит!" << endl << "Ваш средней бал:" << average_grade << endl;
            
            break;
        default:
            if(option != 7)
                cout << "Неизвестная опция!" << endl;
            break;
        }
    } while (option != 7);
    
    
    return 0;
}