#include <iostream>
using namespace std;

class Point {
private:
    int x_, y_;

public:
    Point()
        : x_(0)
        , y_(0)
    {
    }
    Point(int x, int y)
        : x_(x)
        , y_(y)
    {
    }
    friend ostream& operator<<(ostream& out, Point& p)
    {
        out << p.x_ << " " << p.y_;
        return out;
    }
};

template <class T>
class Data {
private:
    T dt_;

public:
    Data(T data)
        : dt_(data)
    {
    }
    void show()
    {
        cout << dt_ << endl;
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
	User: 201901060610
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

