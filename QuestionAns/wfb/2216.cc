#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

class Animal{
public:
    virtual void eat() const = 0;
    virtual void fun() const = 0;
};
class Cat:public Animal{
public:
    void eat() const {cout<<"Cat eats fishes."<<endl;}
    void fun() const {cout<<"Cat catches mouses."<<endl;}
};
class Dog:public Animal{
public:
    void eat() const {cout<<"Dog eats bones."<<endl;}
    void fun() const {cout<<"Dog can be housekeeping."<<endl;}
};
class Rooster:public Animal{
public:
    void eat() const {cout<<"Rooster eats corns."<<endl;}
    void fun() const {cout<<"Rooster crows."<<endl;}
};
int main()
{
    Animal *animal;
    char ch;
    while(cin>>ch)
    {
        switch(ch)
        {
        case 'c':
            animal = new Cat();
            break;
        case 'd':
            animal = new Dog();
            break;
        case 'r':
            animal = new Rooster();
            break;
        }
        animal->eat();
        animal->fun();
        delete animal;
    }
    return 0;
}
/**************************************************************
	Problem: 2216
	User: 201601011420
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

