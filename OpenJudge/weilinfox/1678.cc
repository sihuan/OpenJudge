#include <cstdio>
#include <cstdlib>
#include <cctype>
#include <cstring>
#include <cmath>
#include <iostream>
#include <algorithm>
#include <iomanip>
#include <sstream>
#include <ostream>
#include <istream>
#include <fstream>
#include <vector>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <deque>

using namespace std;

class Square {
        int a;
public:
        int length() {return a;}
        int perimeter() {return a*4;}
        int area() {return a*a;}
        Square (int x):a(x) {cout << "Construct Square (" << a << ')' << endl;}
};

class Rectangle : public Square {
        int b;
public:
        Rectangle (int x, int y):Square(x),b(y) {cout << "Construct Rectangle (" << x << ", " << y << ')' << endl;}
        int width() {return b;}
        int perimeter() {return (length()+b)*2;}
        int area () {return length()*b;}
};

class Cuboid : public Rectangle {
        int c;
public:
        Cuboid (int x, int y, int z):Rectangle(x, y),c(z) {cout << "Construct Cuboid (" << x << ", " << y << ", " << z << ')' << endl;}
        int height() {return c;}
        int perimeter () {return (length()+width()+c)*4;}
        int area () {return (length()*c+length()*width()+width()*c)*2;}
        int volume() {return length()*width()*c;}
};


int main()
{
    int cases, l, w, h;
    cin >> cases;
    for(int i = 1; i <= cases; ++i)
    {
        cin >> l;
        Square squa(l);
        cout << "A Square length " << squa.length() << ", ";
        cout << "Perimeter " << squa.perimeter() << ", ";
        cout << "Area " << squa.area() << endl;
    }

    cout << "=========================" << endl;

    cin >> cases;
    for(int i = 1; i <= cases; ++i)
    {
        cin >> l >> w;
        Rectangle rect(l, w);
        cout << "A Rectangle length " << rect.length() << ", width " << rect.width() << ", ";
        cout << "Perimeter " << rect.perimeter() << ", ";
        cout << "Area " << rect.area() << endl;
    }

    cout << "=========================" << endl;

    cin >> cases;
    for(int i = 1; i <= cases; ++i)
    {
        cin >> l >> w >> h;
        Cuboid cubo(l, w, h);
        cout << "A Cuboid length " << cubo.length() << ", width " << cubo.width() << ", height " << cubo.height() << ", ";
        cout << "Perimeter " << cubo.perimeter() << ", ";
        cout << "Area " << cubo.area() << ", ";
        cout << "Volume " << cubo.volume() << endl;
    }

}

/**************************************************************
	Problem: 1678
	User: 201901060401
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1272 kb
****************************************************************/

