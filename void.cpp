/*a program to compute the surface area of a cone and uses a void function to print the result to the screen*/
#include <iostream>
#include <cmath>
using namespace std;

float calcSA (float radius, float height);
void displaySA (float);
const float pi = 3.1459;//global constant

int main()
{
    float radius, height;
    cout<<"Enter cone radius and height: ";
    cin>>radius>>height;

    displaySA (calcSA (radius, height));

    return 0;
}
float calcSA (float r, float h)
{
    return (pi*r*(r+sqrt(pow(h,2)+pow(r,2))));
}

void displaySA(float sa)
{
    cout<<"\nThe surface area of the cone is: "<<sa;
}
