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
    cone beginCone[5];

    beginCone[0].setHeight(55.0);
    beginCone[1].setHeight(6.5);
    beginCone[2].setHeight(10.2);
    beginCone[3].setHeight(15.6);
    beginCone[4].setHeight(18.0);

    beginCone[0].setRadius(15.6);
    beginCone[1].setRadius(6.3);
    beginCone[2].setRadius(12.0);
    beginCone[3].setRadius(6.0);
    beginCone[4].setRadius(7.2);

    cout<<"The volume of the first cone is: "<<beginCone[0].getVolume()<<" and the surface area: "<<beginCone[0].getSA()<<endl;
    cout<<"The volume of the second cone is: "<<beginCone[1].getVolume()<<" and the surface area: "<<beginCone[1].getSA()<<endl;
    cout<<"The volume of the third cone is: "<<beginCone[2].getVolume()<<" and the surface area: "<<beginCone[2].getSA()<<endl;
    cout<<"The volume of the fourth cone is :"<<beginCone[3].getVolume()<<" and the surface area: "<<beginCone[3].getSA()<<endl;
    cout<<"The volume of the fifth cone is: "<<beginCone[4].getVolume()<<" and the surface area: "<<beginCone[4].getSA()<<endl;

    return 0;
}
