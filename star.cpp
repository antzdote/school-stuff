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
    x=4;
    while (x>0)
        {
        y=0;
        while(y<x)
        {
        cout<<"*";
        y++;
        }
        cout<<"\n";
        x--;
    }


    return 0;
}

