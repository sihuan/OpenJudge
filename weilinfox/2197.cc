#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cstring>
#include <cstdlib>
#include <cmath>
 
using namespace std;
 
class Circle {
        double radius;
public:
        static double PI;
        Circle (double r = 0):radius(r) {}
        double getArea() {
                return PI * radius * radius;
        }
        double  getRadius() {
                return radius;
        }
};
 
double Circle::PI = 3.14;
#define const
 

int main()
{
    double radius;
    cout<<"PI="<<Circle::PI<<endl;
    const Circle c1(2);
    cout<<"radius="<<c1.getRadius();
    cout<<",area="<<c1.getArea()<<endl;
    cin>>radius;
    Circle c2(radius);
    cout<<"radius="<<c2.getRadius();
    cout<<",area="<<c2.getArea()<<endl;
    return 0;
}
/**************************************************************
	Problem: 2197
	User: 201901060401
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

