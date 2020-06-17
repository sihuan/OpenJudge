#include <iostream>
#include <algorithm>
#include <iomanip>
#include <typeinfo>
#include <string>
#include <vector>
#include <cstdlib>
#include <cmath>

using namespace std;

class Graphic {
protected:
    double r;
public:
    Graphic (double x):r(x) {}
    virtual void show () {}
};

class Square: public Graphic {
public:
    Square(double x):Graphic(x) {}
    void show () {cout << "Square, side:" << r <<
        ", area:" << r*r << '.' << endl;}
};

class Ball:public Graphic{
public:
    Ball (double x):Graphic(x) {}
    void show () {cout << "Ball, radius:" << r << ", area:" <<
        4*3.14*r*r << ", volume:" << 4/3*3.14*r*r*r << '.' << endl;}
};

class Cube: public Graphic{
public:
    Cube (double x):Graphic(x) {}
    void show () {cout << "Cube, side:" << r <<
        ", area:" << r*r*6 << ", volume:" << r*r*r << '.' << endl;}
};

class Circle:public Graphic {
public:
    Circle(double x):Graphic(x) {}
    void show () {cout << "Circle, radius:" << r << ", area:" << 3.14*r*r
        << '.' << endl;}
};



int main()
{
    Graphic *gp[100];
    int cases;
    cin>>cases;
    for(int i = 0; i < cases; ++i)
    {
        string types;
        double value;
        cin>>types>>value;
        if(types == "square")
            gp[i] = new Square(value);
        if(types == "cube")
            gp[i] = new Cube(value);
        if(types == "ball")
            gp[i] = new Ball(value);
        if(types == "circle")
            gp[i] = new Circle(value);
    }
    for(int i = 0; i < cases; ++i)
    {
        gp[i]->show();
        delete gp[i];
    }
}

/**************************************************************
	Problem: 1394
	User: 201901060401
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1268 kb
****************************************************************/

