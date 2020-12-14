#include <iostream>
#include <iomanip>
    static int sum=0;
using namespace std;
class Point
{
   private:
    double xx;
    double yy;

    int id;
   public:
    Point ():xx(0),yy(0){sum++; id = sum;}
    Point (double a):xx(a),yy(a){sum++; id = sum;}
    Point (double a, double b):xx(a),yy(b){sum++; id = sum;}
    Point(const Point &p){xx=p.xx;yy=p.yy;sum++; id = sum;}
    ~Point () {}
    Point & setPoint(double a, double b){xx=a;yy=b; return *this;}
    double x() const  {return xx;}
    double y() const  {return yy;}
    double x(double a) {xx=a; return xx;}
    double y(double b) {yy=b; return yy;}
    void show()const{ cout<<setprecision(16) << "Point[" << id << "] : (" <<  xx << ", " << yy << ")" << endl;}
    bool isEqual(Point &p) const{if(xx==p.xx&&yy==p.yy) return true;else return false;}
    Point &copy(const Point &p) {xx=p.xx;yy=p.yy;return *this;}
    Point &inverse(){double xxx=xx;xx=yy;yy=xxx;return *this;}
    Point &inverse(Point &p){xx=p.yy;yy=p.xx;return *this;}

    static void showSumOfPoint(){cout << setprecision(16) << "In total : " << sum << " points."<< endl; }
};


void ShowPoint(const Point &p)
{
    cout << setprecision(16)<<"Point : ("<<p.x()<<", "<<p.y()<<")"<<endl;
}

void ShowPoint(double x, double y)
{
    cout << setprecision(16)<<"Point : ("<< x <<", "<<y<<")"<<endl;
}

void ShowPoint(Point &p, double x, double y)
{
    cout << setprecision(16)<<"Point : ("<<p.x(x)<<", "<< p.x(y)<<")"<<endl;
}


int main()
{
    int l(0);
    char c;
    double a, b;
    Point p, q, pt[60];
    while(std::cin>>a>>c>>b)
    {
        if(a == b)
            p.copy(pt[l].setPoint(a, b));
        if(a > b)
            p.copy(pt[l].setPoint(a, b).inverse());
        if(a < b)
            p.inverse(pt[l].setPoint(a, b));
        if(a < 0)
            q.copy(p).inverse();
        if(b < 0)
            q.inverse(p).copy(pt[l]);
        pt[l++].show();
        p.show();
    }
    q.show();
    cout<<"==========gorgeous separator=========="<<endl;
    double x(0), y(0);
    for(int i = 0; i < l; i++)
        x += pt[i].x(), y -= pt[i].y();
    pt[l].x(y), pt[l].y(x);
    q.copy(pt[l]).show();
    for(int i = 0; i <= l; i++)
        pt[i].show();
    cout<<"==========gorgeous separator=========="<<endl;
    const Point const_point(3, 3);
    const_point.show();
    for(int i = 0; i <= l; i++)
    {
        if(const_point.isEqual(pt[i]))
        {
            ShowPoint(const_point);
            ShowPoint(const_point.x(), const_point.y());
            ShowPoint(Point(const_point.x(), const_point.y()));
        }
    }
    const_point.showSumOfPoint();
}

/**************************************************************
	Problem: 1126
	User: 201601160202
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1272 kb
****************************************************************/

