#include <iostream>
#include <cmath>

using namespace std;
//function prototype
double volsphere(float r);

int main()
{
    float radius;
    cout<<"Provide the radius: ";
    cin>>radius;
    cout<<"The volume of your sphere is: "<<volsphere(radius)/*function call*/<<endl;

    return 0;
}

//function definition
//function header
double volsphere(float r)
{
    const float pi = 3.1459;
    return ((4.0/3.0)*pi*(pow(r,3)));
}
