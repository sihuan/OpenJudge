#include <bits/stdc++.h>

using namespace std;

class Animal
{
public:
    virtual void eat()=0;
    virtual void fun()=0;
};

class Cat : public Animal
{
    void eat()
    {
        cout<<"Cat eats fishes."<<endl;
    }
    void fun()
    {
        cout<<"Cat catches mouses."<<endl;
    }
};
class Dog : public Animal
{
    void eat()
    {
        cout<<"Dog eats bones."<<endl;
    }
    void fun()
    {
        cout<<"Dog can be housekeeping."<<endl;
    }
};
class Rooster : public Animal
{
    void eat()
    {
        cout<<"Rooster eats corns."<<endl;
    }
    void fun()
    {
        cout<<"Rooster crows."<<endl;
    }
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
	User: 201601160202
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1268 kb
****************************************************************/

