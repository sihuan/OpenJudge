#include"bits/stdc++.h"
using namespace std;

class Square
{
    private:
        int l;
    public:
        Square(int ll):l(ll){cout<<"Construct Square ("<<ll<<")"<<endl;}
        int length(){return l;}
        int perimeter(){return l*4;}
        int area(){return l*l;}
};

class Rectangle:public Square
{
    private:
        int l2;
    public:
        Rectangle(int ll1,int ll2):Square(ll1),l2(ll2){cout<<"Construct Rectangle ("<<ll1<<", "<<ll2<<")"<<endl;}
        int length(){return Square::length();}
        int width(){return l2;}
        int perimeter(){return l2*2+Square::length()*2;}
        int area(){return Square::length()*l2;}
};

class Cuboid:public Rectangle
{
    private:
        int l3;
    public:
        Cuboid(int ll1,int ll2,int ll3):Rectangle(ll1,ll2),l3(ll3){cout<<"Construct Cuboid ("<<ll1<<", "<<ll2<<", "<<ll3<<")"<<endl;}
        int length(){return Square::length();}
        int width(){return Rectangle::width();}
        int height(){return l3;}
        int perimeter(){return l3*4+Square::length()*4+Rectangle::width()*4;}
        int area(){return Square::length()*Rectangle::width()*2+Square::length()*l3*2+Rectangle::width()*l3*2;}
        int volume(){return Square::length()*Rectangle::width()*l3;}
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
	User: 201601160202
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1272 kb
****************************************************************/

