#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>

using namespace std;

class Date {
public:
        int y, m, d;
        Date (int yy, int mm, int dd):y(yy), m(mm), d(dd) {cout << "Date " << yy << '-' << mm << '-' << dd << " is created." << endl;}
        ~Date () {cout << "Date " << y << '-' << m << '-' << d << " is erased." << endl;}
};


class Person {
        Date tann;
        static int pnum;
        string name;
public:
        Person (int y, int m, int d, string n):name(n),tann(y, m, d) {pnum++; cout << "The " << pnum << "th person " << n << " whose birthday is " << y << '-' << m << '-' << d << " is created." << endl;}
        ~Person () {cout << "Person " << name << " whose birthday is " << tann.y << '-' << tann.m << '-' << tann.d << " is erased." << endl;}
        int getpnum () {return pnum;}
        string getname () {return name;}
        int gety () {return tann.y;}
        int getm () {return tann.m;}
        int getd () {return tann.d;}
};

int Person::pnum = 0;

class Student: public Person {
        int no;
        static int snum;
public:
        Student (int y, int m, int d, string name, int id):Person(y, m, d, name),no(id) {snum++; cout << "The " << snum << "th student " << name << " whose birthday is " << y << '-' << m << '-' << d << " and id is " << id << " is created." << endl;}
        ~Student () {cout << "Student " << getname() << " whose birthday is " << gety() <<  '-' << getm() << '-' << getd() << " and id is " << no << " is erased." << endl;}
};

int Student::snum = 0;

int main()
{
    int year, month, day, id, i;
    string name;
    int num;
    cin>>num;
    Student **students = new Student*[num];
    for (i = 0; i < num; i++)
    {
        cin>>year>>month>>day>>id>>name;
        students[i] = new Student(year, month, day, name, id);
    }
    for (i = 0;i <num; i++)
        delete students[i];
    delete[] students;
    return 0;
}
/**************************************************************
	Problem: 2058
	User: 201901060401
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1272 kb
****************************************************************/

