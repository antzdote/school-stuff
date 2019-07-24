#include <iostream>
using namespace std;

int main()
{
    float marks [5];
    float sum = 0;
    float average;
    for (int i = 0; i<5; i++)
    {
        cout<<"Enter marks "<i+1<<":";
        cin>>marks[i];
        sum += marks[i];
    }

    return 0;
}
