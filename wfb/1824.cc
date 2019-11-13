#include <iostream>
#include <vector>

using namespace std;

class Person{
public:
    Person(string n,int a) : name(n),age(a) {cout<<"A person "<<name<<" whose age is "<<age<<" is created."<<endl;}
    ~Person() {cout<<"A person "<<name<<" whose age is "<<age<<" is erased."<<endl;}
     void show() const {cout<<"Name is "<<name<<" and age is "<<age<<"."<<endl;}
protected:
    string name;
    int age;
};
class Student:public Person{
public:
    Student(string n,int a,int g) : Person(n,a),grade(g){cout<<"A student whose grade is "<<grade<<" is created."<<endl;}
    ~Student() {cout<<"A student whose grade is "<<grade<<" is erased."<<endl;}
    void show() const {cout<<"Grade is "<<grade<<"."<<endl;}
private:
    int grade;
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
	User: 201601011420
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

