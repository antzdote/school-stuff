#include <iostream>
using namespace std;
int main()
{
    int x, y, z;
    int sum, average;
    double product;
    cout<<"enter the first number: ";
    cin>>x;
    cout<<"enter the second number: ";
    cin>>y;
    cout<<"enter the third number: ";
    cin>>z;
    sum = x+y+z;
    average = sum/3;
    product = x*y*z;
    if(x>y && x>z)
    {
        cout<<"the largest number is "<<x<<endl;
    }
    /*else
    {
        cout<<"the smallest number is "<<x<<endl;
    }*/
    if(y>x && y>z)
    {
        cout<<"the largest number is "<<y<<endl;
    }
    else
    {
        cout<<"the smallest number is "<<y<<endl;
    }
    if(z>x && z>y)
    {
        cout<<"the largest number is "<<z<<endl;
    }
    else
    {
        cout<<"the smallest number is "<<z<<endl;
    }
    cout<<"the sum is "<<sum<<endl;
    cout<<"the average is "<<average<<endl;
    cout<<"the product is "<<product<<endl;



    return 0;
}
