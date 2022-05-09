#include <iostream>
#include "structs.hpp"
using namespace std;





int main() {
    Date a = init("25.05.2005");
    cout << a.day <<"." << a.month << "."  << a.year << endl;
    Student s{"Иванов","Иван","UTM",20,6,2,8,4,6};
    show(s);
    cout << "Средний бал:"  << Average(s) << endl;
    return 0;
}