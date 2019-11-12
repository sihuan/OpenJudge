#include <bits/stdc++.h>

using namespace std;
class Point
{
    int x,y;
public:
    Point():x(0),y(0){}
    Point(int xx,int yy):x(xx),y(yy){}
    friend ostream & operator <<(ostream & os,Point &p)
    {
        os<<p.x<<" "<<p.y<<endl;
        return os;
    }
};

template<class T>
class Data
{
    T data;
public:
    Data(T x):data(x){}
    void show()
    {
        cout << data << endl;
    }
};

int main()
{
    string n;
    int x, y, d;
    char c;
    cin>>n;
    cin>>x>>y>>d;
    cin>>c;
    Point p(x, y);
    Data<char> aChar(c);
    Data<int> anInt(d);
    Data<Point> aPoint(p);
    Data<string> aString(n);
    aChar.show();
    anInt.show();
    aString.show();
    aPoint.show();
    return 0;
}
/**************************************************************
	Problem: 1825
	User: 201601160202
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

