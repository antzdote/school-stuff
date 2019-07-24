#include <iostream>

using namespace std;

float getMarks(float);
float computeAve (float);
float grade(float);
void displayres(float, float, float);
int main()
{
    float a, b, c, d, e, f, g;
    cout<<"Enter marks for the seven subjects that you do: ";
    cin>>a>>b>>c>>d>>e>>f>>g;
    float m;
    displayres(getMarks(m), computeAve(m), grade(m));


    return 0;
}

float getMarks(float a, float b, float c, float d, float e, float f, float g)
{

    return (a +b +c +d +e +f +g);

}

float computeAve(float m)
{
    return (getMarks(m)/7);
}

float grade (float m)
{
    float A, B;
    if ( computeAve(m)>= 70)
    {
       A;
    }
    else
    {
        B;
    }
}

void displayres (float sum, float ave, float gra)
{
    cout<<"The total sum is: "<<sum<< ", the average is: "<<ave<<" and the grade is: "<<gra;
}
