#include <iostream>
using namespace std;

void arif(int *mas,int len,int &max,int &min,double &avg) {
    min = max = *mas;
    for (int i = 0; i < len; i++)
    {
        avg += *mas;
        if(*mas > max)
            max = *mas;
        if(*mas < min)
            min = *mas;
        mas++;
    }
    avg = avg / len; 
}


int main() {
    int arr[6]{1,2,3,4,5,6},max,min;
    double avg;
    arif(arr,6,max,min,avg);
    cout << "Max:"<< max << " Min:" << min << " Avg:" << avg;
    return 0;
}