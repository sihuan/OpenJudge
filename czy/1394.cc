#include <bits/stdc++.h>

using namespace std;
class Graphic
{
protected:
public:
    virtual void show()=0;
};

class Square : public Graphic
{
private:
    double  x1;
public:
    Square(double xx):x1(xx){}
    void show()
    {
        cout<<"Square, side:"<<x1<<", area:"<<x1*x1<<"."<<endl;
    }
};

class Circle : public Graphic
{
private:
    double x2;
public:
    Circle(double xx):x2(xx){}
    void show()
    {
        cout<<"Circle, radius:"<<x2<<", area:"<<3.14*x2*x2<<"."<<endl;
    }
};

class Cube :public Graphic
{
private:
    double x3;
public:
    Cube(double xx):x3(xx){}
    void show()
    {
        cout<<"Cube, side:"<<x3<<", area:"<<6*x3*x3<<", volume:"<<x3*x3*x3<<"."<<endl;
    }
};

class Ball :  public Graphic
{
private:
    double x4;
public:
    Ball(double xx):x4(xx){}
    void show()
    {
        cout<<"Ball, radius:"<<x4<<", area:"<<4*3.14*x4*x4<<", volume:"<<4/3*3.14*x4*x4*x4<<"."<<endl;
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
	User: 201601160202
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1268 kb
****************************************************************/

