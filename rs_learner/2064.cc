#include<bits/stdc++.h>
#include<vector>
using namespace std;
class Fruit
{
protected:
    double price;
    double w;
public:
    Fruit(double _w,double _p):w(_w),price(_p){}
    virtual ~Fruit(){}
    virtual double total()=0;
    friend double operator+(Fruit &f,double t)
   {
        return f.total()+t;
   }
};
class Apple:public Fruit
{
public:
    Apple(double _w,double _p):Fruit(_w,_p){}
    ~Apple(){}
    double total()
    {
        return w*price;
    }

};
class Banana:public Fruit
{
public:
    Banana(double _w,double _p):Fruit(_w,_p){}
    ~Banana(){}
    double total()
    {
        return w/2*price;
    }
};
class Orange:public Fruit
{
public:
    Orange(double _w,double _p):Fruit(_w,_p){}
    ~Orange(){}
    double total()
    {
         if(w>10)
            return w/2*price;
        else if(w>5&&w<=10)
            return w*price*0.8;
        else
            return w*price;
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
	User: 201801020908
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1272 kb
****************************************************************/

