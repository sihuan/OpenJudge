#include <iostream>
#include <algorithm>
#include <iomanip>
#include <typeinfo>
#include <string>
#include <vector>
#include <cstdlib>
#include <cmath>

using namespace std;

class Fruit {
protected:
    double price, weight;
public:
    Fruit (double w, double p):weight(w), price(p) {}
    virtual double gettotp () const = 0;
    virtual double operator + (double) {return 0.0;}
};

class Apple: public Fruit {
public:
    Apple (double w, double p):Fruit(w, p) {}
    double gettotp () const {return price*weight;}
    double operator + (double tot) {return gettotp() + tot;}
};

class Banana: public Fruit {
public:
    Banana (double w, double p):Fruit(w, p) {}
    double gettotp () const {return price*weight/2;}
    double operator + (double tot) {return gettotp() + tot;}
};

class Orange: public Fruit {
public:
    Orange (double w, double p):Fruit(w, p) {}
    double gettotp () const {
        if (weight > 10) return price*weight/2;
        else if (weight > 5) return price*weight*0.8;
        else return price*weight;
    }
    double operator + (double tot) {return gettotp() + tot;}
};

int main()
{
    vector<Fruit*> fruits;
    vector<Fruit*>::iterator itr;
    char type;
    double weight, price, totalPrice;
    while (cin>>type>>weight>>price)
    {
        switch(type)
        {
        case 'a':
            fruits.push_back(new Apple(weight, price));
            break;
        case 'b':
            fruits.push_back(new Banana(weight,price));
            break;
        case 'o':
            fruits.push_back(new Orange(weight, price));
            break;
        }
    }
    totalPrice = 0;
    for (itr = fruits.begin(); itr != fruits.end(); itr++)
    {
        totalPrice = **itr + totalPrice;
    }
    cout<<totalPrice<<endl;
    return 0;
}
/**************************************************************
	Problem: 2064
	User: 201901060401
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1272 kb
****************************************************************/

