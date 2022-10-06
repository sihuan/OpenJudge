#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <iomanip>

using namespace std;

class Mandarin
{
public:
    Mandarin(double we=0)
    {
        w=we;
    }
    void weight(double we)
    {
        w+=we;
    }
    double weight()
    {
        return w;
    }
protected:
    double w;
};

class Orange
{
public:
    Orange(double we=0)
    {
        w=we;
    }
    void weight(double we)
    {
        w+=we;
    }
    double weight()
    {
        return w;
    }
protected:
    double w;
};

template <class T>
class FruitBox
{
public:
    FruitBox(double pr)
    {
        p=pr;
        sw=0;
    }
    void input()
    {
        for(int i=0;i<6;i++)
        {
            double we;
            cin>>we;
            fruit[i].weight(we);
            sw+=we;
        }
    }
    double value()
    {
        return p*sw;
    }
private:
    T fruit[6];
    double sw;
    double p;
};

int main()
{
    double orange_price, mandarin_price;

    cin >> orange_price;
    FruitBox<Orange> orange(orange_price);
    orange.input();
    cout << orange.value() << endl;

    cin >> mandarin_price;
    FruitBox<Mandarin> mandarin(mandarin_price);
    mandarin.input();
    cout << mandarin.value() << endl;
}

/**************************************************************
	Problem: 2311
	User: 202001060117
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

