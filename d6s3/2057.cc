#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name_;

public:
    Person(string n)
        : name_(n)
    {
        cout << "Person " << name_ << " is created." << endl;
    }
    ~Person()
    {
        cout << "Person " << name_ << " is erased." << endl;
    }
};

class Student : public Person {
private:
    int no_;

public:
    Student(string nm, int no)
        : Person(nm)
        , no_(no)
    {
        cout << "Student " << name_ << " with id " << no_ << " is created." << endl;
    }
    ~Student()
    {
        cout << "Student " << name_ << " with id " << no_ << " is erased." << endl;
    }
};

class Teacher : public Person {
private:
    string po_;

public:
    Teacher(string n, string p)
        : Person(n)
        , po_(p)
    {
        cout << "Teacher " << name_ << " with position " << po_ << " is created." << endl;
    }
    ~Teacher()
    {
        cout << "Teacher " << name_ << " with position " << po_ << " is erased." << endl;
    }
};

class Course {
private:
    Teacher tch_;
    Student stu_;
    string nm_;

public:
    Course(string nt, string ns, string pt, string nc, int no)
        : tch_(ns, pt)
        , stu_(ns, no)
        , nm_(nc)
    {
        cout << "Course " << nm_ << " is created." << endl;
    }
    ~Course()
    {
        cout << "Course " << nm_ << " is erased." << endl;
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
	User: 201901060610
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1272 kb
****************************************************************/

