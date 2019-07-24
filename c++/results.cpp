/*receive results from 7 courses and compute the grades of the courses*/
#include <iostream>
using namespace std;
int main()
{
    char A, B, C;
    int math, eng, kisw, bio, pyhc, chem, geo;
    double average;
    cout<<"Enter the results in the order as follows. \n";
    cout<<"Mathematics: ";
    cin>>math;
    cout<<"English: ";
    cin>>eng;
    cout<<"Kiswhili: ";
    cin>>kisw;
    cout<<"Biology: ";
    cin>>bio;
    cout<<"Physics: ";
    cin>>pyhc;
    cout<<"Chemistry: ";
    cin>>chem;
    cout<<"Geography: ";
    cin>>geo;
    average = (math +eng +kisw +pyhc +bio +chem +geo)/7;
    //if statements
    if (average>79)
    {
        cout<<"The average is "<< average<<"and the grade is "<<A;
    }
     else if (average>65 && average<79)
    {
        cout<<"The average is "<< average<<"and the grade is "<<B;
    }
    else if (average>49 && average<65)
    {
        cout<<"The average is "<< average<<" and the grade is "<<C;
    }
    else
    {
        cout<<"The average is "<< average<< " and your have failed the class." ;
    }


return 0;
}
