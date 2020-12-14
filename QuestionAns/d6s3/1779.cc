#include <iomanip>
#include <iostream>
using namespace std;

class Point {
private:
    double x_, y_;

public:
    Point(double x = 0.0, double y = 0.0)
        : x_(x)
        , y_(y)
    {
        cout << fixed << setprecision(2) << "The Point (" << x_ << ", " << y_ << ") is created!" << endl;
    }
    Point(const Point& p)
        : x_(p.x_)
        , y_(p.y_)
    {
        cout << fixed << setprecision(2) << "A Point (" << x_ << ", " << y_ << ") is copied!" << endl;
    }
    ~Point()
    {
        cout << fixed << setprecision(2) << "A Point (" << x_ << ", " << y_ << ") is erased!" << endl;
    }
    double getX() const
    {
        return x_;
    }
    double getY() const
    {
        return y_;
    }
};

class Graph {
private:
    Point* pts_;
    int nop_;

public:
    Graph(Point* p, int n)
        : pts_(new Point[n])
        , nop_(n)
    {
        for (int i = 0; i < n; i++)
            pts_[i] = p[i];
        cout << "A graph with " << nop_ << " points is created!" << endl;
    }
    ~Graph()
    {
        delete[] pts_;
        cout << "A graph with " << nop_ << " points is erased!" << endl;
    }
    Point getCentroid()
    {
        double xp = 0.0, yp = 0.0;
        for (int i = 0; i < nop_; i++) {
            xp += pts_[i].getX();
            yp += pts_[i].getY();
        }
        xp /= nop_;
        yp /= nop_;
        return *(new Point(xp, yp));
    }
};
int main()
{
    int cases,num;
    double x, y;
    Point centroid;
    cin>>cases;
    for (int i = 0; i < cases; i++)
    {
        cin>>num;
        Point points[num];
        for (int j = 0; j < num; j++)
        {
            cin>>x>>y;
            points[j] = *(new Point(x, y));
        }
        Graph graph(points, num);
        centroid = graph.getCentroid();
        cout<<setprecision(2)<<fixed<<"The centroid is ("<<centroid.getX()<<", "<<centroid.getY()<<")."<<endl;
    }
    return 0;
}
/**************************************************************
	Problem: 1779
	User: 201901060610
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1272 kb
****************************************************************/

