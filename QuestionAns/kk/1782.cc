#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <string>

using namespace std;

class Animal
{
public:
    Animal(){}
    virtual void sound()=0;
};

class Cock : public Animal
{
private:
    string name;
public:
    Cock(string _name)
    {
        name = _name;
    }
    void sound()
    {
        cout << name<<" is a cock, and it can crow."<<endl;
    }
};

class Turkey : public Animal
{
private:
    string name;
public:
    Turkey(string _name)
    {
        name = _name;
    }
    void sound()
    {
        cout << name<<" is a turkey, and it can gobble."<<endl;
    }
};

class Duck : public Animal
{
    private:
    string name;
public:
    Duck(string _name)
    {
        name = _name;
    }
    void sound()
    {
        cout << name<<" is a duck, and it can quack."<<endl;
    }
};
int main()
{
    int cases;
    string name;
    char type;
    Animal *animal;
    cin>>cases;
    for (int i = 0; i < cases; i++)
    {
       cin>>name>>type;
       switch(type)
       {
        case 'A':
            animal = new Duck(name);
            break;
        case 'B':
            animal = new Turkey(name);
            break;
        case 'C':
            animal = new Cock(name);
            break;
       }
       animal->sound();
    }
    return 0;
}
/**************************************************************
	Problem: 1782
	User: 202001060117
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

