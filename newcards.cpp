#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
int main()
{
    srand (time(0));
    int x,y,n, count;
    cout<<"How many vouchers to generate: ";
    cin>>n;

    for (x=1; x<=n; x++)
    {
        count = 1;
        for (y=1; y<=16; y++)
        {
            cout<<(0+rand()%9);
            if (count%4==0)
                cout<<" ";
            count++;
        }
        cout<<endl;
    }

    return 0;
}
