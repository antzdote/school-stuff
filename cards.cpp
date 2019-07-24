#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
int main()
{
    int x, y;
    const int minvalue=0;
    const int maxvalue=9;
    unsigned int seed = time(0);
    srand(seed);
    for (x=1; x<=1000; x++)
    {
        cout<<x<<"\t";
        for(y=1; y<=16; y++)
        {
            cout<<(rand()%(maxvalue-minvalue+1)+minvalue);
        }
        cout<<endl;
    }

    return 0;
}
