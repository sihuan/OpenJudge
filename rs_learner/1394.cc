#include<bits/stdc++.h>
using namespace std;
class Graphic
{
public:
    Graphic(){}
    virtual ~Graphic(){}
    virtual void show(){}
};
class Shape:public Graphic
{
protected:
    double a;
public:
    Shape(double _a):a(_a){}
    ~Shape(){}
    void show(){}
};
class Solid:public Graphic
{
protected:
    double b;
public:
    Solid(double _b):b(_b){}
    ~Solid(){}
    void show(){}
};
class Square:public Shape
{
public:
    Square(double _a):Shape(_a){}
    ~Square(){}
    void show()
    {
        cout<<"Square, side:"<<a<<", area:"<<a*a<<"."<<endl;
    }
};
class Circle:public Shape
{
public:
    Circle(double _a):Shape(_a){}
    ~Circle(){}
    void show()
    {
        cout<<"Circle, radius:"<<a<<", area:"<<3.14*a*a<<"."<<endl;
    }
};
class Cube:public Solid
{
public:
    Cube(double _b):Solid(_b){}
    ~Cube(){}
    void show()
    {
        cout<<"Cube, side:"<<b<<", area:"<<b*b*6<<", volume:"<<b*b*b<<"."<<endl;

    }
};
class Ball:public Solid
{
public:
    Ball(double _b):Solid(_b){}
    ~Ball(){}
    void show()
    {
        cout<<"Ball, radius:"<<b<<", area:"<<4*3.14*b*b<<", volume:"<<b*b*b*3.14*(4/3)<<"."<<endl;
    }
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
	User: 201801020908
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1272 kb
****************************************************************/

