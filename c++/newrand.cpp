#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
int main()
{
    unsigned int seed = time(0);
    srand(seed);

    int x,y;
    int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p;
    const int maxvalue = 9;
    const int minvalue =0;

    for (x=0; x<=1000; x++)
    {
          a=(rand()%(maxvalue-minvalue + 1))+minvalue;
          b=(rand()%(maxvalue-minvalue + 1))+minvalue;
          c=(rand()%(maxvalue-minvalue + 1))+minvalue;
          d=(rand()%(maxvalue-minvalue + 1))+minvalue;
          e=(rand()%(maxvalue-minvalue + 1))+minvalue;
          f=(rand()%(maxvalue-minvalue + 1))+minvalue;
          g=(rand()%(maxvalue-minvalue + 1))+minvalue;
          h=(rand()%(maxvalue-minvalue + 1))+minvalue;
          i=(rand()%(maxvalue-minvalue + 1))+minvalue;
          j=(rand()%(maxvalue-minvalue + 1))+minvalue;
          k=(rand()%(maxvalue-minvalue + 1))+minvalue;
          l=(rand()%(maxvalue-minvalue + 1))+minvalue;
          m=(rand()%(maxvalue-minvalue + 1))+minvalue;
          n=(rand()%(maxvalue-minvalue + 1))+minvalue;
          o=(rand()%(maxvalue-minvalue + 1))+minvalue;
          p=(rand()%(maxvalue-minvalue + 1))+minvalue;
          cout<<x<<"\t";cout<<a;cout<<b;cout<<c;cout<<d<<" ";cout<<e;cout<<f;cout<<g;cout<<h<<" ";cout<<i;cout<<j;cout<<k;cout<<l<<" ";cout<<m;cout<<n;cout<<o;cout<<p<<endl;

    }

	return 0;
}
