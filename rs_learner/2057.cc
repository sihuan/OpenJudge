#include<bits/stdc++.h>
using namespace std;
class Person
{
protected:
    string name;
public:
    Person(string _name):name(_name)
    {
        cout<<"Person "<<name<<" is created."<<endl;
    }
    ~Person()
    {
        cout<<"Person "<<name<<" is erased."<<endl;
    }
};
class Student:public Person
{
protected:
    int id;
public:
    Student(string _name,int _id):Person(_name),id(_id)
    {
        cout<<"Student "<<name<<" with id "<<id<<" is created."<<endl;
    }
    ~Student()
    {
        cout<<"Student "<<name<<" with id "<<id<<" is erased."<<endl;
    }
};
class Teacher:public Person
{
private:
    string position;
public:
    Teacher(string _name,string p):Person(_name),position(p)
    {
       cout<<"Teacher "<<name<<" with position "<<position<<" is created."<<endl;
    }
    ~Teacher()
    {
        cout<<"Teacher "<<name<<" with position "<<position<<" is erased."<<endl;
    }
};
class Course:public Teacher,public Student
{
private:
    string c;
public:
    Course(string tname,string sname,string p,string _c,int _id):Teacher(sname,p),Student(sname,_id),c(_c)
    {
        cout<<"Course "<<c<<" is created."<<endl;
    }
    ~Course()
    {
        cout<<"Course "<<c<<" is erased."<<endl;
    }
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
	User: 201801020908
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1272 kb
****************************************************************/

