#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>

using namespace std;

class StudentRecord
{
private:
    string name;
    int age, indexnumber;
    float math, engswa, sci, ss, rels;

public:
    StudentRecord();
    void setName(string);
    void setAge(int);
    void setIndexnumber(int);
    void setMath(float);
    void setEngswa(float);
    void setSci(float);
    void setSs(float);
    void setRels(float);

    string getName()const;
    int getAge()const;
    int getIndexnumber()const;
    float getMath()const;
    float getEngswa()const;
    float getSci()const;
    float getSs()const;
    float getRels()const;
    float getAverage()const;
    char getGrade(float)const;
};

StudentRecord::StudentRecord()
{
    math = 0.0;
    engswa = 0.0;
    sci = 0.0;
    ss = 0.0;
    rels = 0.0;
}

void StudentRecord::setName(string n)
{
    name = n;
}
void StudentRecord::setAge(int a)
{
    age = a;
}
void StudentRecord::setIndexnumber(int i)
{
    indexnumber = 0;
}
void StudentRecord::setMath(float m)
{
    math = m;
}
void StudentRecord::setEngswa(float e)
{
    engswa = e;
}
void StudentRecord::setSci(float s)
{
    sci = s;
}
void StudentRecord::setSs(float t)
{
    ss = t;
}
void StudentRecord::setRels(float r)
{
    rels = r;
}

string StudentRecord::getName()const
{
    return name;
}
int StudentRecord::getAge()const
{
    return age;
}
int StudentRecord::getIndexnumber()const
{
    return indexnumber;
}
float StudentRecord::getMath()const
{
    return math;
}
float StudentRecord::getEngswa()const
{
    return engswa;
}
float StudentRecord::getSci()const
{
    return sci;
}
float StudentRecord::getSs()const
{
    return ss;
}
float StudentRecord::getRels()const
{
    return rels;
}

float StudentRecord::getAverage()const
{
    return ((math +engswa +sci +ss +rels)/5.0);
}
char StudentRecord::getGrade(float a)const
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
    else
    {
        return 'E';
    }
}

int main()
{
    int n, a, in;
    cout<<"How many students are in the class: ";
    cin>>n;
    StudentRecord mystuds[n];
    float average[n];
    string names;

    for (int i=0; i<n; i++)
    {
        cout<<"Enter the names of student "<<i+1<<" : "<<endl;
        cin.ignore();
        getline(cin, names);
        mystuds[i].setName(names);
        cout<<"Enter the age for "<<mystuds[i].getName()<<" :\n";
        cin>>a;
        mystuds[i].setAge(a);
        cout<<"Enter the Index Number of "<<mystuds[i].getName()<<" :\n";
        cin>>in;
        mystuds[i].setIndexnumber(in);

    }

    float m, e, s, S, r;

    cout<<"Provide the marks for the students "<<endl;
        for (int y=0; y<n; y++)
        {
            cout<<endl<<mystuds[y].getName()<<endl;
            cout<<"Enter the score for maths: ";
            cin>>m;
            mystuds[y].setMath(m);
            cout<<"Enter the score for english swahili: ";
            cin>>e;
            mystuds[y].setEngswa(e);
            cout<<"Enter the score for science: ";
            cin>>s;
            mystuds[y].setSci(s);
            cout<<"Enter the score for social studies: ";
            cin>>S;
            mystuds[y].setSs(S);
            cout<<"Enter the score for religious studies: ";
            cin>>r;
            mystuds[y].setRels(r);
            average[y] = mystuds[y].getAverage();

            cout<<endl;
        }

        ofstream  outputFile("D:\\marksheet.txt");
        outputFile<<setw(20)<<left<<"NAME";
        outputFile<<setw(15)<<"Maths";
        outputFile<<setw(25)<<"English Swahili";
        outputFile<<setw(25)<<"Social Studies";
        outputFile<<setw(12)<<"Science";
        outputFile<<setw(25)<<"Religious Studies";
        outputFile<<setw(13)<<"Average";
        outputFile<<setw(10)<<"Grade"<<endl;

        for(int j=0;j<n;j++)
        {
           outputFile<<setw(20)<<mystuds[j].getName();
           outputFile<<setw(15)<<mystuds[j].getMath();
           outputFile<<setw(25)<<mystuds[j].getEngswa();
           outputFile<<setw(25)<<mystuds[j].getSs();
           outputFile<<setw(12)<<mystuds[j].getSci();
           outputFile<<setw(25)<<mystuds[j].getRels();
           outputFile<<setw(13)<<mystuds[j].getAverage();
           outputFile<<setw(10)<<mystuds[j].getGrade(average[j])<<endl;
        }

        float classAverage ,sum;
        sum = 0;
        for (int k=0; k<n; k++)
        {
           sum += average[k];
        }
        classAverage = sum/n;
        char classGrade;

        if (classAverage >= 70 && classAverage <= 100)
        {
        classGrade='A';
        }

        else if(classAverage >= 60 && classAverage < 70)
        {
        classGrade='B';
        }
        else if (classAverage >= 50 && classAverage <60)
        {
        classGrade='C';
        }
        else if (classAverage>=40&&classAverage<50)
        {
        classGrade='D';
        }
        else
        {
        classGrade='E';
        }
        outputFile<<endl<<setw(20)<<"Class average"<<setw(8)<<":"<<classAverage;
        outputFile<<endl<<setw(20)<<"Class Mean Grade"<<setw(8)<<":"<<classGrade;
        outputFile.close();

    return 0;
}
