#include<bits/stdc++.h>
#include<cstring>
using namespace std;
class Date
{
    friend class Person;
private:
    int y,m,d;
public:
    Date(int _y,int _m,int _d):y(_y),m(_m),d(_d)
    {
        cout<<"Date "<<y<<"-"<<m<<"-"<<d<<" is created."<<endl;
    }
    ~Date(){cout<<"Date "<<y<<"-"<<m<<"-"<<d<<" is erased."<<endl;}
};
class Person
{
private:
    Date d1;
    string name;
public:
    Person(int _y,int _m,int _d,string _name):d1(_y,_m,_d),name(_name)
    {
        cout<<"Person "<<name<<" was born at "<<d1.y<<"-"<<d1.m<<"-"<<d1.d<<" is created."<<endl;
    }
    ~Person()
    {
        cout<<"Person "<<name<<" was born at "<<d1.y<<"-"<<d1.m<<"-"<<d1.d<<" is erased."<<endl;
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
	User: 201801020908
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1268 kb
****************************************************************/

