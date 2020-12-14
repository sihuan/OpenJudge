#include<map>
#include<list>
#include<cmath>
#include<queue>
#include<stack>

#include<vector>
#include<iomanip>
#include<cstring>
#include<iterator>
#include<iostream>
#include<algorithm>
#define R register
#define LL long long
#define pi 3.141
#define INF 1400000000
using namespace std;

class Point{
	private:
		double x, y;
	public:
		Point(double a = 0, double b = 0){
			x = a, y = b;
		}
		void show(){
			cout << "Point : (" << x << ", " << y << ")\n";
		}
		double get_x(){
			return x;
		}
		double get_y(){
			return y;
		}
};
class Line{
	private:
		double x1, x2, y1, y2;
	public:
		Line(double a, double b, double c, double d){
			x1 = a, y1 = b, x2 = c, y2 = d;
		}
		void show(){
			cout << "Line : (" << x1 << ", " << y1 << ") to (" << x2 << ", " << y2 << ")\n";
		}
		Line(Point object_1, Point object_2){
			x1 = object_1.get_x(), y1 = object_1.get_y(), x2 = object_2.get_x(), y2 = object_2.get_y();
		}
};
int main()
{
    char c;
    int num, i;
    double x1, x2, y1, y2;
    Point p(1, -2), q(2, -1), t;
    t.show();
    std::cin>>num;
    for(i = 1; i <= num; i++)
    {
        std::cin>>x1>>c>>y1>>x2>>c>>y2;
        Line line(x1, y1, x2, y2);
        line.show();
    }
    Line l1(p, q), l2(p, t), l3(q, t), l4(t, q);
    l1.show();
    l2.show();
    l3.show();
    l4.show();
}
/**************************************************************
	Problem: 1327
	User: 201901061011
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1268 kb
****************************************************************/

