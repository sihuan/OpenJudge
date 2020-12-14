#include <iostream>
using namespace std;

const double PI = 3.14;

class Graphic {
public:
    virtual void show() = 0;
};

class Square : public Graphic {
private:
    double x_;

public:
    Square(double x)
        : x_(x)
    {
    }
    void show()
    {
        cout << "Square, side:" << x_ << ", area:" << x_ * x_ << "." << endl;
    }
};

class Circle : public Graphic {
private:
    double r_;

public:
    Circle(double r)
        : r_(r)
    {
    }
    void show()
    {
        cout << "Circle, radius:" << r_ << ", area:" << PI * r_ * r_ << "." << endl;
    }
};

class Ball : public Graphic {
private:
    double r_;

public:
    Ball(double r)
        : r_(r)
    {
    }
    void show()
    {
        cout << "Ball, radius:" << r_ << ", area:" << 4 * PI * r_ * r_ << ", volume:" << 4 / 3 * PI * r_ * r_ * r_ << "." << endl;
    }
};

class Cube : public Graphic {
private:
    double x_;

public:
    Cube(double x)
        : x_(x)
    {
    }
    void show()
    {
        cout << "Cube, side:" << x_ << ", area:" << x_ * x_ * 6 << ", volume:" << x_ * x_ * x_ << "." << endl;
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
	User: 201901060610
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1268 kb
****************************************************************/

