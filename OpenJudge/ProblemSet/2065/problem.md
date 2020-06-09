# 点之间的距离
Time Limit: 1 Sec  Memory Limit: 128 MB


## Description
定义Point类，有2个double类型的属性表示点的横坐标和纵坐标。重载其减法运算符，用于计算两个点之间的距离。
定义PointArray类，是由Point类的对象组成的数组，有如下成员函数：
1. void append(const Point&)：将一个点加入到数组中。
2. double getMaxDis()：计算数组中距离最远的一对点之间的距离。


## Input
输入一系列点的坐标，每个点的坐标占一行。


## Output
见样例。


## Sample Input
```
1 1
2 2
3 3
4 4
5 5

```
## Sample Output
```
14.1421
5.65685

```

## HINT
PointArray类中要用Point类重载的减法运算符。


## Append Code
### append.cc
```cppint main()
{
    Point p, p1(10, 10), p2(20, 20);
    PointArray pArr;
    double x, y;
    while(cin>>x>>y)
    {
        p.set(x, y);
        pArr.append(p);
    }
    cout<<p2 - p1<<endl;
    cout<<pArr.getMaxDis()<<endl;
    return 0;
}
```
