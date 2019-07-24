//program averages three test saves
#include <iostream>
using namespace std;
int main()
{
    const double Highscore = 95.0;
    double score1, score2, score3;
    double average;

    //get the three scores
    cout<<"Enter 3 test scores for averaging: ";
    cin>>score1>>score2>>score3;

    //calculate and display the average scores
    average = (score1 + score2 + score3)/3.0;
    cout<<"The average is "<<average<<endl;

    //if average is greater than 95, congratulations user
    if (average > Highscore)
        cout<<"congratulations that is a high score!!!\n";
    else
        cout<<"You were below the high score mark!!! try harder next time \n";

    return 0;
}
