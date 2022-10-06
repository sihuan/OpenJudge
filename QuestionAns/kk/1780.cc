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
    Student(string _name, bool _sex, int _grade)
    {
        next=NULL;
        name=_name;
        sex=_sex;
        grade=_grade;
        cout<<"A student named by "<<name<<" is created!"<<endl;
    }
    ~Student()
    {
        cout<<"A student named by "<<name<<" is erased."<<endl;
    }
    virtual void showInfo()
    {
        cout<<"name = "<<name<<", ";
        cout<<"sex = "<<sex<<", ";
        cout<<"grade = "<<grade<<";";
    }
    Student* getNext(){return next;}
    void setNext(Student* another)
    {
        next=another;
    }
protected:
    string name;
    bool sex;
    int grade;
    Student *next;
};
class StudentCadre:public Student
{
public:
    StudentCadre(string _name, bool _sex, int _grade, string pos):Student(_name,_sex,_grade)
    {
        position=pos;
        cout<<"A student cadre with position "<<position<<" is created."<<endl;
    }
    ~StudentCadre()
    {
    }
    void showInfo()
    {
        cout<<"name = "<<name<<", ";
        cout<<"sex = "<<sex<<", ";
        cout<<"grade = "<<grade<<";";
        cout<<" position = "<<position<<".";
    }
private:
    string position;
};
int main()
{
    int num;
    string name, position;
    bool sex;
    int grade;
    Student *header, *student, *curStudent;

    cin>>name>>sex>>grade>>position;
    header = new StudentCadre(name, sex, grade,position);
    curStudent = header;
    cin>>num;
    for (int i = 0; i < num; i++)
    {
        cin>>name>>sex>>grade;
        student = new Student(name, sex, grade);
        curStudent -> setNext(student);
        curStudent = curStudent -> getNext();
    }
    ((StudentCadre*)header) -> showInfo();
    cout<<endl;
    curStudent = header;
    while (curStudent -> getNext() != NULL)
    {
        curStudent = curStudent -> getNext();
        curStudent->showInfo();
        cout<<endl;
    }

    curStudent = header;
    while (curStudent != NULL)
    {
        student = curStudent;
        curStudent = curStudent -> getNext();
        delete student;
    }
    return 0;
}
/**************************************************************
	Problem: 1780
	User: 202001060117
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1272 kb
****************************************************************/

