# 质心算法
Time Limit: 1 Sec  Memory Limit: 128 MB


## Description
在很多应用中，需要对某个目标进行定位。比如对于一个未知坐标的点A，假定已知A点与N个点相邻，且已知N个相邻点的坐标，则可取N个点的质心作为A点坐标的一个估计值。
所谓质心，就是指其横坐标、纵坐标分别为N个点的横坐标平均值、纵坐标平均值的点。即：假定N个点的坐标分别（x1,y1)，(x2,y2)，......，则质心的坐标为（(x1+x2+...)/N, (y1+y2+...)/N)。
现在需要你编写2个类：
1. Point类：包括一个点的横坐标和纵坐标，并提供适当的构造函数、析构函数和拷贝构造函数，以及getX()和getY()方法。
2. Graph类
（1）数据成员Point *points；表示与A点相邻的点的集合。
（2）数据成员：int numOfPoints；表示相邻点的个数。
（3）适当的构造函数、析构函数。
（4）Point getCentroid()方法：用于返回质心点。

注意：同一类的对象之间的赋值运算（=）不调用拷贝构造函数。


## Input
输入为多行，第一行M>0表示有M个测试用例。
每个测试用例包含多行。第一行N>0表示有N个点，之后是N个点的横坐标和纵坐标，每个点占一行。


## Output
见样例。


## Sample Input
```
1
5
0 0
1 1
2 2
3 3
4 4

```
## Sample Output
```
The Point (0.00, 0.00) is created!
The Point (0.00, 0.00) is created!
The Point (0.00, 0.00) is created!
The Point (0.00, 0.00) is created!
The Point (0.00, 0.00) is created!
The Point (0.00, 0.00) is created!
The Point (0.00, 0.00) is created!
The Point (1.00, 1.00) is created!
The Point (2.00, 2.00) is created!
The Point (3.00, 3.00) is created!
The Point (4.00, 4.00) is created!
The Point (0.00, 0.00) is created!
The Point (0.00, 0.00) is created!
The Point (0.00, 0.00) is created!
The Point (0.00, 0.00) is created!
The Point (0.00, 0.00) is created!
A graph with 5 points is created!
The Point (2.00, 2.00) is created!
A Point (2.00, 2.00) is copied!
A Point (2.00, 2.00) is erased!
The centroid is (2.00, 2.00).
A Point (4.00, 4.00) is erased!
A Point (3.00, 3.00) is erased!
A Point (2.00, 2.00) is erased!
A Point (1.00, 1.00) is erased!
A Point (0.00, 0.00) is erased!
A graph with 5 points is erased!
A Point (4.00, 4.00) is erased!
A Point (3.00, 3.00) is erased!
A Point (2.00, 2.00) is erased!
A Point (1.00, 1.00) is erased!
A Point (0.00, 0.00) is erased!
A Point (2.00, 2.00) is erased!

```

## HINT
 当使用对象作为函数返回值时，会产生一个临时对象，此时会调用拷贝构造函数。但是在g++编译器（也就是大家常用的code::blocks所用的编译器）中，当函数返回的对象给另一个对象进行赋值时，如果函数返回值是一个局部变量，则不会调用拷贝构造函数。所以，如果想在此程序中实现拷贝构造函数的调用，必须在getCentroid中返回一个使用new运算符创建的对象，而不是一个已经定义的局部对象。

## Append Code
### append.cc
```cppint main()
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
```
