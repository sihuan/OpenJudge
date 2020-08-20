#include <iostream>
#include <iomanip>

using namespace std;

class Point
{
private:
    double x,y;
    static int i,j;
public:
    Point():x(0),y(0){i++;j++;}
    Point(double a,double b):x(a),y(b){i++;j++;}
    Point(int a):x(a),y(a){i++;j++;}
    Point(const Point &p)
    {
        x=p.x;
        y=p.y;
        i++;
        j++;
    }
    void show()
    {
        cout<<setprecision(16)<<"Point : ("<<x<<", "<<y<<")"<<endl;
    }
    ~Point(){i--;}

     static void showCounter()
    {
    cout<<setprecision(16)<<"Current : "<<i<<" points."<<endl;

    }
   static void showSumOfPoint()
    {
         cout<<setprecision(16)<<"In total : "<<j<<" points."<<endl;
    }
};
int Point::i=0;
int Point::j=0;
void showPoint(Point &a,Point &b,Point &c)
    {

        a.show();
        b.show();
        c.show();

    }
int main()
{
    char c;
    double a, b;
    Point q;
    while(std::cin>>a>>c>>b)
    {
        Point p(a, b);
        p.show();
        p.showCounter();
    }
    q.showSumOfPoint();
    Point q1(q), q2(1);
    Point::showCounter();
    showPoint(q1, q2, q);
    Point::showSumOfPoint();
}
/**************************************************************
	Problem: 1124
	User: 201901061011
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1268 kb
****************************************************************/

