#include <iostream>
#include <cstdio>
#include <iomanip>
#include <algorithm>
#include <functional>
#include <cstring>

using namespace std;

class Student
{
public:
    friend istream& operator>>(istream&,Student&);
    friend ostream& operator<<(ostream&,Student&);
    bool operator >(Student &stu)
    {
        if(age>stu.age)
            return true;
        if(age==stu.age&&name>stu.name)
            return true;
        return false;
    }
private:
    int age;
    string name;
};
istream& operator>>(istream& is,Student& stu)
{
    is>>stu.name>>stu.age;
    return is;
}
ostream& operator<<(ostream& os,Student& stu)
{
    os<<stu.name<<" "<<stu.age;
    return os;
}
int main()
{
    Student stu, max;
    while(cin>>stu)
    {
        if (stu > max)
            max = stu;
    }
    cout<<max<<endl;
    return 0;
}
/**************************************************************
	Problem: 2066
	User: 202001060117
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

