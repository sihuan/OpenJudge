#include "bits/stdc++.h"
using namespace std;



class Person
{
protected:
    int age;
    char sex;
public:
    Person(int agee,char sexx):age(agee),sex(sexx)
    {
        cout<<"Person age = "<<age<<", sex = "<<sex<<" is created."<<endl;
    }
    virtual ~Person()
    {
        cout<<"Person age = "<<age<<", sex = "<<sex<<" is erased."<<endl;
    }
};

class Student : public Person
{
protected:
    int cs;
public:
    Student(int ageee,char sexxx,int css):Person(ageee,sexxx),cs(css)
    {
        cout<<"Student of class "<<cs<<" is created."<<endl;
    }
    ~Student()
    {
        cout<<"Student of class "<<cs<<" is erased."<<endl;
    }
};

class Teacher : public Person
{
protected:
    int css;
public:
    Teacher(int ageee,char sexxx,int csss):Person(ageee,sexxx),css(csss)
    {
        cout<<"Teacher with salary "<<css<<" is created."<<endl;
    }
    ~Teacher()
    {
        cout<<"Teacher with salary "<<css<<" is erased."<<endl;
    }
};

int main()
{
    Person *p;
    int age, par;
    char sex, t;
    while (cin>>age>>sex>>t>>par)
    {
        if (t == 's')
        {
            p = new Student(age, sex, par);
        }
        else
        {
            p = new Teacher(age, sex, par);
        }
        delete p;
    }

}

/**************************************************************
	Problem: 2092
	User: 201601160202
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1272 kb
****************************************************************/

