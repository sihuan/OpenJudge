#include"bits/stdc++.h"
using namespace std;

class Person
{
    private:
        string name;
    public:
        Person (string n):name(n)
        {
            cout<<"Person "<<name<<" is created."<<endl;
        }
        ~Person()
        {
            cout<<"Person "<<name<<" is erased."<<endl;
        }
        string getname()
        {
            return name;
        }
};

class Teacher:public Person
{
    private:
        string pos;
    public:
        Teacher(string name1,string pos2):Person(name1),pos(pos2)
        {
            cout<<"Teacher "<<name1<<" with position "<<pos2<<" is created."<<endl;
        }
        ~Teacher()
        {
            cout<<"Teacher "<<Person::getname()<<" with position "<<pos<<" is erased."<<endl;
        }
};

class Student:public Person
{
    private:
        int id;
    public:
        Student(string name1,int p):Person(name1),id(p)
        {
            cout<<"Student "<<Person::getname()<<" with id "<<id<<" is created."<<endl;
        }
        ~Student()
        {
            cout<<"Student "<<Person::getname()<<" with id "<<id<<" is erased."<<endl;
        }
};



class  Course
{
    private:
         Teacher tt;
        Student ss;
        string sss;
    public:
        Course(string s1,string s2,string s3,string s4,int i):tt(s2,s3),ss(s2,i),sss(s4)
        {
            cout<<"Course "<<s4<<" is created."<<endl;
        }
        ~Course()
        {
            cout<<"Course "<<sss<<" is erased."<<endl;
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
	User: 201601160202
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1272 kb
****************************************************************/

