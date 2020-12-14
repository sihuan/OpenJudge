#include <iostream>

using namespace std;

class Square{
protected:
    int l_;
public:
    Square(int l) : l_(l){cout<<"Construct Square ("<<l_<<")"<<endl;}
    int length() const {return l_;}
    int perimeter() const {return l_*4;}
    int area() const {return l_*l_;}
};
class Rectangle:public Square{
public:
    Rectangle(int l,int w) : Square(l),w_(w) {cout<<"Construct Rectangle ("<<Square::l_<<", "<<w_<<")"<<endl;}
    int width() const {return w_;}
    int perimeter() const {return (Square::l_+w_)*2;}
    int area() const {return Square::l_*w_;}
protected:
    int w_;
};
class Cuboid : public Rectangle{
public:
    Cuboid(int l,int w,int h) : Rectangle(l,w),h_(h){cout<<"Construct Cuboid ("<<Square::l_<<", "<<Rectangle::w_<<", "<<h_<<")"<<endl;}
    int height() const {return h_;}
    int perimeter() const {return h_*4+2*Rectangle::perimeter();}
    int area() const {return 2*(Rectangle::area()+Square::l_*h_+Rectangle::w_*h_);}
    int volume() const {return Rectangle::area()*h_;}
private:
    int h_;
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
	User: 201601011420
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1272 kb
****************************************************************/

