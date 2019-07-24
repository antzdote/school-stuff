#include <iostream>
using namespace std;

void getMarks();
float computeAverage(float, float, float, float, float, float, float);
char getGrade(float);
void display(float, char);
float score1, score2, score3, score4, score5, score6, score7, average;

int main()
{
    getMarks();
    average = computeAverage(score1, score2, score3, score4, score5, score6, score7);
    display(average, getGrade(average));


    return 0;
}
void getMarks()
{
    cout<<"Enter the seven scores: ";
    cin>>score1>>score2>>score3>>score4>>score5>>score6>>score7;
}

float computeAverage(float s1, float s2, float s3, float s4, float s5, float s6, float s7)
{
    return ((s1 + s2 +s3 +s4 +s5 +s6 +s7)/7.0);

}

char getGrade(float a)
{
    if (a>=70 && a<=100)
    {
        return 'A';
    }
    else if (a>=60 && a<70)
    {
        return 'B';
    }
    else if (a>=50 && a<60)
    {
        return 'C';
    }
    else if (a>=40 && a<50)
    {
        return 'D';
    }
    else if (a>=0 && a<40)
    {
        return 'E';
    }
    else
    {
        return 'Y';
    }
}

void display(float a, char av)
{
    cout<<"The average is: "<<a<<" and the grade is: "<<av<<endl;
}
