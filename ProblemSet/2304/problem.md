# 运算符重载：点之间的距离
Time Limit: 1 Sec  Memory Limit: 128 MB


## Description
定义Point类，有2个double类型的属性表示点的横坐标和纵坐标。重载其减法运算符，用于计算两个点之间的距离。


## Input
输入一系列点的坐标，每个点的坐标占一行。


## Output
见样例。


## Sample Input
```
20 20
30 30
40 40
50 50
```
## Sample Output
```
14.1421
28.2843
42.4264
56.5685


```

## HINT


## Append Code
### append.cc
```cppint main()
{
    Point p1(10,10);
    double x, y;
    while(cin>>x>>y)
    {
        Point p2(x, y);
        cout<<p2 - p1<<endl;
    }
    return 0;
}
```
