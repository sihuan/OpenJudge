#include<iostream>
using namespace std;
class Circle
{
public:
    double r;
    Circle(double s)
    {
        r=s;
    }
    static double PI;
    double getArea()const
    {
        return PI*r*r;
    }
    double getRadius() const
    {
        return r;
    }
};
double Circle::PI = 3.14;
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
	User: 201901060203
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

