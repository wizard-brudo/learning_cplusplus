#include <iostream>
using namespace std;
void show_reverse(int number);
int main() {
    show_reverse(12345);
    return 0;
}

void show_reverse(int number) {
    while(number) {
        cout << number % 10;
        number /= 10;
    }
}