#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cctype>

using namespace std;

class Student {
    int s;
public:
    Student (int c):s(c) {cout << "A student grade " << s << " is created." << endl;}
    ~Student () {cout << "A student grade " << s << " is erased." << endl;}
};

class Teacher {
    double wd;
public:
    Teacher (double t):wd(t) {cout << "A teacher with salary " << wd << " is created." << endl;}
    ~Teacher () {cout << "A teacher with salary " << wd << " is erased." << endl;}


};

class School {
    Student st;
    Teacher t;
public:
    School (int g, double s):st(g), t(s) {cout << "A school is created." << endl;}
    ~School () {cout << "A school is erased." << endl;}
};

int main()
{
    int g;
    double s;
    cin>>g>>s;
    School sch(g, s);
    cin>>g;
    Student stu(g);
    cin>>s;
    Teacher tea(s);
    School(g, s);
    return 0;
}
/**************************************************************
	Problem: 2193
	User: 201901060401
	Language: C++
	Result: Accepted
	Time:12 ms
	Memory:1268 kb
****************************************************************/

