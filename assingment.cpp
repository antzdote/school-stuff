#include <iostream>
using namespace std;

int main ()
{
    int x, y, z;
    int sum, average, product, smallest, largest;

    cout<<"Enter first number: ";
    cin>>x;
    cout<<"\n Enter second number: ";
    cin>>y;
    cout<<"\nEnter third number: ";
    cin>>z;

    sum = x+ y+ z;
    average = sum/3.0;
    product = x*y*z;

    if (x>y && x>z)
    {
        cout<<"The largest number is "<<x<<endl;
    }
    else if (y>z && y>x)
    {
        cout<<"The largest number is "<<y<<endl;
    }
    else if (z>x && z>y)
    {
        cout<<"The largest number is "<<z<<endl;
    }
    else if (x<y && x<z)
    {
        cout<<"The smallest number is "<<x<<endl;
    }
    else if (y<x && y<z)
    {
        cout<<"The smallest number is "<<y<<endl;
    }
    else
    {
        cout<<"The smallest number is "<<z<<endl;
    }
    for (int i=0; i<n; i++)
    {
        if()
    }
    cout<<"The sum of the numbers is "<<sum<<endl;
    cout<<"The average of the numbers is "<<average<<endl;
    cout<<"The product of the numbers is "<<product<<endl;


    return 0;
}
