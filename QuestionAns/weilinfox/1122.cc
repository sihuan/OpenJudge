#include <iostream>
#include <iomanip>
//using namespace std;

class Point {
        double x, y;
public:
        Point(double a, double b) {
                x = a; y = b;
                std::cout << std::setprecision(16) << "Point : (" << x << ", " << y << ") is created." << std::endl;
        }
        Point() {
                x = y = 0;
                std::cout << std::setprecision(16) << "Point : (0, 0) is created." << std::endl;
        }
        Point(int a) {
                x = y = a;
                std::cout << std::setprecision(16) << "Point : (" << x << ", " << y << ") is created." << std::endl;
        }
        Point(Point& a) {
                x = a.x; y = a.y;
                std::cout << std::setprecision(16) << "Point : (" << x << ", " << y << ") is copied." << std::endl;
        }
        ~Point() {
                std::cout << std::setprecision(16) << "Point : (" << x << ", " << y << ") is erased." << std::endl;
        }
        void show() {
                std::cout << std::setprecision(16)
                        << "Point : (" << x << ", " << y << ')' << std::endl;
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
    Point q1(q), q2(1);
    q1.show();
    q2.show();
    q.show();
}
/**************************************************************
	Problem: 1122
	User: 201901060401
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

