#include<iostream> 
#include<iomanip> 
using namespace std; 
class Point{ 
private: 
  double m,n; 
  int d; 
  static int sum; 
public: 
  double x()const{return m;} 
  double y()const{return n;} 
  double x(double a){m=a;return m;} 
  double y(double b){n=b;return n;} 
  double getX(){return m;} 
  double getY(){return n;} 
  double setX(double a){return m=a;} 
  double setY(double b){return n=b;} 
  Point & setPoint(double a,double b){m=a;n=b;return *this;} 
  Point(double a=0){m=a;n=a;sum++;d=sum;} 
  Point(double a,double b){m=a;n=b;sum++;d=sum;} 
  bool isEqual(Point &p)const{if(p.m==m&&p.n==n)return true;else return false;} 
  Point& copy(Point &p){m=p.m;n=p.n;return *this;} 
  Point& inverse(){double tmp;tmp=m;m=n;n=tmp;return *this;} 
  Point& inverse(Point &p){m=p.n;n=p.m;return *this;} 
  void show()const{cout<<setprecision(16)<<"Point["<<d<<"] : ("<<m<<", "<<n<<")"<<endl;} 
  static void showSumOfPoint(){cout<<setprecision(16)<<"In total : "<<sum<<" points."<<endl;} 
}; 
int Point::sum=0; 
void ShowPoint(const Point &p) 
{ 
  cout<<std::setprecision(16)<<"Point : ("<<p.x()<<", "<<p.y()<<")"<<endl; 
} 
   
void ShowPoint(double x, double y) 
{ 
  cout<<std::setprecision(16)<<"Point : ("<<x<<", "<<y<<")"<<endl; 
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
	User: 201901061011
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1272 kb
****************************************************************/

