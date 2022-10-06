#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <string>

using namespace std;

class Fruit
{
public:
    Fruit(){}
    virtual double total()=0;
    virtual void input()=0;
private:
};
class Apple:public Fruit
{
private:
    double price;
    double num;
public:
    Apple(){}
    void input()
    {
        cin >> price >> num;
    }
    double total()
    {
        return 30*price*num;
    }
};
class Banana:public Fruit
{
private:
    double price;
    double num;
public:
    Banana(){}
    void input()
    {
        cin >> price >> num;
    }
    double total()
    {
        return 25*price*num;
    }
};
class Pear:public Fruit
{
private:
    double price;
    double num;
public:
    Pear(){}
    void input()
    {
        cin >> price >> num;
    }
    double total()
    {
        return 20*price*num;
    }
};
int main()
{
    Fruit* fruit;
    string fruit_name;
    double sum = 0.0;
    int cases;
    cin >> cases;
    for(int i = 1; i <= cases; i++)
    {
        cin >> fruit_name;
        if(fruit_name == "Apple")
            fruit = new Apple();
        if(fruit_name == "Banana")
            fruit = new Banana();
        if(fruit_name == "Pear")
            fruit = new Pear();
        fruit->input();
        sum += fruit->total();
        delete fruit;
    }
    cout << "Total Price : " << sum << endl;

     return 0;
}

/**************************************************************
	Problem: 1670
	User: 202001060117
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

