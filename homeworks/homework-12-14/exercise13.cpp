#include <iostream>
using namespace std;

int main() {
    int i=0,n,max1=0,max2=0;
    do
    {
        cout << "Введите число:";
        cin >> n;
        if(n > max1) {
            max2=max1;
            max1=n;
        }
        if(n > max2 && n != max1) {
            max2=n;
        }
        i++;
    } while (i < 10);
    cout << max1 << " " << max2;
    return 0;
}