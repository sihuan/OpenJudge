#include <cstdio>
#include <cstdlib>
#include <cctype>
#include <cstring>
#include <cmath>
#include <iostream>
#include <algorithm>
#include <iomanip>
#include <sstream>
#include <ostream>
#include <istream>
#include <fstream>
#include <vector>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <deque>

using namespace std;

class Person {
        string name;
        int age;
public:
        Person (string n, int a):name(n),age(a) {cout << "A person " << name << " whose age is " << age << " is created." << endl;}
        ~Person () {cout << "A person " << name << " whose age is " << age << " is erased." << endl;}
        void show() {cout << "Name is " << name << " and age is " << age << '.' << endl;}
};

class Student : public Person {
        int grade;
public:
        Student (string n, int a, int g):Person(n, a),grade(g) {cout << "A student whose grade is " << g << " is created." << endl;}
        ~Student () {cout << "A student whose grade is " << grade << " is erased." << endl;}
        void show() {cout << "Grade is " << grade << '.' << endl;}
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
	User: 201901060401
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

