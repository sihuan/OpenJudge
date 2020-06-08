#include <iostream>

using namespace std;
class Point
{
private:
    double x,y;
    static int Counter1;
    static int sum1;
public:
    Point()
    {
        Counter1++;
        sum1++;
    }
    Point(double a,double b)
    {
        Counter1++;
        sum1++;
    }
    Point(const Point&a)
    {
        sum1++;
        Counter1++;
    }
    ~Point()
    {
        Counter1--;
    }
    static void showCounter()
    {
        cout<<"Current : "<<Counter1<<" points."<<endl;
    }
    static void showSum()
    {
        cout<<"In total : "<<sum1<<" points."<<endl;
    }
};
class Line
{
private:
    Point a,b;
    static int Counter2;
    static int sum2;
public:
    Line()
    {
        Counter2++;
        sum2++;
    }
    Line(Line& c)
    {
        sum2++;
        Counter2++;
    }
    Line(Point &x,Point &y)
    {
        Counter2++;
        sum2++;
        //a.sum111();
    }
    ~Line()
    {
        Counter2--;
    }
    static void showCounter()
    {
        cout<<"Current : "<<Counter2<<" lines."<<endl;
    }
    static void showSum()
    {
        cout<<"In total : "<<sum2<<" lines."<<endl;
    }
    void readLine()
    {
        char s1,s2;
        double a1,b1,c,d;
        std::cin >> a1 >> s1 >> b1 >> c >> s2 >> d;
    }
};
int Point::Counter1;
int Point::sum1=0;
int Line::Counter2=0;
int Line::sum2=0;

int main()
{
    int num, i;
    Point p(1, -2), q(2, -1), t;
    t.showCounter();
    t.showSum();
    std::cin>>num;
    Line line[num + 1];
    for(i = 1; i <= num; i++)
    {
        Line *l1, l2;
        l1->showCounter();
        l1->showSum();
        l1 = new Line(p, q);
        line[i].readLine();
        p.showCounter();
        p.showSum();
        delete l1;
        l2.showCounter();
        l2.showSum();
        q.showCounter();
        q.showSum();
    }
    Line l1(p, q), l2(p,t), l3(q,t), l4(l1);
    Line::showCounter();
    Line::showSum();
    Point::showCounter();
    Point::showSum();
    Line *l = new Line[num];
    l4.showCounter();
    l4.showSum();
    delete[] l;
    t.showCounter();
    t.showSum();
}

/**************************************************************
	Problem: 1333
	User: 201901060203
	Language: C++
	Result: Accepted
	Time:24 ms
	Memory:1272 kb
****************************************************************/

