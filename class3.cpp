#include <iostream>
#include <cmath>
using namespace std;


class cone
{
private:
    float height;
    float radius;
public:
    void setHeight(float);//mutator  or set
    void setRadius(float);//member functions
    float getHeight()const;
    float getRadius()const;                        //accessor member functions or get
    float getFloat()const;
    float getVolume()const;
    float getSA()const;
};
    // member function definitions
    //setheight assigns a value to the height member.
void cone::setHeight(float h)
{
    height = h;
}

void cone::setRadius(float r)
{
    radius = r;
}

float cone::getHeight()const
{
    return height;
}

float cone::getRadius()const
{
    return radius;
}

float cone::getVolume()const
{
    return ((3.14259*pow(radius,2)*height)/3.0);
}

float cone::getSA()const
{
    return (3.14259 * radius *(radius + sqrt((pow(height,2))+(pow(radius,2)))));
}

int main()
{
    int n, i;
    float r, h;
    cout<<"How many cones do you have: ";
    cin>>n;
    cone beginCone[n];

    for(i=0; i<n; i++)
    {
        cout<<"Provide radius for cone "<<":";
        cin>>r;
        cout<<"Provide height for cone "<<":";
        cin>>h;
        beginCone[i].setRadius(r);
        beginCone[i].setHeight(h);
    }

    return 0;
}
