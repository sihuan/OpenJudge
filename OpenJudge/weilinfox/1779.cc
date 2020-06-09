#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

class Point {
public:
        double x, y;

        Point(double a=0, double b=0):x(a),y(b) {
                cout << "The Point ("<< fixed << setprecision(2) << x << ", " << fixed << setprecision(2) << y <<") is created!" << endl;
        }
        ~Point() {cout << "A Point ("<< fixed << setprecision(2) << x << ", " << fixed << setprecision(2) << y <<") is erased!" << endl;}
        Point (const Point& p) {
                x = p.x;
                y = p.y;
                cout << "A Point ("<< fixed << setprecision(2) << x << ", " << fixed << setprecision(2) << y <<") is copied!" << endl;
        }
        double getX() {return x;}
        double getY() {return y;}
};

class Graph {
public:
    int num;
    Point** points;
    Graph(const Point * p, int n) {
        points = new Point*[n];
        for (int i = 0; i < n; i++) points[i] = new Point;
        num = n;
        for (int i = 0; i < n; i++) {
            (*points[i]).x = p[i].x;
            (*points[i]).y = p[i].y;
        }
        cout << "A graph with " << num << " points is created!" << endl;
    }
    ~Graph() {
        for (int i = num-1; i >= 0; i--)
            delete points[i];
        cout << "A graph with " << num <<" points is erased!" << endl;
    }
    int numOfPoints () {return num;}
    Point getCentroid() {
        double a = 0, b = 0;
        for (int i = 0; i < num; i++) {a += (*points[i]).x; b += (*points[i]).y;}
        Point * p;
        p = new Point(a/num, b/num);
        return *p;
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
	User: 201901060401
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1272 kb
****************************************************************/

