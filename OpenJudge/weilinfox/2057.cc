#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>

using namespace std;


class Person {
        string name;
public:
        Person (string n):name(n) {cout << "Person " << name << " is created." << endl;}
        ~Person () {cout << "Person " << name << " is erased." << endl;}
        string getname () {return name;}
};

class Student: public Person {
        int no;
public:
        Student (string name, int n):Person(name),no(n) {cout << "Student " << name << " with id " << n << " is created." << endl;}
        ~Student () {cout << "Student " << getname() << " with id " << no << " is erased." << endl;}
};

class Teacher: public Person {
        string vol;
public:
        Teacher (string name, string v):Person(name), vol(v) {cout << "Teacher " << name << " with position " << v << " is created." << endl;}
        ~Teacher () {cout << "Teacher " << getname() << " with position " << vol << " is erased." << endl;}
};

class Course {
        Teacher tea;
        Student stu;
        string name;
public:
        Course (string s1, string s2, string s3, string s4, int n)\
                :tea(s2,s3), stu(s2, n), name(s4)
        {cout << "Course " << s4 << " is created." << endl;}
        ~Course () {cout << "Course " << name << " is erased." << endl;}
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
	User: 201901060401
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1272 kb
****************************************************************/

