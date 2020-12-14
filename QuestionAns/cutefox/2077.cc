
#include <iostream>
#include <iomanip>
#include <cstring>
#include <cmath>
#include <list>
#include <vector>
using namespace std;
class Animal
{
public:
    virtual void eat()const = 0;
};
class Dog:public Animal
{
public:
    void eat()const { cout << "Dog eats bone." << endl; }
};
class Cat:public Animal
{
public:
    void eat()const { cout << "Cat eats fish." << endl; }
};
class Sheep:public Animal
{
public:
    void eat()const { cout << "Sheep eats grass." << endl; }
};
class Chicken:public Animal
{
public:
    void eat()const { cout << "Chicken eats worm." << endl; }
};
 
int main()
{
    int c;
    vector<Animal*> animals;
    vector<Animal*>::iterator itr;
    while(cin>>c)
    {
        switch(c)
        {
        case 0 :
            animals.push_back(new Dog());
            break;
        case 1:
            animals.push_back(new Cat());
            break;
        case 2:
            animals.push_back(new Sheep());
            break;
        case 3:
            animals.push_back(new Chicken());
        }
    }
    for (itr = animals.begin(); itr != animals.end(); itr++)
        (*itr)->eat();
    return 0;
}
/**************************************************************
	Problem: 2077
	User: 201901060203
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1272 kb
****************************************************************/

