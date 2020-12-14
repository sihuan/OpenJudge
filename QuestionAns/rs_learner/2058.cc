#include<bits/stdc++.h>
using namespace std;
class Date
{
public:
    int y,m,d;
public:
    Date(int _y,int _m,int _d):y(_y),m(_m),d(_d)
    {
        cout<<"Date "<<y<<"-"<<m<<"-"<<d<<" is created."<<endl;
    }
    ~Date()
    {
        cout<<"Date "<<y<<"-"<<m<<"-"<<d<<" is erased."<<endl;
    }
};
class Person
{
protected:
    Date bir;
    string name;
    static int numOfPersons;
public:
    Person(int _y,int _m,int _d,string _name):bir(_y,_m,_d),name(_name)
    {
        numOfPersons++;
        cout<<"The "<<numOfPersons<<"th"<<" person "<<name<<" whose birthday is "<<bir.y<<"-"<<bir.m<<"-"<<bir.d<<" is created."<<endl;
    }
    ~Person()
    {
         cout<<"Person "<<name<<" whose birthday is "<<bir.y<<"-"<<bir.m<<"-"<<bir.d<<" is erased."<<endl;
         numOfPersons--;
    }
};
class Student:public Person
{
private:
    int id;
    static int numOfStudent;
public:
    Student(int _y,int _m,int _d,string _name,int _id):Person(_y,_m,_d,_name),id(_id)
    {
        numOfStudent++;
        cout<<"The "<<numOfStudent<<"th "<<"student "<<name<<" whose birthday is "<<bir.y<<"-"<<bir.m<<"-"<<bir.d<<" and id is "<<id<<" is created."<<endl;
    }
    ~Student()
    {
        numOfStudent--;
        cout<<"Student "<<name<<" whose birthday is "<<bir.y<<"-"<<bir.m<<"-"<<bir.d<<" and id is "<<id<<" is erased."<<endl;
    }
};
int Person::numOfPersons=0;
int Student::numOfStudent=0;
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
	User: 201801020908
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1272 kb
****************************************************************/

