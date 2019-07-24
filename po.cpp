#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int year;
    double population;
    //get the year to calculate the population
    cout<<"Please enter a year to calculate the estimated population: ";
    cin>>year;

    //check validity of the year
    if (year>=2000)
    {
        //calculate the population
         population = 6.0*exp(0.02*(year-2000));
         cout<<"The population of year "<< year<<" is "<< population<<" billion people by estimate.";
    }
    else
    {
       cout<<"The year "<<year<<" is invalid";
    }

    return 0;
}
