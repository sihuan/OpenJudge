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
using namespace std;

class Point{
	private:
	    double x,y;
	public:
	    Point(){
			x = 0, y = 0;
			cout << setprecision(16) << "Point : (0, 0) is created.\n";
		}
	    Point(double a,double b){
			x = a, y = b;
			cout << setprecision(16) << "Point : (" << x << ", " << y << ") is created.\n";
		}
	    void show(){
			cout << setprecision(16) << "Point : (" << x << ", " << y << ")\n";
		}
	    ~Point(){
			cout << setprecision(16) << "Point : (" << x << ", " << y << ") is erased.\n";
		}
	    Point(Point &a){
			x = 0, y = 0;
			cout << setprecision(16) << "Point : (0, 0) is copied.\n";
		}
	    Point(int a){
			x = a, y = a;
			cout << setprecision(16) << "Point : (" << x << ", " << y << ") is created.\n";
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
	User: 201901061011
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

