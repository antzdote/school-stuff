#include <iostream>
using namespace std;
int main()
{
    float score1, score2, score3, score4, score5, score6, score7;
    float average;
    char response;
    do
    {
        cout<<"Enter 7 scores for a student: ";
        cin>>score1>>score2>>score3>>score4>>score5>>score6>>score7;
        average = (score1 + score2 + score3 + score4 + score5 + score6 + score7)/7.0;
        cout<<"The average is: "<<average<<endl;
        cout<<"Do you want to average another set? \n";
        cout<<"Type y or Y for yes.";
        cin>>response;
    }
    while(response=='Y'|| response=='y');
    return 0;
}
