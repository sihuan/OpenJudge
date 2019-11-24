#include<iostream>
using namespace std;
class Point
{
    int x,y;
public:
    Point(){x=0;y=0;}
    Point(int _x=0,int _y=0):x(_x),y(_y){}
    ~Point(){}
    friend ostream &operator<<(ostream &os,const Point &p);
};
ostream &operator<<(ostream &os,const Point &p)
{
    os<<p.x<<" "<<p.y;
}
template<class T>
class Data
{
private:
    T data;
public:
    Data(T _data):data(_data){}
    ~Data(){}
    void show()
    {
        cout<<data<<endl;
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
	User: 201801020908
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

