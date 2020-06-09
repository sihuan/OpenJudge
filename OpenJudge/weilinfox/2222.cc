#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

class Date {
        int y, m, d;
public:
        Date (int yy = 0, int mm = 0, int dd = 0):y(yy), m(mm), d(dd) {
                cout << "Date " << y << "-" << m << "-" << d << " is created." << endl;
        }
        ~Date () {
                cout << "Date " << y << "-" << m << "-" << d << " is erased." << endl;
        }
        friend class Person;
};

class Person {
        Date day;
        string name;
public:
        Person (int y, int m, int d, string n):day(y, m, d), name(n) {
                cout << "Person " << name << " was born at " << day.y << "-" << day.m << "-" << day.d << " is created." << endl;
        }
        ~Person () {
                cout << "Person " << name << " was born at " << day.y << "-" << day.m << "-" << day.d << " is erased." << endl;
        }
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

