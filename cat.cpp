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
    //StudentRecord();
    //StudentRecord(string, int, int, float, float, float, float, float);
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

/*StudentRecord::StudentRecord()
{
    name = non;
    age = 0;
    indexnum=0;
    math=0;
    english=0;
    swahili=0;
    science=0;
    socialAndReligiuosstudies=0;
}

StudentRecord::StudentRecord(string, int, int, float, float, float, float, float)
{
    name= 0;
    age=1;
    indexnum=000111222;
    Math=0.0;
    English=0.0;
    Swahili=0.0;
    Science=0.0;
    SocialAndReligiuosstudies=0.0;
}*/

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
{   int n;
    cout<<"How many students are in the class: ";
    cin>>n;

    cout<<"subjects are Math, English, Swahili, Science and Social and religious studies."<<endl;

    int SUBJECTS=5;
    string names[n];
    string subjects[SUBJECTS];
    float marks[n][SUBJECTS];
    StudentRecord mystudents[n];
    cout<<"Enter the names of the students: "<<endl;
    for (int i=0; i<n; i++)
    {
        cin.ignore();
        getline(cin, names[i]);
        n[i].setName(names);
    }
    cout<<"Enter subject names: "<<endl;
for (int i=0; i<n; i++)
    {
        getline (cin, subjects[i]);
    }


    cout<<"Provide the marks for the students "<<endl;
        for (int x=0; x<n; x++)
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


    for (int y=0; y<SUBJECTS; y++)
    {
        cout<<setw(20)<<subjects[y];
    }

    cout<<endl;

        for (int x=0; x<n; x++)
        {
            cout<<setw(20)<<names[x];
            for(int y=0; y<SUBJECTS; y++)
            {
               cout<<setw(20)<<marks[x][y];

            }

            cout<<endl;

            }
cout<<"The average is: "<<mystudents[0].getAverage()<<endl;
    return 0;
}

