#include <iostream>
#include <iomanip>

using namespace std;

class Shape{
    static int num;
public:
    Shape(double data) : data_(data) {++num; cout<<"A shape is created!"<<endl;}
    virtual ~Shape() {cout<<"A shape is erased!"<<endl;}
    virtual double getArea() const = 0;
    static int getNumOfShapes() {return num;}
protected:
    double data_;
};
class Circle : public Shape{
    static int num_c;
public:
    Circle(double data) : Shape(data) {++num_c; cout<<"A circle is created!"<<endl;}
    ~Circle() {cout<<"A circle is erased!"<<endl;}
    double getArea() const {return 3.14*data_*data_;}
    static int getNumOfCircles() {return num_c;}
};
class Square : public Shape{
    static int num_s;
public:
    Square(double data) : Shape(data) {++num_s; cout<<"A square is created!"<<endl;}
    ~Square() {cout<<"A square is erased!"<<endl;}
    double getArea() const {return data_*data_;}
    static int getNumOfSquares() {return num_s;}
};

int Shape::num = 0;
int Circle::num_c = 0;
int Square::num_s = 0;
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
	User: 201601011420
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1272 kb
****************************************************************/

