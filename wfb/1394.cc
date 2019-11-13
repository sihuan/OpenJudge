#include <iostream>
#include <vector>

using namespace std;

class Graphic{
public:
    Graphic(double l) : l_(l){}
    virtual double area() const=0;
    virtual void show() const = 0;
protected:
    double l_;
};
class Shape:public Graphic{
public:
    Shape(double l) : Graphic(l) {}
};
class Solid:public Graphic{
public:
    Solid(double l) : Graphic(l) {}
    virtual double volume() const = 0;
};
class Square:public Shape{
public:
    Square(double l) : Shape(l){}
    double area() const {return l_*l_;}
    void show() const {cout<<"Square, side:"<<l_<<", area:"<<area()<<"."<<endl;}
};
class Circle:public Shape{
public:
    Circle(double l) : Shape(l) {}
    double area() const {return 3.14*l_*l_;}
    void show() const {cout<<"Circle, radius:"<<l_<<", area:"<<area()<<"."<<endl;}
};
class Cube:public Solid{
public:
    Cube(double l):Solid(l){}
    double area() const {return 6*l_*l_;}
    double volume() const {return l_*l_*l_;}
    void show() const {cout<<"Cube, side:"<<l_<<", area:"<<area()<<", volume:"<<volume()<<"."<<endl;}
};
class Ball:public Solid{
public:
    Ball(double l):Solid(l){}
    double area() const {return 4*3.14*l_*l_;}
    double volume() const {return 4/3*3.14*l_*l_*l_;}
    void show() const {cout<<"Ball, radius:"<<l_<<", area:"<<area()<<", volume:"<<volume()<<"."<<endl;}
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
	User: 201601011420
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1272 kb
****************************************************************/

