#include<iostream>
#include<string>
using namespace std;
class Person
{
private:
    int age;
    string name;
public:
    Person():age(0),name("no name"){cout<<"A person whose name is \""<<name<<"\" and age is 0 is created!"<<endl;}
    Person(string _name,int _age):name(_name),age(_age){cout<<"A person whose name is \""<<name<<"\" and age is "<<age<<" is created!"<<endl;}
    Person(const Person &p)
    {
        name=p.name;
        age=p.age;
        cout<<"A person whose name is \""<<name<<"\" and age is "<<age<<" is cloned!"<<endl;;
    }
    ~Person(){cout<<"A person whose name is \""<<name<<"\" and age is "<<age<<" is erased!"<<endl;}
    Person& setName(string _name)
    {
        name=_name;
        return *this;
    }
    Person& setAge(int _age)
    {
        age=_age;
        return *this;
    }
    void showPerson()
{
    cout<<"This person is \""<<name<<"\" whose age is "<<age<<"."<<endl;
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
	User: 201801020908
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1272 kb
****************************************************************/

