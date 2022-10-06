#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>

using namespace std;
class Square
{
public:
    Square(int le)
    {
        lenth=le;
        cout << "Construct Square ("<<lenth<<")"<<endl;
    }
    int length()
    {
        return lenth;
    }
    int perimeter()
    {
        return 4*lenth;
    }
    int area()
    {
        return lenth*lenth;
    }
protected:
    int lenth;
};
class Rectangle:public Square
{
public:
    Rectangle(int le,int w):Square(le)
    {
        wid=w;
        cout<<"Construct Rectangle ("<<lenth<<", "<<wid<<")"<<endl;
    }
    int length()
    {
        return lenth;
    }
    int width()
    {
        return wid;
    }
    int perimeter()
    {
        return 2*(lenth+wid);
    }
    int area()
    {
        return lenth*wid;
    }
protected:
    int wid;
};
class Cuboid:public Rectangle
{
public:
    Cuboid(int l,int w,int h):Rectangle(l,w)
    {
        high=h;
        cout<<"Construct Cuboid ("<<l<<", "<<w<<", "<<h<<")"<<endl;
    }
    int length()
    {
        return lenth;
    }
    int width()
    {
        return wid;
    }
    int height()
    {
        return high;
    }
    int perimeter()
    {
        return 4*(lenth+wid+high);
    }
    int area()
    {
        return lenth*wid*2+lenth*high*2+wid*high*2;
    }
    int volume()
    {
        return lenth*wid*high;
    }
private:
    int high;
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
	User: 202001060117
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1272 kb
****************************************************************/

