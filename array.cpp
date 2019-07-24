#include <iostream>
using namespace std;

int main()
{
    float marks [5] = {30.5, 60.6, 40.5, 55.0, 90.0};
    float average = (marks[1]+marks[2]+marks[3]+marks[4]+marks[0])/5.0;
    cout<<"The average is: "<<average;

    return 0;
}
