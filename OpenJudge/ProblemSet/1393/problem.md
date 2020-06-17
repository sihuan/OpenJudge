# 立体空间中的点（II）
Time Limit: 1 Sec  Memory Limit: 128 MB


## Description
设计一个平面上的点Point类和3维的点Point_3D类，满足Point_3D类继承自Point类，用于读取输入的数据，输出所构造的两种点的坐标。并统计输入的两种点的个数。

设计Point类需支持一下操作：
Point::Point()无参构造。
Point::Point(double,double)两个坐标参数构造。
Point::x()返回x坐标
Point::y()返回y坐标
Point::x(int)修改x坐标并返回
Point::y(int)修改y坐标并返回
Point::showPoint()按格式输出Point对象
Point::showNumber()返回Point对象总数的静态函数

设计Point_3D类需支持一下操作：

Point_3D::Point_3D()无参构造。
Point_3D::Point_3D(double,double,double)三个坐标参数构造。
Point_3D::z()返回z坐标。
Point_3D::z(int)修改z坐标并返回。
Point_3D::showPoint()按格式输出Point_3D对象。
Point_3D::setPoint(double,double,double)根据三个坐标参数修改Point_3D对象的坐标。
Point_3D::showNumber()返回Point_3D对象总数的静态函数。

-----------------------------------------------------------------------------

你设计Point类和Point_3D类，使得main()函数能够正确运行。

函数调用格式见append.cc。

append.cc中已给出main()函数。


## Input
输入的第一个整数n，表示有n组测试数据，后面的输入每行为一组测试数据。每组测试数据的第一行是一个整数m，m有两种取值：2、3；m为2时，后面有两个浮点数x、y，表示一个平面上的点的坐标(x,y)；m为3时后面有3个浮点数x、y、z，表示一个3维的点的坐标(x,y,z)。



## Output
开始部分为由main()函数产生的固定输出，用于测试对象的某些方法的调用情况。输出“Test data output :”之后为测试数据对应的输出：

每组测试数据对应一行输出。
若输入为平面上的点，则输出：“2D Point (x,y)”，x和y为输入的坐标值。
若输入为3维的点，则输出：“3D Point (x,y,y)”，x、y和z为输入的坐标值。
最后，分别输出总共输入的平面上的点数和3维的点数。



## Sample Input
```
5
3 1 2 3
3 0 0 0
2 -1 1
3 -1 -1 -1
2 0 0
```
## Sample Output
```
Invariable test output :
3D Point (-100,0,100)
Point (0,100,100)

Test data output :
3D Point (1,2,3)
3D Point (0,0,0)
2D Point (-1,1)
3D Point (-1,-1,-1)
2D Point (0,0)
Number of 2D Points : 2
Number of 3D Points : 3

```

## HINT


## Append Code
### append.cc
```cpp
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

```
