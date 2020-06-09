#include <iostream>
#include <iomanip>
#include <cstring>
#include <cmath>
using namespace std;
 
class Person {
        char* name;
        int age;
public:
        Person () {
                name = new char[80];
                age = 0;
                strcpy(name, "no name");
                cout << "A person whose name is \"" << name << "\" and age is " << age << " is created!" << endl;
        }
        Person (const char* ch, int a) {
                name = new char[80];
                strcpy(name, ch);
                age = a;
                cout << "A person whose name is \"" << name << "\" and age is " << age << " is created!" << endl;
        }
        ~Person () {cout << "A person whose name is \"" << name << "\" and age is " << age << " is erased!" << endl;
                delete name;
        }
        Person (const Person& p) {
                name = new char[80];
                strcpy (name, p.name);
                age = p.age;
                cout << "A person whose name is \"" << name << "\" and age is " << age << " is cloned!" << endl;
        }
        void showPerson () {cout << "This person is \"" << name << "\" whose age is " << age << "." << endl;}
        Person& setName (const char* na) {strcpy(name, na); return *this;}
        void setAge (int a) {age = a;}


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
	User: 201901060401
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

