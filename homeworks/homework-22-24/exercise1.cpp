#include <iostream>
using namespace std;


void frame(int height=5, int length=5,char sym='*');

int main() {
    frame();
    frame(6,5);
    frame(6,5,'-');
    return 0;
}

void frame(int height,int length, char sym) {
    int middle_height = height / 2, middle_length = length / 2;
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < length; j++)
        {
            // Мы же будем проходить как вывести текст в рамке?
            // Ибо я попытался не очень вышло
            // if(i==0 || i == height-1 || j==0 || j==length-1)
            //     cout << sym << " ";
            // else {
            //     if(i == middle_height && j == middle_length)
            //         cout <<"\b\b" << text << "";
            //     else
            //         cout <<  "   ";
            // }
            if(i==0 || i == height-1 || j==0 || j==length-1)
                cout << sym << " ";
            else
                cout << "  ";
        }
        cout << endl;
        
    }
    
    
}