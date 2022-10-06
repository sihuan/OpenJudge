#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>

using namespace std;

class Person
{
public:
    Person()
    {
        name = new char [100];
        strcpy(name,"no name\0");
        age=0;
        cout << "A person whose name is \""<<name<<"\" and age is "<<age<<" is created!"<<endl;
    }
    Person(char *_name,int _age)
    {
        name=_name;
        age=_age;
        cout << "A person whose name is \""<<name<<"\" and age is "<<age<<" is created!"<<endl;
    }

    Person(const Person &another)
    {
        name=another.name;
        age=another.age;
        cout << "A person whose name is \""<<name<<"\" and age is "<<age<<" is cloned!"<<endl;
    }
    ~Person()
    {
        cout << "A person whose name is \""<<name<<"\" and age is "<<age<<" is erased!"<<endl;
    }
    void showPerson()
    {
        cout << "This person is \""<<name<<"\" whose age is "<<age<<"."<<endl;
    }
    void setAge(int _age)
    {
        age=_age;
    }
    Person &setName(char *_name)
    {
        name=_name;
        return *this;
    }
private:
    int age;
    char *name;
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
	User: 202001060117
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1268 kb
****************************************************************/

