# 平面上的点——Point类 (V)
Time Limit: 1 Sec  Memory Limit: 4 MB


## Description
在数学上，平面直角坐标系上的点用X轴和Y轴上的两个坐标值唯一确定。现在我们封装一个“Point类”来实现平面上的点的操作。

根据“append.cc”，完成Point类的构造方法和接口描述中的方法。

接口描述：
showPoint()函数：按输出格式输出Point对象。
Point::show()方法：按输出格式输出Point对象。
Point::showSumOfPoint()方法：按格式输出程序运行至当前存在过的Point对象总数。
Point::x()方法：取x坐标。
Point::y()方法：取y坐标。
Point::x(double)方法：传参数设置x坐标并返回。
Point::y(double)方法：传参数设置y坐标并返回。
Point::getX()方法：取x坐标。
Point::getY()方法：取y坐标。
Point::setX()方法：传参数设置x坐标并返回。
Point::setY()方法：传参数设置y坐标并返回。
Point::setPoint(double,double)方法：设置Point对象的x坐标（第一个参数）和y坐标（第二个参数）并返回本对象

## Input
输入多行，每行为一组坐标“x,y”，表示点的x坐标和y坐标，x和y的值都在double数据范围内。

## Output
用ShowPoint()函数来输出（通过参数传入的）Point对象的值或坐标值：X坐标在前，Y坐标在后，Y坐标前面多输出一个空格。每个坐标的输出精度为最长16位。
对每个Point对象，调用show()方法输出其值，输出格式与ShowPoint()函数略有不同：“Point[i] :”，i表示这是程序运行过程中第i个被创建的Point对象。
调用showSumOfPoint()输出Point对象的计数统计，输出格式见sample。

C语言的输入输出被禁用。

## Sample Input
```
1,2
3,3
2,1
```
## Sample Output
```
Point : (1, 2)
Point : (3, 3)
Point : (2, 1)
Point : (1, 1)
Point : (4, -3)
==========gorgeous separator==========
Point[1] : (1, 0)
Point[2] : (3, 3)
Point[3] : (0, 0)
Point[4] : (4, -3)
Point[64] : (1, 0)
Point[64] : (1, 0)
==========gorgeous separator==========
In total : 66 points.
```

## HINT
传递和返回引用是不构造新对象的。给函数正确的返回值。

## Append Code
### append.cc
```cppvoid ShowPoint(Point p)
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

```
