#include <iostream>
#include <cmath>
using namespace std;
int main()
{
int x=1;
int xcu;
while (x<=100)
{
//position of the ++ operator alters the result
    xcu = pow(x,3);//x+=5;
    cout<<x<<" \t\t";            cout<<xcu<<endl;
x++;
}
return 0;
}
