#include<iostream>
using namespace std;
class Orange
{
public:
    int price;
    Orange(double x)
    {
        price=x;
    }
};
class Mandarin
{
public:
    double price;
    Mandarin(double x)
    {
        price=x;
    }
};
template<class T>
class FruitBox
{
public:
    double val;
    double weight[6];
    FruitBox(double p){
        val=p;
    }
    void input(){
    for(int i=0;i<=5;i++)
    cin>>weight[i];
    }
    double value(){
            double sum=0;
        for(int i=0;i<=5;i++)
        {
            sum=sum+val*weight[i];
        }
        return sum;
    }
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
	User: 201901060203
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

