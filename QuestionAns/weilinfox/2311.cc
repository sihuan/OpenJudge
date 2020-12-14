#include <iostream>
#include <algorithm>
#include <iomanip>
#include <typeinfo>
#include <string>
#include <vector>
#include <cstdlib>
#include <cmath>

using namespace std;

class Orange {
    double price, weight;
public:
    Orange (double p=0, double w=0):price(p), weight(w) {}
    void input () {
        double tmp;
        for (int i = 0; i < 6; i++) {
            cin >> tmp;
            weight += tmp;
        }
    }
    double value () {return price * weight;}
};

class Mandarin {
    double price, weight;
public:
    Mandarin (double p=0, double w=0):price(p), weight(w) {}
    void input () {
        double tmp;
        for (int i = 0; i < 6; i++) {
            cin >> tmp;
            weight += tmp;
        }
    }
    double value () {return price * weight;}
};

template <class T>
class FruitBox {
    T box;
public:
    FruitBox (double p):box(p) {}
    void input () {box.input();}
    double value () {return box.value();}
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
	User: 201901060401
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

