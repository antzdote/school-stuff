#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>

using namespace std;

class StudentRecord
{
  private:
      string name;
      int indexnum;
      int age;
      float math;
      float english;
      float swahili;
      float science;
      float socialAndreligiuosstudies;

  public:
    StudentRecord();

    void setName(string);
    void setAge(int);
    void setIndexnum(int);
    void setMath(float);
    void setEnglish(float);
    void setSwahili(float);
    void setScience(float);
    void setSocialAndreligiousstudies(float);

    string getName()const;
    int getAge()const;
    int getIndexnum()const;
    float getMath()const;
    float getEnglish()const;
    float getSwahili()const;
    float getScience()const;
    float getSocialAndreligiuosstudies()const;
    float getAverage()const;
    char getGrade()const;
};
StudentRecord::StudentRecord()
{
    math=0.0;
    english=0.0;
    swahili=0.0;
    science=0.0;
    socialAndreligiuosstudies=0.0;
}


void StudentRecord::setName(string Name)
{
    name= Name;
}
void StudentRecord::setAge(int a)
{
    age=a;
}
void StudentRecord::setIndexnum(int ind)
{
    indexnum=ind;
}
void StudentRecord::setMath(float m)
{
    math=m;
}
void StudentRecord::setEnglish(float e)
{
    english=e;
}
void StudentRecord::setSwahili(float k)
{
    swahili=k;
}
void StudentRecord::setScience(float s)
{
    science=s;
}
void StudentRecord::setSocialAndreligiousstudies(float r)
{
    socialAndreligiuosstudies=r;
}

string StudentRecord::getName()const
 {
     return name;
 }
 int StudentRecord::getAge()const
 {
     return age;
 }
 int StudentRecord::getIndexnum()const
{
    return indexnum;
}
float StudentRecord::getMath()const
{
    return math;
}
float StudentRecord::getEnglish()const
{
    return english;
}
float StudentRecord::getSwahili()const
{
    return swahili;
}
float StudentRecord::getScience()const
{
    return science;
}
float StudentRecord::getSocialAndreligiuosstudies()const
{
    return socialAndreligiuosstudies;
}
float StudentRecord::getAverage()const
{
    return ((math+english+swahili+science+socialAndreligiuosstudies)/5.0);
}
char StudentRecord::getGrade()const
{
    if (getAverage()>=70 && getAverage()<=100)
    {
        return 'A';
    }
    else if (getAverage()>=60 && getAverage()<70)
    {
        return 'B';
    }
    else if (getAverage()>=50 && getAverage()<60)
    {
        return 'C';
    }
    else if (getAverage()>=40 && getAverage()<50)
    {
        return 'D';
    }
    else if (getAverage()>=0 && getAverage()<40)
    {
        return 'E';
    }
    else
    {
        return 'Y';
    }
}

int main()
{
    int students, a, indexnumber;
    cout<<"How many students are in the class: ";
    cin>>students;
    cout<<"subjects are Math, English, Swahili, Science and social and religious studies."<<endl;;
    ofstream outputfile("C:\\marksheet.txt");
    string names;


    for (int i=0; i<students; i++)
    {
        cout<<"Enter the students names: ";
        getline(cin, names[i]);
    }
    for (int i=0; i<students; i++)
    {
        cout<<"Enter the age of the students: ";
        cin>>a;
    }
    for (int i=0; i<students; i++)
    {
        cout<<"Enter the index";
        cin>>indexnumber;

    }

    return 0;
}
