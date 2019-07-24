#include <iostream>
using namespace std;

int main()
{
    float marks [5];
    float average;
    float sum = 0;
    for (int index = 0; index<5; index++)
    {
        cout<<"Enter the marks: "<<endl;
        cin>>marks[index];
        sum += marks[index];

    }
     for (int index = 0; index<5; index++)
        {
            cout<<marks[index]<<", "<<endl;
            //average = sum/5.0;

            //cout<<average;
        }
        cout<<"The average is: "<<sum/5.0;


    return 0;
}

