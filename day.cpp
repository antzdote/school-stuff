#include <iostream>
#include <cmath>
#include <string>
using namespace std;

float calcdate(int, int, int);

void displaydate(float);
float y, m, D;


int main()
{
    cout<<"Enter the year: ";
    cin>>y;
    cout<<"\nEnter the month use numbers that is starting from 3 which is march and so forth. January is 13 and February is 14: ";
    cin>>m;
    cout<<"\nEnter the day of the month: ";
    cin>>D;

    displaydate(calcdate(y, m, D));


    return 0;
}
/*
float conmm(float m)
{
    if (m=march)
    {

    }
}*/

float calcdate(int y, int m, int D)
{
    return(((D + 5) + ((26 * m)/10) + (5 * (y%100)/4) + (21 * (y/100/4)))%7);
}

void displaydate(float d)
{
   cout<<"\n The day of the week is: "<<d;
}
