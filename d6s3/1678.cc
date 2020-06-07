#include <iostream>
using namespace std;

class Square {
protected:
    int x_;

public:
    Square(int l)
        : x_(l)
    {
        cout << "Construct Square (" << x_ << ")" << endl;
    }
    int length()
    {
        return x_;
    }
    int perimeter()
    {
        return 4 * x_;
    }
    int area()
    {
        return x_ * x_;
    }
};

class Rectangle : public Square {
protected:
    int y_;

public:
    Rectangle(int x, int y)
        : Square(x)
        , y_(y)
    {
        cout << "Construct Rectangle (" << x_ << ", " << y_ << ")" << endl;
    }
    int length()
    {
        return x_;
    }
    int width()
    {
        return y_;
    }
    int perimeter()
    {
        return (x_ + y_) * 2;
    }
    int area()
    {
        return x_ * y_;
    }
};

class Cuboid : public Rectangle {
protected:
    int z_;

public:
    Cuboid(int x, int y, int z)
        : Rectangle(x, y)
        , z_(z)
    {
        cout << "Construct Cuboid (" << x_ << ", " << y_ << ", " << z_ << ")" << endl;
    }
    int length()
    {
        return x_;
    }
    int width()
    {
        return y_;
    }
    int height()
    {
        return z_;
    }
    int perimeter()
    {
        return (x_ + y_ + z_) * 4;
    }
    int area()
    {
        return (x_ * y_) * 2 + (x_ * z_) * 2 + (y_ * z_) * 2;
    }
    int volume()
    {
        return x_ * y_ * z_;
    }
};
int main()
{
    int cases, l, w, h;
    cin >> cases;
    for(int i = 1; i <= cases; ++i)
    {
        cin >> l;
        Square squa(l);
        cout << "A Square length " << squa.length() << ", ";
        cout << "Perimeter " << squa.perimeter() << ", ";
        cout << "Area " << squa.area() << endl;
    }

    cout << "=========================" << endl;

    cin >> cases;
    for(int i = 1; i <= cases; ++i)
    {
        cin >> l >> w;
        Rectangle rect(l, w);
        cout << "A Rectangle length " << rect.length() << ", width " << rect.width() << ", ";
        cout << "Perimeter " << rect.perimeter() << ", ";
        cout << "Area " << rect.area() << endl;
    }

    cout << "=========================" << endl;

    cin >> cases;
    for(int i = 1; i <= cases; ++i)
    {
        cin >> l >> w >> h;
        Cuboid cubo(l, w, h);
        cout << "A Cuboid length " << cubo.length() << ", width " << cubo.width() << ", height " << cubo.height() << ", ";
        cout << "Perimeter " << cubo.perimeter() << ", ";
        cout << "Area " << cubo.area() << ", ";
        cout << "Volume " << cubo.volume() << endl;
    }

}

/**************************************************************
	Problem: 1678
	User: 201901060610
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1272 kb
****************************************************************/

