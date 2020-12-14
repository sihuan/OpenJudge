#include <iostream>
#include <algorithm>
#include <iomanip>
#include <typeinfo>
#include <string>
#include <vector>
#include <cstdlib>
#include <cmath>

using namespace std;

class Shape {
    static int num;
public:
    Shape () {num++; cout << "A shape is created!" << endl;}
    virtual ~Shape () {cout << "A shape is erased!" << endl;}
    static int getNumOfShapes () {return num;}
    virtual double getArea () const = 0;
};

int Shape::num = 0;

class Circle:public Shape {
    double r;
    static int cnum;
public:
    static int getNumOfCircles() {return cnum;}
    Circle (double r):r(r) {cnum++; cout << "A circle is created!" << endl;}
    ~Circle () {cout << "A circle is erased!" << endl;}
    double getArea () const {return 3.14*r*r;}
};

int Circle::cnum = 0;


class Square:public Shape {
    double r;
    static int snum;
public:
    static int getNumOfSquares() {return snum;}
    Square (double r):r(r) {snum++; cout << "A square is created!" << endl;}
    ~Square () {cout << "A square is erased!" << endl;}
    double getArea () const {return r*r;}
};

int Square::snum = 0;


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
	User: 201901060401
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1272 kb
****************************************************************/

