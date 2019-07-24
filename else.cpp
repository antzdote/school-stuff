/*this program uses the modulus operator to determine if a number is odd or even. if the is evenly divisible by 2, it is even. A remainder indicates that it
is an odd number*/
#include <iostream>
using namespace std;
int main()
{
    int number;
    cout<<"Enter an integer: ";
    cin>>number;

    if (number%2==0)
    {
        cout<<"You entered the value "<<number;//<< ". Which is even";
        cout<<". Which is even";
        //this is an if block
    }
    else
    {
     cout<<"You entered the value "<<number<<". Which is odd";
    }

    return 0;
}
