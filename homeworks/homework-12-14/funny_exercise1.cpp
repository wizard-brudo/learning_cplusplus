#include <iostream>
using namespace std;
// Просто скомпилируйте,не смотрите код =)
// Попробуйте делать неправильный ввод
int main() {
    int a, attempt=0, summa = 0;
    do
    {
        cout << "Введите a(a < 500):";
        cin >> a;
        if (a > 500 || a < 0) {
            switch (attempt)
            {
            case 0:
                cout << "Ой извините вы кажеться ввели неправильный результат,повторите пажалуйста попытку =)" << endl ;
                break;
            case 1:
                cout << "Вы во второй раз ошиблись,нечего страшного повторите попытку" << endl;
                break;
            case 2:
                cout << "И в третий раз,та же ошибка." << endl;
                break;
            case 3:
                cout << "Может вам дать подсказку?" << endl;
                break;
            case 4:
                cout << "Нужно ввести любое число ниже 500" << endl;
                break;
            case 5:
                cout << "Ха я раскусил игру,вы вводите неправильное число а я пишу что интересное" << endl;
                break;
            case 6:
                cout << "Да что же это такое." << endl;
                break;
            case 7:
                cout << "Может вы уснули на клавиатуре?" << endl;
                break;
            case 8:
                cout << "Сейчас будет звуковой сигнал(если вы работаете под windows)" << endl;
                break;
            case 9:
                cout << "\a(Вот и сам звуковой сигнал)" << endl;
                break;
            case 10:
                cout << "И вы всё равно продолжаете." << endl;
                break;
            case 11:
                cout << "Всё я ухожу,дальше думайте сами." << endl;
                break;
            default:
                cout << "..." << endl;
                break;

            }

            attempt++;
        }
    } while (a > 500 || a < 0);
    for (int i = a; i <= 500; i++)
    {
        summa += i;
    }
    cout << "Сумма чисел от "<< a << " до 500:" << summa << endl;
    cout << "Количество попыток:" << attempt;
    return 0;
}