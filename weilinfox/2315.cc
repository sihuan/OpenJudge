#include <iostream>
#include <algorithm>
#include <iomanip>
#include <typeinfo>
#include <string>
#include <vector>
#include <cstdlib>
#include <cmath>

using namespace std;


class Berry {
public:
    double w, p;
    Berry (double w, double p):w(w), p(p) {cout << "Construct berry!" << endl;}
    virtual ~Berry () {cout << "Destruct berry!" << endl;}
    void print() {cout << "Berry : " << w << "kg" << endl;}
};

class Strawberry: public Berry {
public:
    Strawberry (double p, double w):Berry(w, p) {cout << "Construct strawberry!" << endl;}
    ~Strawberry () {cout << "Destruct strawberry!" << endl;}
    void print() {cout << "Strawberry : " << w << "kg, " << w*p << '.' << endl;}
};

class Blueberry: public Berry {
public:
    Blueberry (double p, double w):Berry(w, p) {cout << "Construct blueberry!" << endl;}
    ~Blueberry () {cout << "Destruct blueberry!" << endl;}
    void print() {cout << "Blueberry : " << w << "kg, " << w*p << '.' << endl;}
};

class Mulberry: public Berry {
public:
    Mulberry  (double p, double w):Berry(w, p) {cout << "Construct mulberry!" << endl;}
    ~Mulberry () {cout << "Destruct mulberry!" << endl;}
    void print() {cout << "Mulberry : " << w << "kg, " << w*p << '.' << endl;}
};


int main()
{
    int cases;
    cin >> cases;
    while(cases--)
    {
        string lb;
        double price, weight;
        cin >> lb >> price >> weight;
        if(lb == "S")
        {
            Strawberry straw(price, weight);
            straw.Berry::print();
            straw.print();
        }
        if(lb == "M")
        {
            Mulberry mul(price, weight);
            mul.Berry::print();
            mul.print();
        }
        if(lb =="B")
        {
            Blueberry blue(price, weight);
            blue.Berry::print();
            blue.print();
        }
        cout << endl;
    }
}

/**************************************************************
	Problem: 2315
	User: 201901060401
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1272 kb
****************************************************************/

