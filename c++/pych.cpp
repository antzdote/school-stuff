#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double velocity, degrees,timeofflight, maxheight, horirange, radians;
    const double G = 9.8;
    const double pie = 3.142;
    cout<<"a program to calculate the time of flight, maximum height and horizontal range of a projectile \n";
    cout<<"Enter the velocity of the projectile: ";
    cin>>velocity;
    cout<<"Enter the degrees in which the projectile traveled to the horizontal: ";
    cin>>degrees;
    radians = degrees* (pie/180.0);
    timeofflight = 2*velocity*sin(radians)/G;
    maxheight = pow(velocity, 2.0)*pow(sin(radians),2.0)/(2*G);

    horirange = pow(velocity, 2.0)* sin(2*radians)/G;
    cout<<"The time of flight is: "<<timeofflight <<endl;
    cout<<"The maximum height is: "<<maxheight <<endl;
    cout<<"The horizontal range is: "<<horirange <<endl;

    return 0;
}

