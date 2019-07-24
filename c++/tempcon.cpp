#include <iostream>

using namespace std;

double Fcon(float c);
int main()
{
    float c;
    cout<<"Enter the degree celcius of the temperature: ";
    cin>>c;
    cout<<"the temperature conversion is: "<<Fcon(c)<<endl;

    return 0;
}
double Fcon(float c)
{
    return ((9.0/5.0)*c +32);
}

