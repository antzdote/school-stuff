#include <iostream>
using namespace std;

int main()
{
    float marks[5][5];
    float average;
    float sum =0;
    for (int in=0; in<5; in++)
    {
    sum=0;
    for (int p=0; p<5; p++)
    {
        cout<<in<<" Enter the marks: ";
        cin>>marks[in][p];
        sum += marks[in] [p];

    average = sum/5.0;

    }
    cout<<"the average is "<<average<<endl;

    average=0;



    }


    return 0;
}
