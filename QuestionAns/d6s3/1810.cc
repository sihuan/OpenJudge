#include <iomanip>
#include <iostream>
using namespace std;

class Shape {
private:
    static int nosh_;

public:
    Shape()
    {
        cout << "A shape is created!" << endl;
        nosh_++;
    }
    virtual ~Shape()
    {
        cout << "A shape is erased!" << endl;
    }
    static int getNumOfShapes()
    {
        return nosh_;
    }
    virtual double getArea() = 0;
};

class Circle : public Shape {
private:
    double radius_;
    static int noci_;

public:
    Circle(double r)
        : radius_(r)
    {
        cout << "A circle is created!" << endl;
        noci_++;
    }
    ~Circle()
    {
        cout << "A circle is erased!" << endl;
    }
    double getArea()
    {
        return radius_ * radius_ * 3.14;
    }
    static int getNumOfCircles()
    {
        return noci_;
    }
};

class Square : public Shape {
private:
    double length_;
    static int nosq_;

public:
    Square(double l)
        : length_(l)
    {
        cout << "A square is created!" << endl;
        nosq_++;
    }
    ~Square()
    {
        cout << "A square is erased!" << endl;
    }
    double getArea()
    {
        return length_ * length_;
    }
    static int getNumOfSquares()
    {
        return nosq_;
    }
};
int Shape::nosh_ = 0, Circle::noci_ = 0, Square::nosq_ = 0;

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
	User: 201901060610
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1272 kb
****************************************************************/

