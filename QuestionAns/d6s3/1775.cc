#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string name_;
    int age_;

public:
    Person()
        : name_("no name")
        , age_(0)
    {
        cout << "A person whose name is \"no name\" and age is 0 is created!" << endl;
    }
    Person(string n, int a)
        : name_(n)
        , age_(a)
    {
        cout << "A person whose name is \"" << name_ << "\" and age is " << age_ << " is created!" << endl;
    }
    Person(const Person& p): name_(p.name_), age_(p.age_) {
        cout << "A person whose name is \"" << name_ << "\" and age is " << age_ << " is cloned!" << endl;
    }
    ~Person()
    {
        cout << "A person whose name is \"" << name_ << "\" and age is " << age_ << " is erased!" << endl;
    }
    Person& setName(string n)
    {
        name_ = n;
        return *this;
    }
    Person& setAge(int a)
    {
        age_ = a;
        return *this;
    }
    void showPerson()
    {
        cout << "This person is \"" << name_ << "\" whose age is " << age_ << "." << endl;
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
	User: 201901060610
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1272 kb
****************************************************************/

