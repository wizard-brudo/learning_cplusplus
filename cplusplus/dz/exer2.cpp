#include <iostream>
using namespace std;

void get_pos(int arr[], int arr2[], int len, int len2, int*& adressNarr, int &nArrLen)
{
    int count_pos = 0;
    for (int i = 0; i < len; i++)
    {
        if (arr[i] > 0)
            count_pos++;
    }
    for (int i = 0; i < len2; i++)
    {
        if (arr2[i] > 0)
            count_pos++;
    }
    if (count_pos)
    {
        int k = 0;
        nArrLen = count_pos;
        int *nArr = new int[nArrLen];
        for (int i = 0; i < len; i++)
        {
            if (arr[i] > 0)
                nArr[k++] = arr[i];
        }
        for (int i = 0; i < len2; i++)
        {
            if (arr2[i] > 0)
                nArr[k++] = arr2[i];
        }
        adressNarr = nArr;
    }
}

int main()
{
    const int LENGTH = 5;
    int *newArray,newArrayLength=0;
    int a[LENGTH]{-1,6,10,3,-2}, b[LENGTH]{-10,5,-10,3,-2};
    get_pos(a,b,LENGTH,LENGTH,newArray,newArrayLength);
    for (int i = 0; i < newArrayLength; i++)
    {
        cout << newArray[i] << " ";
    }
    
    delete[] newArray;
    return 0;
}