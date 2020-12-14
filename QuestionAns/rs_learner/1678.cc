#include<bits/stdc++.h>
using namespace std;
class Square
{
protected:
    int a;
public:
    Square(int _a):a(_a)
    {
        cout<<"Construct Square ("<<a<<")"<<endl;
    }
    int length(){return a;}
    int perimeter(){return 4*a;}
    int area(){return a*a;}
};
class Rectangle:public Square
{
protected:
    int b;
public:
    Rectangle(int _a,int _b):Square(_a),b(_b)
    {
        cout<<"Construct Rectangle ("<<a<<", "<<b<<")"<<endl;
    }
    int length(){return a;}
    int width(){return b;}
    int perimeter(){return 2*(b+a);}
    int area(){return a*b;}
};
class Cuboid:public Rectangle
{
protected:
    int c;
public:
    Cuboid(int _a,int _b,int _c):Rectangle(_a,_b),c(_c)
    {
        cout<<"Construct Cuboid ("<<a<<", "<<b<<", "<<c<<")"<<endl;
    }
    int length(){return a;}
    int width(){return b;}
    int height(){return c;}
    int perimeter(){return (4*c+4*a+4*b);}
    int area(){return 2*a*b+2*a*c+2*b*c;}
    int volume(){return a*b*c;}
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
	User: 201801020908
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1272 kb
****************************************************************/

