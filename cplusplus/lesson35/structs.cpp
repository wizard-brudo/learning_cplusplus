#include <iostream>
#include <string.h>
#include "structs.hpp"
using namespace std;


Date init(const char * str) {
    Date d;
    char* t1, *t2;
    char tmp[30];
    strcpy(tmp,str);
    t1 = strtok_r(tmp,"./-,",&t2);
    d.day = atoi(t1);
    d.month = atoi(strtok_r(nullptr,"./-,",&t2));
    d.year = atoi(strtok_r(nullptr,"./-,",&t2));
    return d;
}

void show(const Student& s) {
    cout << "Фамилия: " << s.surname << endl;
    cout << "Имя: " << s.name  << endl;
    cout << "Вуз: " << s.university  << endl;
    cout << "Возраст: " << s.age  << endl;
    cout << "Оценки: ";
    for (int i = 0; i < s.N; i++)
    {
        cout << s.marks[i] << " ";
    }
    cout << endl;
}

double Average(const Student& s) {
    double sum = 0;
    for (int i = 0; i < s.N; i++)
    {
        sum += s.marks[i];
    }
    return (sum / s.N);
}