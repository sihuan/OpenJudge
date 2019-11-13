#include <iostream>
#include <vector>

using namespace std;

class Point{
    friend ostream& operator <<(ostream& os,const Point& p){
        os<<p.x_<<" "<<p.y_;
        return os;
    }
public:
    Point() : x_(0),y_(0) {}
    Point(int x,int y) : x_(x),y_(y){}
private:
    int x_;
    int y_;
};
template<class T>
class Data{
public:
    Data<T>(T data) : data_(data){}
    void show() const {cout<<data_<<endl;}
private:
    T data_;
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
	User: 201601011420
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

