#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>

using namespace std;
class Person
{
public:
    Person(){}
    Person(string n)
    {
        name=n;
        cout<< "Person "<<name<<" is created."<<endl;
    }
    ~Person()
    {
        cout<< "Person "<<name<<" is erased."<<endl;
    }
protected:
    string name;
};
class Student:public Person
{
public:
    Student(string n,int i):Person(n)
    {
        id=i;
        cout << "Student "<<name<<" with id "<<id<<" is created."<<endl;
    }
    ~Student()
    {
        cout << "Student "<<name<<" with id "<<id<<" is erased."<<endl;
    }
private:
    int id;
};
class Teacher:public Person
{
public:
    Teacher(string n,string ps):Person(n)
    {
        position=ps;
        cout<< "Teacher "<<name<<" with position "<<position<<" is created."<<endl;
    }
    ~Teacher()
    {
        cout<< "Teacher "<<name<<" with position "<<position<<" is erased."<<endl;
    }
private:
    string position;
};
class Course
{
public:
    Course(string s1,string s2,string s3,string s4,int i):teacher(s2,s3),student(s2,i)
    {
        course=s4;
        cout<<"Course "<<course<<" is created."<<endl;
    }
    ~Course()
    {
        cout<<"Course "<<course<<" is erased."<<endl;
    }
private:
    Teacher teacher;
    Student student;
    string course;

};
int main()
{
    string s1, s2, s3, s4;
    int i;
    cin>>s1>>s2>>s3>>s4>>i;
    Person person1(s1), person2(s2);
    Teacher teacher(s1, s3);
    Student student(s2, i);
    Course course(s1, s2, s3, s4, i);
    return 0;
}
/**************************************************************
	Problem: 2057
	User: 202001060117
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1272 kb
****************************************************************/

