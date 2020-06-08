#include <iostream>
#include<string>
using namespace std;
class Student
{
public:
    string name;
    int age;
    Student()
    {
        name="";
        age=0;
    }
    int operator>(Student another)
    {
        if(age>another.age)
            return 1;
        else if(age==another.age)
        {
            int i=0;
            while(i!=name.size()||i!=another.name.size())
            {
                if(name[i]>another.name[i])
                    return 1;
                else if(name[i]==another.name[i])
                    i++;
                else
                    return 0;
            }
        }
        else
            return 0;
    }
    friend ostream& operator<<(ostream& os,Student& another);

    friend istream& operator>>(istream& is,Student& another);

};
ostream& operator<<(ostream& os,Student& another)
{
    cout<<another.name<<" "<<another.age<<endl;
    return os;
}
istream& operator>>(istream& is,Student& another)
{
    cin>>another.name>>another.age;
    return is;
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
	User: 201901060203
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

