#include <iostream>

using namespace std;

class Point

{

    double x_po,y_po;

    static int numOf2D;

public:

    Point() {numOf2D++;}

    Point(double a, double b):x_po(a),y_po(b) {numOf2D++;}

    void showPoint()

    {

        cout<< "2D Point ("<<x_po<<"," <<y_po<<")"<<endl;

    }

    double x()

    {

        return x_po;

    }

    double y()

    {

        return y_po;

    }

    double x(int a)

    {

        x_po = a;

        return x_po;

    }

    double y(int b)

    {

        y_po = b;

        return y_po;

    }

    static int showNumber()

    {

        return numOf2D;

    }

};

int Point::numOf2D(0);

class Point_3D:public Point

{

    double z_po;

    static int numberOf3D;

public:

    Point_3D() {numberOf3D++;}

    Point_3D(double a, double b ,double c):Point(a,b),z_po(c) {numberOf3D++;}

    double z(){return z_po;}

    double z(int c){z_po = c;return z_po;}

    Point_3D setPoint(double a, double b ,double c)

    {

        x(a);y(b);z(c);

        return *this;

    }

    void showPoint()

    {

        cout<<"3D Point ("<<x()<<","<<y()<<","<<z_po <<")"<<endl;

    }

   static int showNumber()

    {

       return numberOf3D;

    }

};

 int Point_3D::numberOf3D(0);

int main()
{
    cout<<"Invariable test output :"<<endl;
    Point_3D p3d;
    p3d.setPoint(-100, 0, 100);
    p3d.showPoint();
    p3d.x(0);
    p3d.y(100);
    cout<<"Point ("<<p3d.x()<<","<<p3d.y()<<","<<p3d.z()<<")"<<endl;
    cout<<"\nTest data output :"<<endl;
    int cases;
    cin>>cases;
    for(int i = 1; i <= cases; i++)
    {
        double x, y, z;
        int point_type;
        cin>>point_type;
        if(point_type == 2)
        {
            cin>>x>>y;
            Point p(x, y);
            p.showPoint();
        }
        if(point_type == 3)
        {
            cin>>x>>y>>z;
            Point_3D p(x, y, z);
            p.showPoint();
        }
    }
    cout<<"Number of 2D Points : "<<Point::showNumber() - Point_3D::showNumber()<<endl;
    cout<<"Number of 3D Points : "<<Point_3D::showNumber() - 1<<endl;
}

/**************************************************************
	Problem: 1393
	User: 201901060203
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1272 kb
****************************************************************/

