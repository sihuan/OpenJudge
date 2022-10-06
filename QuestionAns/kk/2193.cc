#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>

using namespace std;
class Student
{
public:
    Student(int g)
    {
        grade=g;
        cout<< "A student grade "<<grade<<" is created."<<endl;
    }
    ~Student()
    {
        cout<< "A student grade "<<grade<<" is erased."<<endl;
    }

    int grade;
};
class Teacher
{
public:
    Teacher(double sl)
    {
        salary=sl;
        cout<< "A teacher with salary "<<salary<<" is created."<<endl;
    }
    ~Teacher()
    {
        cout<< "A teacher with salary "<<salary<<" is erased."<<endl;
    }

    double salary;
};
class School
{
public:
    School(int g,double sl):student(g),teacher(sl)
    {
        cout<<"A school is created."<<endl;
    }
    School(Student &st,Teacher &te):student(st.grade),teacher(te.salary)
    {
        cout<<"A school is created."<<endl;
    }
    ~School()
    {
        cout<<"A school is erased."<<endl;
    }
private:
    Student student;
    Teacher teacher;
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
	User: 202001060117
	Language: C++
	Result: Accepted
	Time:12 ms
	Memory:1268 kb
****************************************************************/

