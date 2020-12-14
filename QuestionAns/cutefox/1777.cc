#include <iostream>
 
using namespace std;
 
class Point {
private:
    int x, y;
public:
    Point(int x = 0, int y = 0) : x(x), y(y) {
        cout << "A point ("<<x<<", "<<y<<") is created!" << endl;
    }
    Point(const Point &another) {
        x = another.x, y = another.y;
        cout << "A point ("<<x<<", "<<y<<") is copied!" << endl;
    }
    ~Point() {
        cout << "A point ("<<x<<", "<<y<<") is erased!" << endl;
    }
    int getX() { return x; }
    int getY() { return y; }
};
 
class Rectangle {
private:
    Point leftTop, rightBottom;
public:
    Rectangle(int x1, int y1, int x2, int y2) : leftTop(x1, y1), rightBottom(x2, y2) {
        cout << "A rectangle ("<<x1<<", "<<y1<<") to ("<<x2<<", "<<y2<<") is created!" << endl;
    }
    ~Rectangle() {
        int x1 = leftTop.getX();
        int y1 = leftTop.getY();
        int x2 = rightBottom.getX();
        int y2 = rightBottom.getY();
        cout << "A rectangle ("<<x1<<", "<<y1<<") to ("<<x2<<", "<<y2<<") is erased!" << endl;
    }
    Point &getLeftTop() {
        Point &temp = leftTop;
        return temp;
    }
    Point getRightBottome() {
        return rightBottom;
    }
    int getArea() {
        int x1 = leftTop.getX();
        int y1 = leftTop.getY();
        int x2 = rightBottom.getX();
        int y2 = rightBottom.getY();
        return (x2 - x1) * (y1 - y2);
    }
};

/*————————————————
版权声明：本文为CSDN博主「hao_zong_yin」的原创文章，遵循 CC 4.0 BY-SA 版权协议，转载请附上原文出处链接及本声明。
原文链接：https://blog.csdn.net/hao_zong_yin/article/details/72811414*/
int main()
{
    int cases;
    int x1, y1, x2, y2;

    cin>>cases;
    for (int i = 0; i < cases; i++)
    {
        cin>>x1>>y1>>x2>>y2;
        Rectangle rect(x1,y1,x2,y2);
        cout<<"Area: "<<rect.getArea()<<endl;
        cout<<"Left top is ("<<rect.getLeftTop().getX()<<", "<<rect.getLeftTop().getY()<<")"<<endl;
        cout<<"Right bottom is ("<<rect.getRightBottome().getX()<<", "<<rect.getRightBottome().getY()<<")"<<endl;
    }
    return 0;
}
/**************************************************************
	Problem: 1777
	User: 201901060203
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1272 kb
****************************************************************/

