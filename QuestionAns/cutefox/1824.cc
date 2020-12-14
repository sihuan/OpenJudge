#include <iostream>
using namespace std;
class Person
{
public :
    string name;
    int age;
    Person(string arr, int brr):name(arr), age(brr)
    {
        cout<<"A person "<<name<<" whose age is "<<age<<" is created."<<endl;
    }
    void show()
    {
        cout<<"Name is "<<name<<" and age is "<<age<<"."<<endl;
    }
    ~Person()
    {
        cout<<"A person "<<name<<" whose age is "<<age<<" is erased."<<endl;
    }
};
class Student :public Person
{
public :
    int grade;
    Student(string arr, int a, int g):Person(arr,a),grade(g)
    {
        cout<<"A student whose grade is "<<grade<<" is created."<<endl;
    }
    void show()
    {
        cout<<"Grade is "<<grade<<"."<<endl;
    }
    ~Student()
    {
        cout<<"A student whose grade is "<<grade<<" is erased."<<endl;
    }
};
int main()
{
    string n;
    int a, g;
    cin>>n>>a>>g;
    Student student(n, a, g);
    student.Person::show();
    student.show();
    return 0;
}
/**************************************************************
	Problem: 1824
	User: 201901060203
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

