#include <bits/stdc++.h>
using namespace std;
class Shape{
   public:
     static int numOfShapes;
     Shape(){
       cout<<"A shape is created!"<<endl;numOfShapes++;
     }
     virtual double getArea()=0;
     static int getNumOfShapes(){return numOfShapes;}
     virtual ~Shape(){
       cout<<"A shape is erased!"<<endl;
     }
};
int Shape::numOfShapes=0;
class Circle:public Shape{
   double r;
   static int numOfCircles;
   public:
     Circle(double a):r(a){
       cout<<"A circle is created!"<<endl;numOfCircles++;
     }
     double getArea(){ return 3.14*r*r; }
     static int getNumOfCircles(){return numOfCircles;}
     ~Circle(){
       cout<<"A circle is erased!"<<endl;
     }
};
int Circle::numOfCircles=0;
class Square:public Shape{
   double a;
   static int numOfSquares;
   public:
       Square(double r):a(r){
         cout<<"A square is created!"<<endl;numOfSquares++;
       }
       double getArea(){
         return a*a;
       }
       static int getNumOfSquares(){ return numOfSquares; }
       ~Square(){
         cout<<"A square is erased!"<<endl;
       }
};
int Square::numOfSquares=0;
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
	User: 201901060203
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1272 kb
****************************************************************/

