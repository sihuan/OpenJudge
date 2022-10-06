#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <cstdio>
#include <functional>

using namespace std;

class Point
{
public:
    Point(int _x=0,int _y=0)
    {
        x=_x;
        y=_y;
    }
    friend ostream& operator << (ostream& os,Point &p)
    {
        os<<p.x<<" "<<p.y;
        return os;
    }
private:
    int x,y;
};

template<class T>
class Data
{
public:
    Data(T _data)
    {
        data=_data;
    }
    void show()
    {
        cout<<data<<endl;
    }
private:
    T data;
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
	User: 202001060117
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

