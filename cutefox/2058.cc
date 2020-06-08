#include <iostream>
#include <string>
using namespace std;

class Date
{
public:
    int year_(){return year;}
    int month_(){return month;}
    int day_(){return day;}
public:
    Date(int y,int m,int d):year(y),month(m),day(d){cout<<"Date "<<year_()<<"-"<<month_()<<"-"<<day_()<<" is created."<<endl;}
    ~Date(){cout<<"Date "<<year_()<<"-"<<month_()<<"-"<<day_()<<" is erased."<<endl;}
private:
    int year,month,day;
};

class Person
{
//public:
//    Date birth;
public:
    Person(int y,int m,int d,string n):birth(y,m,d),name(n){
        numOfPerson++;
        cout<<"The "<<numOfPerson<<"th person "<<name<<" whose birthday is "<<birth.year_()<<"-"<<birth.month_()<<"-"<<birth.day_()<<" is created."<<endl;}
    ~Person(){cout<<"Person "<<name<<" whose birthday is "<<birth.year_()<<"-"<<birth.month_()<<"-"<<birth.day_()<<" is erased."<<endl;}
public:
    string name_(){return name;}
    Date &birth_(){return birth;}//必须使用引用，原因可以进行样例测试可知
private:
    string name;
    Date birth;
    static int numOfPerson;
};

int Person::numOfPerson = 0;

class Student:public Person
{
public:
    Student(int y,int m,int d,string n,int id):Person(y,m,d,n)
    {
        stu=id;
    numOfStudent++;
    cout<<"The "<<numOfStudent<<"th student "<<name_()<<" whose birthday is "<<birth_().year_()<<"-"<<birth_().month_()<<"-"<<birth_().day_()<<" and id is "<<stu<<" is created."<<endl;
    }
    ~Student(){
    cout<<"Student "<<name_()<<" whose birthday is "<<birth_().year_()<<"-"<<birth_().month_()<<"-"<<birth_().day_()<<" and id is "<<stu<<" is erased."<<endl;
    }
private:
    int stu;
    static int numOfStudent;
};

int Student::numOfStudent = 0;
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
	User: 201901060203
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1272 kb
****************************************************************/

