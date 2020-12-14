#include<bits/stdc++.h>
#include<cstring>
using namespace std;
class Animal
{
protected:
    string name;
public:
    Animal(string _name):name(_name){}
    virtual ~Animal(){}
    virtual void sound(){}
};
class Cock:public Animal
{
public:
    Cock(string _name):Animal(_name){}
    ~Cock(){}
    void sound()
    {
        cout<<name<<" is a cock, and it can crow."<<endl;
    }
};
class Turkey:public Animal
{
public:
    Turkey(string _name):Animal(_name){}
    ~Turkey(){}
    void sound()
    {
        cout<<name<<" is a turkey, and it can gobble."<<endl;
    }
};
class Duck:public Animal
{
public:
    Duck(string _name):Animal(_name){}
    ~Duck(){}
    void sound()
    {
        cout<<name<<" is a duck, and it can quack."<<endl;
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
	User: 201801020908
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1272 kb
****************************************************************/

