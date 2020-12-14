#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

class Shape{
public:
    Shape(int l) : l_(l){}
    virtual int area() const = 0;
protected:
    int l_;
};
class Square : public Shape{
public:
    Square(int l) : Shape(l) {}
    int area() const {return l_*l_;}
};
class Cube : public Shape{
public:
    Cube(int l) : Shape(l) {}
    int area() const {return l_*l_*6;}
};
class Rectangle : public Shape{
public:
    Rectangle(int l,int w) : Shape(l),w_(w){}
    int area() const {return l_*w_;}
private:
    int w_;
};
class Cuboid : public Shape{
public:
    Cuboid(int l,int w,int h) : Shape(l),w_(w),h_(h){}
    int area() const {return 2*(l_*w_+l_*h_+w_*h_);}
private:
    int w_;
    int h_;
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
	User: 201601011420
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1268 kb
****************************************************************/

