//#include <fstream>
#include <cstring>
#include <algorithm>
#include <iostream>
#include <set>

using namespace std;

//ifstream cin("input.txt");
//ofstream cout("output.txt");

class Date{
public:
    Date(int y,int m,int d) : y_(y),m_(m),d_(d) {cout<<"Date "<<y_<<"-"<<m_<<"-"<<d_<<" is created."<<endl;}
    ~Date() {cout<<"Date "<<y_<<"-"<<m_<<"-"<<d_<<" is erased."<<endl;}
    void show() const {cout<<y_<<"-"<<m_<<"-"<<d_;}
    int getSub(const Date& d) const {
        return  y_-d.y_;
    }
private:
    int y_,m_,d_;
};
class Person{
public:
    Person(int y,int m,int d,string n) : b_(y,m,d),n_(n) {cout<<"Person "<<n_<<" is created."<<endl;}
    ~Person() {cout<<"Person "<<n_<<" is erased."<<endl;}
    string getName() const {return n_;}
    int getAge(const Date& now) const {return now.getSub(b_);}
    void show() const {cout<<n_<<"'s birthday is ";b_.show();cout<<"."<<endl;}
private:
    Date b_;
    string n_;
};
int main()
{
    int y, m, d;
    string name;
    cin>>y>>m>>d>>name;
    Person person(y, m, d, name);
    person.show();
    cin>>y>>m>>d;
    Date now(y,m,d);
    cout<<"Now, "<<person.getName()<<" is "<<person.getAge(now)<<"."<<endl;
    return 0;
}

/**************************************************************
	Problem: 2100
	User: 201601011420
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

