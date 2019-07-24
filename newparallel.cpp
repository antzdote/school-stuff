#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    const int STUDENTS = 5, SUBJECTS =5;
    string names[STUDENTS];
    string subjects[SUBJECTS];
    float marks[STUDENTS][SUBJECTS];
    float averages[STUDENTS];
    cout<<"Enter the names of the students: "<<endl;
    for (int i=0; i<STUDENTS; i++)
    {
        getline(cin, names[i]);
    }
    cout<<"Enter subject names: "<<endl;
for (int i=0; i<STUDENTS; i++)
    {
        getline (cin, subjects[i]);
    }


    cout<<"Provide the marks for the students "<<endl;
        for (int x=0; x<STUDENTS; x++)
        {
             cout<<names[x]<<endl;

            for (int y=0; y<SUBJECTS; y++)
            {
                cout<<subjects[y]<<" : ";
                cin>>marks[x][y];
            }
            cout<<endl;
        }
        cout<<setw(20)<<" ";

        for (int i=0; i<STUDENTS; i++)
        {
            float average=0, sum=0;
            for (int j=0; j<STUDENTS; j++)
            {
                sum += marks[i][j];
            }
            average = sum/5.0;
            averages[i]= average;
        }
    for (int y=0; y<SUBJECTS; y++)
    {
        cout<<setw(20)<<subjects[y];
    }

    cout<<endl;

        for (int x=0; x<STUDENTS; x++)
        {
            cout<<setw(20)<<names[x];
            for(int y=0; y<SUBJECTS; y++)
            {
               cout<<setw(20)<<marks[x][y];

            }
            cout<<averages[x];
            cout<<endl;

        }
//format table by adding a column for grade and averages.
    return 0;
}
