#include <iostream>
#include <string>
using namespace std;
 
class Person
{
protected:
   int age;
   char sex;
 
public:
    Person(int _age,char _sex):age(_age),sex(_sex){cout<<"Person age = "<<age<<", sex = "<<sex<<" is created."<<endl;}
    ~Person(){cout<<"Person age = "<<age<<", sex = "<<sex<<" is erased."<<endl;}
};
 
class Student: public Person
{
private:
    int grade;
public:
    Student(int _age,char _sex,int par):Person(_age,_sex),grade(par){cout<<"Student of class "<<grade<<" is created."<<endl;cout<<"Student of class "<<grade<<" is erased."<<endl;}
    ~Student(){}
};
class Teacher:public Person
{
private:
    int salary;
public:
    Teacher(int _age,char _sex,int a):Person(_age,_sex),salary(a){cout<<"Teacher with salary "<<salary<<" is created."<<endl;cout<<"Teacher with salary "<<salary<<" is erased."<<endl;}
    ~Teacher(){}
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
	User: 201901060203
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1268 kb
****************************************************************/

