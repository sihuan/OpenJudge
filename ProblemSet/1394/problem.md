# 求图形的面积和体积
Time Limit: 1 Sec  Memory Limit: 128 MB


## Description
根据不同的图形，求面积或体积输出。圆周率取3.14。

main()函数中使用多态的思想，用派生树上最早祖先类Graphic的指针创建和访问其孩子类的对象。

图形（Graphic类）分作平面图形（Shape类）和立体图形（Solid类）两种。

正方形（Square类）是一种平面图形，圆形（Circle）也是。

球体（Ball类）是一种立体图形，也是圆形的扩充。

立方体（Cube类）是一种立体图形，也是正方形的扩充。


-----------------------------------------------------------------------------

你设计一系列类，满足上述派生树的要求，使得main()函数能够正确运行。

函数调用格式见append.cc。

append.cc中已给出main()函数。

-----------------------------------------------------------------------------




## Input
输入的第一个整数n（n<100），表示有n组测试数据。每组测试数据由两部分组成：一是图形的类型，有“square”、“cube”、“ball”、“circle”四种，分别表示正方形、立方体、球体、圆形；二是这种图形的边长或者半径，用double类型存储。




## Output
每组测试数据给出一行输出。

对应这四种不同的图形，分别产生四种输出：
正方形输出：“Square, side:x, area:y.”，x为输入的边长，y为面积。
立方体输出：“Cube, side:x, area:y, volume:z.”，x为输入的边长，y为表面积，z为体积。
球体输出：“Ball, radius:x, area:y, volume:z.”，x为输入的半径，y为表面积，z为体积。
圆形输出：“Circle, radius:x, area:y.”，x为输入的半径，y为面积。



## Sample Input
```
6
square 3
cube 3
ball 4
circle 4
cube 2
circle 1
```
## Sample Output
```
Square, side:3, area:9.
Cube, side:3, area:54, volume:27.
Ball, radius:4, area:200.96, volume:200.96.
Circle, radius:4, area:50.24.
Cube, side:2, area:24, volume:8.
Circle, radius:1, area:3.14.

```

## HINT


## Append Code
### append.cc
```cpp
int main()
{
    Graphic *gp[100];
    int cases;
    cin>>cases;
    for(int i = 0; i < cases; ++i)
    {
        string types;
        double value;
        cin>>types>>value;
        if(types == "square")
            gp[i] = new Square(value);
        if(types == "cube")
            gp[i] = new Cube(value);
        if(types == "ball")
            gp[i] = new Ball(value);
        if(types == "circle")
            gp[i] = new Circle(value);
    }
    for(int i = 0; i < cases; ++i)
    {
        gp[i]->show();
        delete gp[i];
    }
}

```
