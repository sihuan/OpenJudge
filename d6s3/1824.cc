#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string name_;
    int age_;

public:
    Person(string n, int a)
        : name_(n)
        , age_(a)
    {
        cout << "A person " << name_ << " whose age is " << age_ << " is created." << endl;
    }
    ~Person()
    {
        cout << "A person " << name_ << " whose age is " << age_ << " is erased." << endl;
    }
    void show()
    {
        cout << "Name is " << name_ << " and age is " << age_ << "." << endl;
    }
};

class Student : public Person {
private:
    int grade_;

public:
    Student(string n, int a, int g)
        : Person(n, a)
        , grade_(g)
    {
        cout << "A student whose grade is " << grade_ << " is created." << endl;
    }
    ~Student()
    {
        cout << "A student whose grade is " << grade_ << " is erased." << endl;
    }
    void show()
    {
        cout << "Grade is " << grade_ << "." << endl;
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
	User: 201901060610
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

