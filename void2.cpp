/*a program to compute the surface area of a cone and uses a void function to print the result to the screen*/
#include <iostream>
#include <cmath>
using namespace std;

float calcSA (float radius, float height);
float calcvol (float radius, float height);
void displaySA (float,float);
const float pi = 3.1459;//global constant

int main()
{
    float radius, height;
    cout<<"Enter cone radius and height: ";
    cin>>radius>>height;

    displaySA (calcSA (radius, height), calcvol(radius, height));

    return 0;
}
float calcSA (float r, float h)
{
    return (pi*r*(r+sqrt(pow(h,2)+pow(r,2))));
}

float calcvol(float r, float h)
{
    return (pi*pow(r,3)*(h/3));
}

void displaySA(float sa, float v)
{
    cout<<"\nThe surface area of the cone is: "<<sa<<" and the volume is: "<<v;
}

