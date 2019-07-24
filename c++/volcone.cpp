#include <iostream>
#include <cmath>
using namespace std;

double volcone(float r, float h);
double sacone(float r, float h);

int main()
{
    float r, h;
    cout<<"Provide the height and radius of the cone: ";
    cin>>r>>h;
    cout<<"The volume is "<<volcone(r,h)<<endl;
    cout<<"The surface area is "<<sacone(r,h)<<endl;

    return 0;
}
double volcone(float r, float h)
{
    const float pi = 3.1459;
    return (pi*(pow(r,2))*h/3);
}
double sacone (float r, float h)

{
    const float pi = 3.1459;
    return (pi*r*(r+(sqrt(pow(h,2)+pow(r,2)))));
}
