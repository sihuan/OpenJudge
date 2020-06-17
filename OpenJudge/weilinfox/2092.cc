#include <iostream>
#include <algorithm>
#include <iomanip>
#include <typeinfo>
#include <string>
#include <vector>
#include <cstdlib>
#include <cmath>

using namespace std;

class Person {
protected:
    int age; char sex;
public:
    Person (int age, char s):age(age), sex(s) {
        cout << "Person age = " << age << ", sex = " << sex << " is created." << endl;
    }
    virtual ~Person () {cout << "Person age = " << age << ", sex = " << sex << " is erased." << endl;}
};

class Student: public Person {
    int cls;
public:
    Student (int age, char sex, int par):Person(age, sex),\
        cls(par) {cout << "Student of class " << cls << " is created." << endl;}
    ~Student () {cout << "Student of class " << cls << " is erased." << endl;}
};

class Teacher: public Person {
    int cls;
public:
    Teacher (int age, char sex, int par):Person(age, sex),\
        cls(par) {cout << "Teacher with salary " << par << " is created." << endl;}
    ~Teacher () {cout << "Teacher with salary " << cls << " is erased." << endl;}
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
	User: 201901060401
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1272 kb
****************************************************************/

