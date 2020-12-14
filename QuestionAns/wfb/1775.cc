#include <iostream>
#include <iomanip>
#include <string>
#include <cstdio>

using namespace std;

class Person{
private:
    string name;
    int age;
public:
    Person() : age(0) {
        name = "no name";
        cout<<"A person whose name is \""<<
        name<<"\" and age is "
        <<age<<" is created!"<<endl;
    }
    Person(string n,int a) : age(a) {
        name = n;
        cout<<"A person whose name is \""<<
        name<<"\" and age is "
        <<age<<" is created!"<<endl;
    }
    Person(const Person& p) : age(p.getAge()) {
        name = p.getName();
        cout<<"A person whose name is \""<<
        name<<"\" and age is "
        <<age<<" is cloned!"<<endl;
    }
    ~Person() {
        cout<<"A person whose name is \""<<
        name<<"\" and age is "
        <<age<<" is erased!"<<endl;
    }
    int getAge() const {return age;}
    string getName() const {return name;}
    Person& setAge(int a) {age = a; return *this;}
    Person& setName(string n) {
        name = n;
        return *this;
    }
    void showPerson() const {
        cout<<"This person is \""<<
        name<<"\" whose age is "<<age<<"."<<endl;
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
	User: 201601011420
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1272 kb
****************************************************************/

