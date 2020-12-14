#include <bits/stdc++.h>

using namespace std;

int sh=0;
int ci=0;
int sq=0;

class Shape
{
protected:
    double r;
public:
    static int getNumOfShapes()
    {
        return sh;
    }
    Shape(double q):r(q)
    {
        cout<<"A shape is created!"<<endl;
        sh++;
    }
    virtual ~Shape()
    {
        cout<<"A shape is erased!"<<endl;
        //sh--;
    }
    virtual double getArea()=0;
};

class Circle:public Shape
{
public:
     static int getNumOfCircles()
    {
        return ci;
    }
    Circle(double q):Shape(q)
    {
        cout<<"A circle is created!"<<endl;
        ci++;
    }
    ~Circle()
    {
        cout<<"A circle is erased!"<<endl;
        //ci--;
    }
    double getArea()
    {
        return 3.14*r*r;
    }
};

class Square:public Shape
{
public:
     static int getNumOfSquares()
    {
        return sq;
    }
    Square(double q):Shape(q)
    {
        cout<<"A square is created!"<<endl;
        sq++;
    }
    ~Square()
    {
        cout<<"A square is erased!"<<endl;
        //sq--;
    }
    double getArea()
    {
        return r*r;
    }
};

int main()
{
    int cases;
    char type;
    double data;
    Shape *shape;
    cin>>cases;
    cout<<"numOfShapes = "<<Shape::getNumOfShapes();
    cout<<", numOfCircles = "<<Circle::getNumOfCircles();
    cout<<", numOfSquares = "<<Square::getNumOfSquares()<<endl;
    for (int i = 0; i < cases; i++)
    {
        cin>>type>>data;
        switch(type)
        {
        case 'C':
            shape = new Circle(data);
            break;
        case 'S':
            shape = new Square(data);
            break;
        }
        cout<<"Area = "<<setprecision(2)<<fixed<<shape->getArea()<<endl;
        delete shape;
    }
    cout<<"numOfShapes = "<<Shape::getNumOfShapes();
    cout<<", numOfCircles = "<<Circle::getNumOfCircles();
    cout<<", numOfSquares = "<<Square::getNumOfSquares()<<endl;
}

/**************************************************************
	Problem: 1810
	User: 201601160202
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1272 kb
****************************************************************/

