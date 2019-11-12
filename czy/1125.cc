#include<iostream>
#include<iomanip>
using namespace std;
    static int sum=0;
class Point
{
   private:
    double xx;
    double yy;
    int id;
   public:
    Point ():xx(0),yy(0){sum++; id = sum;}
    Point (double a){xx=a,yy=a,sum++; id = sum;}
    Point (double a, double b):xx(a),yy(b){sum++; id = sum;}
    Point(const Point &p){xx=p.xx;yy=p.yy;sum++; id = sum;}
    ~Point () {}
    double getX(){return xx;}
    double getY(){return yy;}
    double setX(double a){xx=a; return xx;}
    double setY(double b){yy=b; return yy;}
    Point & setPoint(double a, double b){xx=a;yy=b; return *this;}
    double x()   {return xx;}
    double y()   {return yy;}
    double x(double a) {xx=a; return xx;}
    double y(double b) {yy=b; return yy;}
    void show(){
    cout << setprecision(16)<< "Point["<< id <<"] : (" << xx <<", " << yy << ")" <<endl;
    }
    static void showSumOfPoint(){cout << setprecision(16) << "In total : " << sum << " points."<< endl; }
};

void ShowPoint(Point p)
{
    cout<<std::setprecision(16)<<"Point : ("<<p.x()<<", "<<p.y()<<")"<<endl;
}

void ShowPoint(double x, double y)
{
    Point p(x, y);
    cout<<std::setprecision(16)<<"Point : ("<<p.x()<<", "<<p.y()<<")"<<endl;
}

void ShowPoint(Point &p, double x, double y)
{
    cout<<std::setprecision(16)<<"Point : ("<<p.x(x)<<", "<<p.x(y)<<")"<<endl;
}

int main()
{
    int l(0);
    char c;
    double a, b;
    Point pt[60];
    while(std::cin>>a>>c>>b)
    {
        if(a == b)
            ShowPoint(pt[l].setPoint(a, b));
        if(a > b)
            ShowPoint(a, b);
        if(a < b)
            ShowPoint(pt[l], a, b);
        l++;
    }
    Point p(a), q(b);
    ShowPoint(q);
    double x(0), y(0);
    for(int i = 0; i < l; i++)
        x += pt[i].getX(), y -= pt[i].getY();
    ShowPoint(pt[l].setX(x), pt[l].setY(y));
    cout<<"==========gorgeous separator=========="<<endl;
    for(int i = 0; i <= l; i++)
        pt[i].show();
    q.setPoint(q.x() - p.x() + a, q.y() - p.y() + b).show();
    q.show();
    cout<<"==========gorgeous separator=========="<<endl;
    p.showSumOfPoint();
}

/**************************************************************
	Problem: 1125
	User: 201601160202
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1272 kb
****************************************************************/

