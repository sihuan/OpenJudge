#include<iostream>
#include<iomanip>
#include<cmath>
#include<cstring>
#include<ctype.h>
using namespace std;

class  Person
{
 private:
     char * name;
     int age;
 public:
    Person():age(0)
    {
        name = new char [10];
        strcpy(name, "no name");
        cout << "A person whose name is \"" << name << "\" and age is 0 is created!" << endl;
    }
    Person(char * name1, int age1)
    {
        name = new char[strlen(name1)+1];
        age = age1;
        strcpy(name, name1);
        cout << "A person whose name is \"" << name << "\" and age is " << age << " is created!" << endl;
    }
    Person(const Person & p)
    {   
        *this = p;
        cout<< "A person whose name is \"" << name << "\" and age is " << age << " is cloned!" << endl;
    }
    Person & setName(char * s)
    {
       name = new char[strlen(s)+1];
       strcpy(name,s);
       return * this;
    }
    Person & setAge (int x)
    {
        age = x;
        return * this ;
    }
     void showPerson()
     { cout << "This person is \"" << name << "\" whose age is " << age << "." << endl;}
     ~Person()
     {
         cout <<"A person whose name is \"" << name << "\" and age is " << age << " is erased!"<<endl;
         delete []name;
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
	User: 201601160202
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1268 kb
****************************************************************/

