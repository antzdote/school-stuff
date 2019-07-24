#include <iostream>
#include <cmath>
using namespace std;

 double timefli(float v, float degrees);
 double maxheight (float v, float degrees);
 double horirange (float v, float degrees);
 double radcon(float degress);

int main()
{
    float v, degrees;
    cout<<"This is a program to calculate the time of flight of a projectile, \nmaximum height and the horizontal range of a projectile."<<endl;
    cout<<"Enter the velocity of the projectile: ";
    cin>>v;
    cout<<"Enter the angle in degrees of the projectile: ";
    cin>>degrees;

    cout<<"The time of flight is: "<<timefli(v,degrees)<<endl;
    cout<<"The maximum height reached by the projectile is: "<<maxheight(v,degrees)<<endl;
    cout<<"The horizontal range of the projectile after travel is: "<<horirange(v,degrees)<<endl;

    return 0;
}

double radcon (float degrees)
{
   //convert degrees to radians
   const double pi = 3.142;
   return (degrees*(pi/180.0));
}

double timefli(float v,float degrees)
{

//calculate the time of flight of the projectile
 const double pi = 3.142;
 const double G = 9.8;
 return ( 2*v*sin(radcon(degrees))/G);
}

double maxheight (float v, float degrees)
{
//calculate the maximum height the projectile reached
 const double pi = 3.142;
 const double G = 9.8;
 return (pow(v,2.0)*pow(sin(radcon(degrees)),2.0)/(2*G));
}

double horirange (float v, float degrees)
{
//calculate the horizontal range the projectile covered
 const double pi = 3.142;
 const double G = 9.8;
 return (pow(v,2.0)*sin(2*radcon(degrees))/G);
}

