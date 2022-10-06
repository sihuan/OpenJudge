#include <iostream>
#include <iomanip>

using namespace std;

class Point
{
public:
    Point(double a=0,double b=0)
    {
        _a=a;
        _b=b;
    }
    void show()
    {
        cout << setprecision(16) << "Point : (" << _a << ", " << _b << ")" << endl;
    }
private:
    double _a,_b;
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
	User: 202001060117
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1268 kb
****************************************************************/

