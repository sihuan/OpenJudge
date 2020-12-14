#include <bits/stdc++.h>

using namespace std;

class Date
{

public:
    int h,m,s;
    Date(int hh,int mm,int ss):h(hh),m(mm),s(ss)
    {
        cout<<"Date "<<h<<"-"<<m<<"-"<<s<<" is created."<<endl;
    }
    void show()
    {

    }
    ~Date()
    {
        cout<<"Date "<<h<<"-"<<m<<"-"<<s<<" is erased."<<endl;
    }

};

class Person
{
    string name;
    Date d;
public:
    Person(int yy,int mm,int dd, string n) :d(yy,mm,dd),name(n)
    {
        cout<<"Person "<<name<<" is created."<<endl;
    }
    ~Person()
    {
        cout<<"Person "<<name<<" is erased."<<endl;
    }
    string getName()
    {
        return name;
    }
    int getAge(Date &n)
    {
        return n.h-d.h;
        /*if(n.h==d.h) return 0;
        else if(n.h>d.h && n.m>d.m) return n.h-d.h;
        else if(n.h>d.h && n.m<d.m) return n.h-d.h-1;
        else if(n.h>d.h && n.m==d.m)
        {
            if(n.s>=d.s) return n.h-d.h;
            else return n.h-d.h-1;
        }*/
    }
    void show()
    {
        cout<<name<<"'s birthday is "<<d.h<<"-"<<d.m<<"-"<<d.s<<"."<<endl;
    }
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
	User: 201601160202
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

