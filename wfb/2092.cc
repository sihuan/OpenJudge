#include <iostream>
#include <cstdio>

using namespace std;

class Person{
public:
    Person(int a,char s) : age(a),sex(s) {cout<<"Person age = "<<age<<", sex = "<<sex<<" is created."<<endl;}
    virtual ~Person() {cout<<"Person age = "<<age<<", sex = "<<sex<<" is erased."<<endl;}
protected:
    int age;
    char sex;
};
class Student : public Person{
public:
    Student(int a,char s,int n) : Person(a,s),num(n){cout<<"Student of class "<<num<<" is created."<<endl;}
    ~Student() {cout<<"Student of class "<<num<<" is erased."<<endl;}
private:
    int num;
};
class Teacher : public Person{
public:
    Teacher(int a,char s,int p) : Person(a,s),par(p) {cout<<"Teacher with salary "<<par<<" is created."<<endl;}
    ~Teacher() {cout<<"Teacher with salary "<<par<<" is erased."<<endl;}
private:
    int par;
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
	User: 201601011420
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1272 kb
****************************************************************/

