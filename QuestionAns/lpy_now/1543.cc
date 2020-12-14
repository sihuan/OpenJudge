#include<map>
#include<list>
#include<cmath>
#include<queue>
#include<stack>
#include<cstdio>
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

double pow(double number) {
	return number * number;
}

class Point {
public:
	double x, y;
public:
	Point() {

	}
	Point(double a, double b) {
		x = a, y = b;
	}
	void setX(double number) {
		x = number;
	}
	void setY(double number) {
		y = number;
	}
	friend ostream& operator<<(ostream& os, const Point& app) {
		os << "[" << app.x << "," << app.y << "]\n";
		return os;
	}
};
class Circle : public Point {
private:
	double x, y, r;
public:
	Circle(double a, double b, double c) : Point(x, y){
		x = a, y = b, r = c;
	}
	int locate(Point t) {
		if (pow(x - t.x) + pow(y - t.y) == pow(r)) {
			return 0;
		}
		else if (pow(x - t.x) + pow(y - t.y) > pow(r)) {
			return -1;
		}
		return 1;
	}
	void crossPoints(Point src, Point& cp1, Point& cp2) {
		/*double x1, y1, x2, y2;
		x1 = src.x, y1 = src.y, x2 = x, y2 = y;
		double k = (y1 - y2) / (x1 - x2);
		
		double b = y1 - x1 * (y1 - y2) / (x1 - x2);
		double c = x2, d = y2;
		double answer_x1 = (sqrt((pow(k) + 1) * pow(r) - pow(c * k) + (2 * c * d + 2 * b * c) * k - pow(d) - 2 * b * d - pow(b)) + (d + b) * k + c) / (pow(k) + 1);
		double answer_x2 = -1 * (sqrt((pow(k) + 1) * pow(r) - pow(c * k) + (2 * c * d + 2 * b * c) * k - pow(d) - 2 * b * d - pow(b)) + (-b - d) * k - c) / (pow(k) + 1);
		double answer_y1 = (k * (sqrt(pow(k * r) + pow(r) - pow(c * k) + 2 * c * d * k + 2 * b * c * k - pow(d) - 2 * b * d - pow(b)) + c) + d * pow(k) - b) / (pow(k) + 1);
		double answer_y2 = (k * (c - sqrt(pow(k * r) + pow(r) - pow(c * k) + 2 * c * d * k + 2 * b * c * k - pow(d) - 2 * b * d - pow(b)) + d * pow(k) - b)) / (pow(k) + 1);
		if (x1 == x2) {
			answer_x1 = x2, answer_x2 = x2, answer_y1 = y2 - r, answer_y2 = y2 + r;
		}
		if (y1 == y2) {
			answer_x1 = x2 - r, answer_x2 = x2 + r, answer_y1 = y2, answer_y2 = y2;
		}
		if (answer_x1 > answer_x2) {
			double temp;
			temp = answer_x1, answer_x1 = answer_x2, answer_x2 = temp;
			temp = answer_y1, answer_y1 = answer_y2, answer_y2 = temp;
		}
		else if (answer_x1 == answer_x2 && answer_y1 > answer_y2) {
			double temp;
			temp = answer_y1, answer_y1 = answer_y2, answer_y2 = temp;
		}
		cp1.x = answer_x1, cp1.y = answer_y1, cp2.x = answer_x2, cp2.y = answer_y2;*/
		double k;
		double x1, y1, x2, y2;
		if (src.x != x)
		{
			k = (src.y - y) / (src.x - x);
			x1 = x + r / sqrt(k * k + 1);
			x2 = x - r / sqrt(k * k + 1);
			y1 = k * (x1 - x) + y;
			y2 = k * (x2 - x) + y;
			if (x1 < x2)
			{
				cp1.x = x1;
				cp1.y = y1;
				cp2.x = x2;
				cp2.y = y2;
			}
			else if (x1 == x2)
			{
				cp1.x = cp2.x = x1;
				if (y1 <= y2)
				{
					cp1.y = y1;
					cp2.y = y2;
				}
				else
				{
					cp1.y = y2;
					cp2.y = y1;
				}
			}
			else
			{
				cp1.x = x2;
				cp1.y = y2;
				cp2.x = x1;
				cp2.y = y1;
			}
		}
		else
		{
			cp1.x = cp2.x = x;
			cp1.y = y - r;
			cp2.y = y + r;
		}
	}
};
/*class Rectangle : public Point {
private:
	double x, y, w, h;
public:
	Rectangle(double a, double b, double c, double d) : Point(x, y){
		x = a, y = b, w = c + x, h = d + y;
	}
	int locate(Point t) {
		if (t.x > x && t.x < w && t.y > y && t.y < h) {
			return 1;
		}
		else if (t.x < x || t.x > w || t.y < y || t.y > h) {
			return -1;
		}
		return 0;
	}
	void crossPoints(Point srx, Point& cp1, Point& cp2) {
		double x1 = srx.x, y1 = srx.y, x2 = (x + w) / 2, y2 = (y + h) / 2;
		double answer_x1, answer_x2, answer_y1, answer_y2;
		double k = (y1 - y2) / (x1 - x2), b = y1 - x1 * (y1 - y2) / (x1 - x2);
		double test_y = k * x + b;
		if (test_y >= h && test_y < y) {
			answer_x1 = x, answer_y1 = test_y;
			answer_x2 = w, answer_y2 = k * w + b;
		}
		else {
			answer_y1 = y, answer_x1 = (y - b) / k;
			answer_y2 = h, answer_x2 = (h - b) / k;
		}
		if (answer_x1 > answer_x2) {
			double temp;
			temp = answer_x1, answer_x1 = answer_x2, answer_x2 = temp;
			temp = answer_y1, answer_y1 = answer_y2, answer_y2 = temp;
		}
		else if (answer_x1 == answer_x2 && answer_y1 > answer_y2) {
			double temp;
			temp = answer_y1, answer_y1 = answer_y2, answer_y2 = temp;
		}
		cp1.x = answer_x1, cp1.y = answer_y1;
		cp2.x = answer_x2, cp2.y = answer_y2;
	}
};*/
class Rectangle :public Point
{
private:
	double h, w;
public:
	Rectangle(double xx, double yy, double ww, double hh) :Point(xx, yy), w(ww), h(hh)
	{}
	void setHeight(double hh)
	{
		h = hh;
	}
	void setWidth(double ww)
	{
		w = ww;
	}
	double getHeight()
	{
		return h;
	}
	double getWidth()
	{
		return w;
	}
	int locate(Point t)
	{
		double ll = t.x - x;
		double hh = t.y - y;
		if (0 < ll && ll < w && 0 < hh && hh < h)
			return 1;
		else if ((ll == 0 || ll == w) && (hh >= 0 && hh <= h) || (ll >= 0 && ll <= w) && (hh == 0 || hh == h))
			return 0;
		else
			return -1;
	}
	void crossPoints(Point src, Point& cp1, Point& cp2)
	{
		double k0, k;
		double x1, x2, y1, y2;
		k0 = h / w;
		if (src.x != (x + w / 2))
		{
			k = (src.y - y - h / 2) / (src.x - x - w / 2);
			if (k > k0 || k < -1 * k0)
			{
				x1 = x + w / 2 - h / (2 * k);
				y1 = y;
				x2 = x + w / 2 + h / (2 * k);
				y2 = y + h;
			}
			else if (k < k0 || k >= -1 * k0)
			{
				y1 = y + h / 2 - w * k / 2;
				x1 = x;
				y2 = y + h / 2 + w * k / 2;
				x2 = x + w;
			}
			if (x1 < x2)
			{
				cp1.x = x1;
				cp1.y = y1;
				cp2.x = x2;
				cp2.y = y2;
			}
			else if (x1 == x2)
			{
				cp1.x = cp2.x = x1;
				if (y1 <= y2)
				{
					cp1.y = y1;
					cp2.y = y2;
				}
				else
				{
					cp1.y = y2;
					cp2.y = y1;
				}
			}
			else
			{
				cp1.x = x2;
				cp1.y = y2;
				cp2.x = x1;
				cp2.y = y1;
			}
		}
		else
		{
			cp1.x = cp2.x = x + w / 2;
			cp1.y = y;
			cp2.y = y + h;
		}
	}
};
int main( )
{
    double x,y,r,w,h;
    cin>>x>>y>>r;
    Circle c1(x,y,r);

    cin>>x>>y;
    Point p1(x,y);
    cout<<"点p1在圆c1之"<<((c1.locate(p1)>0)?"内":((c1.locate(p1)<0)?"外":"上"))<<endl;
    cin>>x>>y;
    Point p2(x,y);
    cout<<"点p2在圆c1之"<<((c1.locate(p2)>0)?"内":((c1.locate(p2)<0)?"外":"上"))<<endl;
    cin>>x>>y;
    Point p3(x,y);
    cout<<"点p3在圆c1之"<<((c1.locate(p3)>0)?"内":((c1.locate(p3)<0)?"外":"上"))<<endl;
    cout<<endl;

    Point p4,p5;
    cin>>x>>y;
    p1.setX(x);
    p1.setY(y);
    c1.crossPoints(p1, p4, p5);
    cout<<"点p1与圆c1的圆心相连，与圆交于两点，分别是："<<endl;
    cout<<"交点: "<<p4;
    cout<<"交点: "<<p5;
    cout<<endl;


    cin>>x>>y>>w>>h;
    Rectangle r1(x,y,w,h);

    cin>>x>>y;
    p1.setX(x);
    p1.setY(y);
    cout<<"点p1在矩形r1之"<<((r1.locate(p1)>0)?"内":((r1.locate(p1)<0)?"外":"上"))<<endl;
    cin>>x>>y;
    p2.setX(x);
    p2.setY(y);
    cout<<"点p2在矩形r1之"<<((r1.locate(p2)>0)?"内":((r1.locate(p2)<0)?"外":"上"))<<endl;
    cin>>x>>y;
    p3.setX(x);
    p3.setY(y);
    cout<<"点p3在矩形r1之"<<((r1.locate(p3)>0)?"内":((r1.locate(p3)<0)?"外":"上"))<<endl;
    cout<<endl;

    cin>>x>>y;
    p1.setX(x);
    p1.setY(y);
    r1.crossPoints(p1, p4, p5);
    cout<<"点p1与矩形r1的中心相连，与矩形交于两点，分别是："<<endl;
    cout<<"交点: "<<p4;
    cout<<"交点: "<<p5;

    return 0;
}

/**************************************************************
	Problem: 1543
	User: 201901061011
	Language: C++
	Result: Accepted
	Time:12 ms
	Memory:1284 kb
****************************************************************/

