#include<iostream>
using namespace std;
class Student
{
private:
    int grade;
public:
    Student(int _grade):grade(_grade){cout<<"A student grade "<<grade<<" is created."<<endl;}
    ~Student(){cout<<"A student grade "<<grade<<" is erased."<<endl;}
};
class Teacher
{
private:
    double salary;
public:
    Teacher(double _salary):salary(_salary){cout<<"A teacher with salary "<<salary<<" is created."<<endl;}
    ~Teacher(){cout<<"A teacher with salary "<<salary<<" is erased."<<endl;}
};
class School
{
private:
    Student student1;
    Teacher teacher1;
public:
    School(int _grade,double _salary):student1(_grade),teacher1(_salary){cout<<"A school is created."<<endl;}
    ~School(){cout<<"A school is erased."<<endl;}
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
	User: 201801020908
	Language: C++
	Result: Accepted
	Time:12 ms
	Memory:1268 kb
****************************************************************/

