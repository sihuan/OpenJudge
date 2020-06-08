
#include <iostream>
using namespace std;
class Person
{
public :
    string name;
    int age;
    Person():name("no name"),age(0)
    {
        cout<<"A person whose name is \""<<name<<"\" and age is "<<age<<" is created!"<<endl;
    }
    Person(string arr, int a):name(arr), age(a)
    {
        cout<<"A person whose name is \""<<name<<"\" and age is "<<age<<" is created!"<<endl;
    }
    Person(const Person &p)
    {
        name=p.name;
        age=p.age;
         cout<<"A person whose name is \""<<name<<"\" and age is "<<age<<" is cloned!"<<endl;
    }
    void showPerson()
    {
         cout<<"This person is \""<<name<<"\" whose age is "<<age<<"."<<endl;
    }
    Person &setName(string name_)
    {
        name=name_;
    }
    Person &setAge(int a)
    {
        age=a;
    }
    ~Person()
    {
         cout<<"A person whose name is \""<<name<<"\" and age is "<<age<<" is erased!"<<endl;
    }
};
int main()
{
    int cases;
    char str[80];
    int age;

    Person noname, Tom("Tom", 16), anotherTom(Tom);
    cin>>cases;
    for (int ca = 0; ca < cases; ca++)
    {
        cin>>str>>age;
        Person newPerson(str, age);
        newPerson.showPerson();
    }
    anotherTom.setName(str).setAge(18);
    anotherTom.showPerson();
    noname.showPerson();
    return 0;
}
/**************************************************************
	Problem: 1775
	User: 201901060203
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1272 kb
****************************************************************/

