#include <iostream>
using namespace std;

int main()
{
    float marks [5] = {30.5, 60.6, 40.5, 55.0, 90.0};
    float average;
    float sum = 0;
    for (int index = 0; index<5; index++)
    {
        sum += marks[index];
    }
    average = sum/5.0;
    cout<<average;
    return 0;
}

