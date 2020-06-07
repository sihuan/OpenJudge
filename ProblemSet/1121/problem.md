# 平面上的点——Point类 (I)
Time Limit: 1 Sec  Memory Limit: 4 MB


## Description
在数学上，平面直角坐标系上的点用X轴和Y轴上的两个坐标值唯一确定。现在我们封装一个“Point类”来实现平面上的点的操作。
根据“append.cc”，完成Point类的构造方法和show()方法。
接口描述：
Point::show()方法：按输出格式输出Point对象。

## Input
输入多行，每行为一组坐标“x,y”，表示点的x坐标和y坐标，x和y的值都在double数据范围内。

## Output
输出为多行，每行为一个点，X坐标在前，Y坐标在后，Y坐标前面多输出一个空格。每个坐标的输出精度为最长16位。输出格式见sample。
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
Point : (0, 0)
```

## HINT
注意精度控制，C语言的输入输出被禁用。

## Append Code
### append.cc
```cppint main()
{
    char c;
    double a, b;
    Point q;
    while(std::cin>>a>>c>>b)
    {
        Point p(a, b);
        p.show();
    }
    q.show();
}
```
