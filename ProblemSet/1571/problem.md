# 立体空间中的点（I）
Time Limit: 1 Sec  Memory Limit: 128 MB


## Description
设计一个平面上的点Point类和3维的点Point_3D类，满足Point_3D类继承自Point类，用于读取输入的数据，输出所构造的两种点的坐标。

设计Point类需支持一下操作：
Point::Point()无参构造。
Point::Point(double,double)两个坐标参数构造。
Point::showPoint()按格式输出Point对象


设计Point_3D类需支持一下操作：

Point_3D::Point_3D()无参构造。
Point_3D::Point_3D(double,double,double)三个坐标参数构造。
Point_3D::showPoint()按格式输出Point_3D对象。

-----------------------------------------------------------------------------

你设计Point类和Point_3D类，使得main()函数能够正确运行。

函数调用格式见append.cc。

append.cc中已给出main()函数。


## Input
输入的第一个整数n，表示有n组测试数据，后面的输入每行为一组测试数据。每组测试数据的第一行是一个整数m，m有两种取值：2、3；m为2时，后面有两个浮点数x、y，表示一个平面上的点的坐标(x,y)；m为3时后面有3个浮点数x、y、z，表示一个3维的点的坐标(x,y,z)。


## Output
每组测试数据对应一行输出。
若输入为平面上的点，则输出：“2D Point (x,y)”，x和y为输入的坐标值。
若输入为3维的点，则输出：“3D Point (x,y,y)”，x、y和z为输入的坐标值。


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
3D Point (1,2,3)
3D Point (0,0,0)
2D Point (-1,1)
3D Point (-1,-1,-1)
2D Point (0,0)

```

## HINT


## Append Code
### append.cc
```cppint main()
{
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
}

```
