#include <iostream>
#include <iomanip>
//using namespace std;

class Point {
        double x, y;
public:
        Point(double a, double b) {x = a; y = b;}
        Point() {x = y = 0;}
        void show() {
                std::cout << std::setprecision(16) << "Point : (" << x << ", " << y << ')' << std::endl;
        }
};

int main()
{
    char c;
    double a, b;
    Point q;
    while(std::cin>>a>>c>>b)
    {
        Point p(a, b);
        p.show();
    }
    q.show();
}
/**************************************************************
	Problem: 1121
	User: 201901060401
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

