#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <vector>

using namespace std;

class Fruit
{
public:
    virtual double operator +(double another)=0;
protected:
    double weight,price;
};

class Apple:public Fruit
{
public:
    Apple(double _weight,double _price)
    {
        weight=_weight;
        price=_price;
    }
    double operator +(double another)
    {
        return another+weight*price;
    }
};

class Orange:public Fruit
{
public:
    Orange(double _weight,double _price)
    {
        weight=_weight;
        price=_price;
    }
    double operator +(double another)
    {
        if(weight>5&&weight<=10)
            return another+weight*price*0.8;
        if(weight>10)
            return another+weight*price*0.5;
        return another+weight*price;
    }
};

class Banana:public Fruit
{
public:
    Banana(double _weight,double _price)
    {
        weight=_weight;
        price=_price;
    }
    double operator +(double another)
    {
        return another+weight*price*0.5;
    }
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
	User: 202001060117
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1272 kb
****************************************************************/

