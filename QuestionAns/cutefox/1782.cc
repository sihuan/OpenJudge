#include<iostream>
#include<string>
using namespace std;
class Animal
{
protected:
    string name;
public:
    Animal(){}
    Animal(string a):name(a){}
    void sound(){}
};
class Cock:public Animal
{
protected:
    string name;
public:
    Cock(string a):name(a){cout<<name<<" is a cock, and it can crow."<<endl;}
    void sound(){cout<<name<<" is a cock, and it can crow."<<endl;}
};
class Turkey:public Animal
{
protected:
    string name;
public:
    Turkey(string a):name(a){cout<<name<<" is a turkey, and it can gobble."<<endl;}
    void sound(){cout<<name<<" is a turkey, and it can gobble."<<endl;}
};
class Duck:public Animal
{
protected:
    string name;
public:
    Duck(string a):name(a){cout<<name<<" is a duck, and it can quack."<<endl;}
    void sound(){cout<<name<<" is a cock, and it can quack."<<endl;}
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
	User: 201901060203
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

