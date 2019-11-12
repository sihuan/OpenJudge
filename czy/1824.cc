#include"bits/stdc++.h"
using namespace std;

class Person
{
private:
    string name;
    int age;
public:
    Person(string name2,int age2):name(name2),age(age2)
    {
        cout<<"A person "<<name<<" whose age is "<<age<<" is created."<<endl;
    }
    ~Person()
    {
        cout<<"A person "<<name<<" whose age is "<<age<<" is erased."<<endl;
    }
    void show()
    {
        cout<<"Name is "<<name<<" and age is "<<age<<"."<<endl;
    }
};

class Student:public Person
{
private:
    int grade;
public:
    Student(string name3,int age3,int grade2):Person(name3,age3),grade(grade2)
    {
        cout<<"A student whose grade is "<<grade<<" is created."<<endl;
    }
    ~Student()
    {
        cout<<"A student whose grade is "<<grade<<" is erased."<<endl;
    }
    void show()
    {
        cout<<"Grade is "<<grade<<"."<<endl;
    }

};

int main()
{
    string n;
    int a, g;
    cin>>n>>a>>g;
    Student student(n, a, g);
    student.Person::show();
    student.show();
    return 0;
}
/**************************************************************
	Problem: 1824
	User: 201601160202
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

