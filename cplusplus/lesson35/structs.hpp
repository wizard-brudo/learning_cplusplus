struct Date {
    int day;
    int month;
    int year;
};

struct Student {
    static const int N = 5;
    const char surname[30];
    const char name[30];
    const char university[30];
    int age;
    int marks[5];
};
Date init(const char * str);
void show(const Student& s);
double Average(const Student& s);