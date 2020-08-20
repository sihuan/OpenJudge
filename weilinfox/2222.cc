#include <iostream>
#include <algorithm>
#include <iomanip>
#include <typeinfo>
#include <string>
#include <vector>
#include <cstdlib>
#include <cmath>

using namespace std;

class Date {
public:
    Date (int y, int m, int d):y(y), m(m), d(d) {cout << "Date " <<y << "-" << m << "-" << d << " is created." << endl;}
    ~Date () {cout << "Date " << y << "-" << m << "-" << d << " is erased." << endl;}
    int y, m, d;
};

class Person {
public:
    Person (int y, int m, int d, string n):dt(y, m, d), n(n) {cout <<"Person " << n << " was born at " << y << "-" << m << "-" << d << " is created." << endl;}
    ~Person () {cout <<"Person " << n << " was born at " << dt.y << "-" << dt.m << "-" << dt.d << " is erased." << endl;}
    Date dt;
    string n;
};


int main()
{
    string name;
    int year, month, day;
    cin>>year>>month>>day;
    Date date(year, month, day);
    cin>>name>>year>>month>>day;
    Person person(year, month, day, name);
    return 0;
}
/**************************************************************
	Problem: 2222
	User: 201901060401
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

