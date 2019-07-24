#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
    float numbers[3];
    int product;
    float  sum=0;
    float average;
    for (int i=0; i<3; i++)
    {
        cout<<"Enter a number: ";
        cin>>numbers[i];
        sum += numbers[i];
    }

    int min = numbers[0];
    for (int i=1; i<3; i++)
    {
        if (min >numbers[i])
        {
            min = numbers[i];
        }

    }
    cout<<"The smallest number is "<< min;
    int max = numbers[0];
        for (int i=1; i<3; i++)
    {
        if (max <numbers[i])
        {
            max = numbers[i];
        }

    }
    cout<<"\nThe largest number is "<< max;


    average = sum/3.0;
    product= numbers[0]*numbers[1]*numbers[2];

    cout<<"\nThe sum of the numbers is "<<sum<<endl;
    cout<<"The average of the numbers is "<<average<<endl;
    cout<<"The product of the numbers is "<<product<<endl;


    return 0;
}

