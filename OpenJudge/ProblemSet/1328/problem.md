# 平面上的点和线——Point类、Line类 (II)
Time Limit: 1 Sec  Memory Limit: 128 MB


## Description
在数学上，平面直角坐标系上的点用X轴和Y轴上的两个坐标值唯一确定，两点确定一条线段。现在我们封装一个“Point类”和“Line类”来实现平面上的点的操作。

根据“append.cc”，完成Point类和Line类的构造方法和show()方法，输出各Line对象的构造和析构次序。

接口描述：
Point::show()方法：按格式输出Point对象。
Line::show()方法：按格式输出Line对象。


## Input
输入的第一行为N，表示后面有N行测试样例。每行为两组坐标“x,y”，分别表示线段起点和终点的x坐标和y坐标，两组坐标间用一个空格分开，x和y的值都在double数据范围内。


## Output
输出为多行，每行为一条线段，起点坐标在前终点坐标在后，每个点的X坐标在前，Y坐标在后，Y坐标前面多输出一个空格，用括号包裹起来。输出格式见sample。


## Sample Input
```
4
0,0 1,1
1,1 2,3
2,3 4,5
0,1 1,0

```
## Sample Output
```
Point : (0, 0)
Line : (0, 0) to (1, 1) is created.
Line : (0, 0) to (1, 1)
Line : (0, 0) to (1, 1) is erased.
Line : (1, 1) to (2, 3) is created.
Line : (1, 1) to (2, 3)
Line : (1, 1) to (2, 3) is erased.
Line : (2, 3) to (4, 5) is created.
Line : (2, 3) to (4, 5)
Line : (2, 3) to (4, 5) is erased.
Line : (0, 1) to (1, 0) is created.
Line : (0, 1) to (1, 0)
Line : (0, 1) to (1, 0) is erased.
Line : (1, -2) to (2, -1) is created.
Line : (1, -2) to (0, 0) is created.
Line : (2, -1) to (0, 0) is created.
Line : (0, 0) to (2, -1) is created.
Line : (1, -2) to (2, -1)
Line : (1, -2) to (0, 0)
Line : (2, -1) to (0, 0)
Line : (0, 0) to (2, -1)
Line : (0, 0) to (2, -1) is erased.
Line : (2, -1) to (0, 0) is erased.
Line : (1, -2) to (0, 0) is erased.
Line : (1, -2) to (2, -1) is erased.

```

## HINT


## Append Code
### append.cc
```cpp
int main()
{
    char c;
    int num, i;
    double x1, x2, y1, y2;
    Point p(1, -2), q(2, -1), t;
    t.show();
    std::cin>>num;
    for(i = 1; i <= num; i++)
    {
        std::cin>>x1>>c>>y1>>x2>>c>>y2;
        Line line(x1, y1, x2, y2);
        line.show();
    }
    Line l1(p, q), l2(p, t), l3(q, t), l4(t, q);
    l1.show();
    l2.show();
    l3.show();
    l4.show();
}
```
