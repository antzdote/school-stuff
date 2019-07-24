#include <iostream>
#include <cmath>

using namespace std;

const int index=10;
float calcAvg(float);
double variance();
void display(float);

int main()
{
    float testvals[index];
    for (int index=0; index<10; index++)
    {
        cout<<"Enter the values: "<<endl;
        cin>>testvals[index];
    }

display(calcAvg(testvals));

return 0;
}

double calcAvg(float testvals[index])
{

    float sum = (testvals[0]+testvals[1]+testvals[2]+testvals[3]+testvals[4]+testvals[5]+testvals[6]+testvals[7]+testvals[8]+testvals[9])/10;
  return sum;
}

double variance()
{

}

void display(float testvals[index])
{
    cout<<"The average is: "<<testvals<<endl;
}
