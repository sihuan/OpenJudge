#include "bits/stdc++.h"
using namespace std;

class Shape
{
protected:
    int a;
public:
    Shape(int aa):a(aa){}
    virtual int area()=0;
};

class Square : public Shape
{
public:
    Square(int aaa):Shape(aaa){}
    int area()
    {
        return a*a;
    }
};

class Rectangle : public Shape
{
protected:
    int b;
public:
    Rectangle(int aaa,int bbb):Shape(aaa),b(bbb){}
    int area()
    {
        return a*b;
    }
};

class Cube : public Shape
{
public:
    Cube(int aaa):Shape(aaa){}
    int area()
    {
        return a*a*6;
    }
};


class Cuboid : public Shape
{
protected:
    int b,c;
public:
    Cuboid(int aaa,int bbb,int ccc):Shape(aaa),b(bbb),c(ccc){}
    int area()
    {
        return a*b*2+a*c*2+b*c*2;
    }
};


int main()
{
    int n, l, w, h;
    cin >> n;
    Shape *sp[100];
    string name;
    for(int i = 0; i < n; i++)
    {
        cin >> name;
        if(name == "SQR")
        {
            cin >> l;
            sp[i] = new Square(l);
        }
        if(name == "RCT")
        {
            cin >> l >> w;
            sp[i] = new Rectangle(l, w);
        }
        if(name == "CUB")
        {
            cin >> l;
            sp[i] = new Cube(l);
        }
        if(name == "CBD")
        {
            cin >> l >> w >> h;
            sp[i] = new Cuboid(l, w, h);
        }
    }
    for(int i = 0; i < n; i++)
        cout << sp[i]->area() << endl;
    for(int i = 0; i < n; i++)
        delete sp[i];
}

/**************************************************************
	Problem: 2096
	User: 201601160202
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1268 kb
****************************************************************/

