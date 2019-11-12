#include"bits/stdc++.h"
using namespace std;

class Student
{
    private:
        string name;
        bool sex;
        int grade;
        Student *next;
    public:
        Student():name(NULL),sex(0),grade(0)
        {

        }
        Student(string n,bool s,int g):name(n),sex(s),grade(g)
        {
            cout<<"A student named by "<<name<<" is created!"<<endl;
            next=NULL;
        }
        ~Student()
        {
            cout<<"A student named by "<<name<<" is erased."<<endl;
            next=NULL;
        }
        void showInfo()
        {
            cout<<"name = "<<name<<", sex = "<<sex<<", grade = "<<grade<<";";
        }
        string name2(){return name;}
        bool sex2() {return sex;}
        int grade2() {return grade;}
        void setNext(Student *p)
        {
            next=p;
        }
        Student* getNext()
        {
            return next;
        }
};

class StudentCadre:public Student
{
    private:
        string position;
    public:
        StudentCadre(string _name, bool _sex, int _grade, string pos):Student(_name,_sex,_grade),position(pos)
        {
            cout<<"A student cadre with position "<<position<<" is created."<<endl;
        }
        ~StudentCadre()
        {

        }
        void showInfo()
        {
            cout<<"name = "<<Student::name2()<<", sex = "<<Student::sex2()<<", grade = "<<Student::grade2()<<";"<<" position = "<<position<<".";
        }
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
	User: 201601160202
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1272 kb
****************************************************************/

