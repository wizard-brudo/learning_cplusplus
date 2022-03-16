#include <iostream>
using namespace std;

int main()
{
    const int N = 12;
    int monthly_income[N], min_profit, max_profit, 
    max_in_range_profit, min_in_range_profit, 
    range_start, range_finish, 
    index_min_range_profit, index_max_range_profit, 
    index_max_profit, index_min_profit;
    for (int i = 0; i < N; i++)
    {
        cout << "Введите прибыль за " << i+1 << " месяц:";
        cin >> monthly_income[i];
    }
    do
    {
        cout << "Введите диапазон для проверки (номера месяцев от 1 до 12):";
        cin >> range_start >> range_finish;
    } while (range_start < 1 || range_start > 12 || range_finish < 1 || range_finish > 12);
    max_in_range_profit = monthly_income[range_start-1], index_max_range_profit=range_start-1;
    min_in_range_profit = monthly_income[range_start-1], index_min_range_profit=range_start-1;
    max_profit = monthly_income[0], index_max_profit=0;
    min_profit = monthly_income[0], index_min_profit=0;
    for (int i = range_start-1; i <= range_finish-1; i++)
    {
        if (monthly_income[i] > max_in_range_profit)
            max_in_range_profit = monthly_income[i], index_max_range_profit=i;
        if (monthly_income[i] < min_in_range_profit)
            min_in_range_profit = monthly_income[i], index_min_range_profit=i;
    }
    for (int i = 0; i < N; i++)
    {
        if (monthly_income[i] > max_profit)
            max_profit = monthly_income[i], index_max_profit=i;
        if (monthly_income[i] < min_in_range_profit)
            min_profit = monthly_income[i], index_min_profit=i;
    }
    cout << "Максимальная прибыль в указанном диапазоне:  "<< max_in_range_profit << ", месяц " << index_max_range_profit+1 << endl;
    cout << "Минимальная прибыль в указанном диапазоне:  "<< min_in_range_profit << ", месяц " << index_min_range_profit+1 << endl;
    cout << "Максимальная прибыль за год: "<< max_profit << ", месяц " << index_max_profit+1 << endl;
    cout << "Минимальная прибыль за год: "<< min_profit << ", месяц " << index_min_profit+1 << endl;
    return 0;
}