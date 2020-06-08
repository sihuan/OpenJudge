
#include <iostream>
using namespace std;
 
class Square
{
public:
    int l;
    Square(int l=0):l(l){cout<<"Construct Square ("<<l<<")"<<endl;}
    int length(){return l;}
    int perimeter(){return 4*l;}
    int area(){return l*l;}
};
class Rectangle:public Square
{
public:
    int w;
    Rectangle(int _l,int _w):Square(_l)
    {
        w = _w;
        cout<<"Construct Rectangle ("<<l<<", "<<w<<")"<<endl;
    }
    int width(){return w;}
    int perimeter(){return 2*(l+w);}
    int area(){return l*w;}
};
class Cuboid:public Rectangle
{
public:
    int h;
 
    Cuboid(int l,int w,int h):Rectangle(l,w),h(h){cout<<"Construct Cuboid ("<<l<<", "<<w<<", "<<h<<")"<<endl;}
    int perimeter(){return 4*(l+w+h);}
    int height(){return h;}
    int area() {return 2*(l*w+w*h+h*l);}
    int volume(){return l*w*h;}
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
	User: 201901060203
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1272 kb
****************************************************************/

