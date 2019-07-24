#include <iostream>

using namespace std;

int main()
{
    int x=2;
    int y=3;
    int z=1;
    for (int i=0; i<y; i++)
    {
        z*=x;
    }
    return z;
    cout<<z;
}
