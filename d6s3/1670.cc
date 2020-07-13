#include <iostream>
#include <string>
using namespace std;

class Fruit {
protected:
    double price_;
    int amount_;

public:
    void input()
    {
        cin >> price_ >> amount_;
    }
    virtual double total() = 0;
};

class Apple : public Fruit {
public:
    double total()
    {
        return price_ * amount_ * 30;
    }
};

class Banana : public Fruit {
public:
    double total()
    {
        return price_ * amount_ * 25;
    }
};

class Pear : public Fruit {
public:
    double total()
    {
        return price_ * amount_ * 20;
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
	User: 201901060610
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

