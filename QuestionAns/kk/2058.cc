#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>

using namespace std;
class Date
{
public:
    Date(int y,int m,int d)
    {
        year=y;
        month=m;
        day=d;
        printf("Date %d-%d-%d is created.\n",year,month,day);
    }
    ~Date()
    {
        printf("Date %d-%d-%d is erased.\n",year,month,day);
    }
    int year;
    int month;
    int day;
};
class Person
{
public:
    Person(int y,int m,int d,string n):birthday(y,m,d)
    {
        numOfPersons++;
        name=n;
        printf("The %dth person ",numOfPersons);
        cout << name;
        printf(" whose birthday is %d-%d-%d is created.\n",birthday.year,birthday.month,birthday.day);
    }
    ~Person()
    {
        numOfPersons--;
        cout <<"Person "<< name;
        printf(" whose birthday is %d-%d-%d is erased.\n",birthday.year,birthday.month,birthday.day);
    }
    Date birthday;
    string name;
    static int numOfPersons;
};
int Person::numOfPersons=0;
class Student:public Person
{
public:
    Student(int y,int m,int d,string n,int i):Person(y,m,d,n)
    {
        numOfStudents++;
        id=i;
        printf("The %dth student ",numOfStudents);
        cout<<name;
        printf(" whose birthday is %d-%d-%d and id is %d is created.\n",birthday.year,birthday.month,birthday.day,id);
    }
    ~Student()
    {
        cout<<"Student "<<name;
        printf(" whose birthday is %d-%d-%d and id is %d is erased.\n",birthday.year,birthday.month,birthday.day,id);
    }
    int id;
    static int numOfStudents;
};
int Student::numOfStudents=0;
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
	User: 202001060117
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1268 kb
****************************************************************/

