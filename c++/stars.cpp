#include <iostream>
using namespace std;
int main()

{
    int x = 0;
    int y = 0;
    while (x<5)
    {
        y=0;
        while(y<=x)
        {
        cout<<"*";
        y++;
        }
        cout<<"\n";
        x++;
    }

    return 0;
}
