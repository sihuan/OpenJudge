#include <iostream>
using namespace std;
 
class Person
{
    protected:
    string name;
    public:
        Person(){}
        Person(string _name):name(_name)
        {
            cout << "Person "<< name <<" is created." << endl;
        }
        ~Person()
        {
            cout << "Person "<<name<<" is erased." << endl;
        }
};
class Student:public Person
{
private:
    int id;
public:
    Student(string _name,int _id):Person(_name)
    {
        id = _id;
        //name = _name;
        cout << "Student "<<name<<" with id "<< id <<" is created." << endl;
    }
    ~Student()
    {
        cout << "Student "<<name<<" with id "<<id<<" is erased."<< endl;
    }
};
class Teacher:public Person
{
private:
    string position;
public:
    Teacher(string _name ,string _position):Person(_name)
    {
        //name = _name;
        position = _position;
        cout << "Teacher "<<name<<" with position "<<position<<" is created." << endl;
    }
    ~Teacher()
    {
        cout << "Teacher "<<name<<" with position "<<position<<" is erased." << endl;
    }
};
class Course
{
private:
    Teacher teacher;
    Student student;
    string name;
public:
    Course(string s1,string s2,string _position,string _name,int _id):student(s2,_id),teacher(s2,_position)
    {
        name = _name;
        cout << "Course "<<name<<" is created."<< endl;
    }
    ~Course()
    {
        cout << "Course "<<name<<" is erased." << endl;
    }
 
};
int main()
{
    string s1, s2, s3, s4;
    int i;
    cin>>s1>>s2>>s3>>s4>>i;
    Person person1(s1), person2(s2);
    Teacher teacher(s1, s3);
    Student student(s2, i);
    Course course(s1, s2, s3, s4, i);
    return 0;
}
/**************************************************************
	Problem: 2057
	User: 201901060203
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1272 kb
****************************************************************/

