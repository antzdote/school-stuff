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
 cone beginCone;
 beginCone.setHeight(10.5);
 beginCone.setRadius(5.4);
 cout<<"The height of the cone is: "<<beginCone.getHeight()<<" and the radius is: "<<beginCone.getRadius()<<endl;
 cout<<"The cone has a volume of: "<<beginCone.getVolume()<<endl;
 cout<<"The cone has a surface area of: "<<beginCone.getSA()<<endl;

    return 0;
}
