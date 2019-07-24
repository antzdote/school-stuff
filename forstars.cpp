#include <iostream>
using namespace std;
int main()
{
    int x,y;
    for (x=1; x<=5; x++)
        {
        for(y=1; y<=x; y++)
        {
            cout<<"*";
        }
        cout<<endl;
        }
   /* for (x=4; x>0; x--)
        {
        for(y=1; y<x; y++)
        {
            cout<<"*";
        }
        cout<<endl;
        }
*/

    return 0;
}
