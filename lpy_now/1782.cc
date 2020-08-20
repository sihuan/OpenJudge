#include <iostream>
#include <iomanip>
using namespace std;
class Animal
{
protected:
    string name;
public:
   virtual void sound()const = 0;
public:
    Animal(){ }
    Animal(string n) : name(n){  }
    virtual ~Animal(){ }
};
 
class Cock : virtual public Animal
{
public:
   void sound() const
   {
       cout << name << " is a cock, and it can crow." << endl;
   }
public:
    Cock(string n) : Animal(n){ }
    ~Cock(){ }
};
class Turkey : virtual public Animal
{
public:
   void sound() const
   {
       cout << name << " is a turkey, and it can gobble." << endl;
   }
public:
    Turkey(string n) : Animal(n){ }
    ~Turkey(){ }
};
class Duck : virtual public Animal
{
public:
   void sound() const
   {
       cout << name << " is a duck, and it can quack." << endl;
   }
public:
    Duck(string n) : Animal(n){ }
    ~Duck(){ }
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
	User: 201901061011
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1272 kb
****************************************************************/

