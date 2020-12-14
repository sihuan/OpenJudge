#include<iostream>
using namespace std;
class Student
{
public:
    Student(int a)
    {
        grade=a;
        cout<<"A student grade "<<grade<<" is created."<<endl;
    }
    Student()
    {
        cout<<"A student grade "<<grade<<" is created."<<endl;
    }
    ~Student()
    {
        cout<<"A student grade "<<grade<<" is erased."<<endl;

    }
    int grade;
}
;
class Teacher
{
public:
    Teacher()
    {
        cout<<"A teacher with salary "<<wage<<" is created."<<endl;
    }
    Teacher(double a)
    {
        wage=a;
        cout<<"A teacher with salary "<<wage<<" is created."<<endl;
    }
    ~Teacher()
    {
        cout<<"A teacher with salary "<<wage<<" is erased."<<endl;

    }
    double wage;
};
class School
{
public:
    Student a;
    Teacher b;
    School(int g,double s):a(g),b(s)
    {
        cout<<"A school is created."<<endl;
    }
    ~School()
    {
        cout<<"A school is erased."<<endl;
    }
};
int main()
{
    int g;
    double s;
    cin>>g>>s;
    School sch(g, s);
    cin>>g;
    Student stu(g);
    cin>>s;
    Teacher tea(s);
    School(g, s);
    return 0;
}
/**************************************************************
	Problem: 2193
	User: 201901060203
	Language: C++
	Result: Accepted
	Time:12 ms
	Memory:1268 kb
****************************************************************/

