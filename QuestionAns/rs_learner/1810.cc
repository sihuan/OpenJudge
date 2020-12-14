#include<bits/stdc++.h>
using namespace std;
class Shape
{
protected:
    static int numofshapes;
    double a;
public:
    Shape(double _a):a(_a){numofshapes++;cout<<"A shape is created!"<<endl;}
    virtual ~Shape(){cout<<"A shape is erased!"<<endl;}
    virtual double getArea()=0;
    static int getNumOfShapes(){return numofshapes;}
};
class Circle:public Shape
{
private:
    static int numofcircles;
public:
    Circle(double _a):Shape(_a)
    {
        numofcircles++;
        cout<<"A circle is created!"<<endl;
    }
    ~Circle(){cout<<"A circle is erased!"<<endl;}
    double getArea()
    {
        return 3.14*a*a;
    }
    static int getNumOfCircles(){return numofcircles;}
};
class Square:public Shape
{
private:
    static int numofsquares;
public:
    Square(double _a):Shape(_a){numofsquares++;cout<<"A square is created!"<<endl;}
    ~Square(){cout<<"A square is erased!"<<endl;}
    double getArea()
    {
        return a*a;
    }
    static int getNumOfSquares(){return numofsquares;}
};
int Shape::numofshapes=0;
int Square::numofsquares=0;
int Circle::numofcircles=0;
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
	User: 201801020908
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1272 kb
****************************************************************/

