# 点与矩形的关系(Append Code)
Time Limit: 1 Sec  Memory Limit: 128 MB


## Description
在一个二维平面中，一个点的坐标含有横坐标x和纵坐标y两部分，而一个矩形可以利用两个对角线上的点确定。现有如下两个结构体：
typedef struct point
{
    int x;//横坐标
    int y;//纵坐标
}POINT;
typedef struct rect
{
    POINT LeftTop;//左上角顶点的坐标
    POINT RightBottom;//右下角顶点的坐标
}RECT;
其中，POINT和RECT分别表示平面上的点、矩形。
需要你来编程判断平面上一个点与矩形之间的位置关系。

--------------------------------------------------------------------------------------------------------------------------
完成如下3个函数：
1. void getPoint(POINT *p);用于按照指定的格式输入点p的坐标。
2. void getRect(RECT *rc);用于按照指定的格式输入矩形rc的左上角、右下角两个顶点的坐标。
3. int judgeRelation(POINT p,RECT rc);用于判断点p和矩形rc的位置关系。函数的返回值有3种可能：如果p在rc的某条边上，返回值为1；如果p在rc内部，则返回2；如果p在rc外部，则返回3。

注意：在提交代码时，需要将结构体的定义一起提交。


## Input
本题中所有的输入都是正整数。
输入分为2行。
第一行两个正整数表示点p的横坐标、纵坐标。
第二行4个正整数中的前2个是矩形rc的左上角的横坐标和纵坐标，后2个是矩形rc的右下角的横坐标和纵坐标。


## Output
如果点p在rc边上，则输出：
The point is on one edge.
如果p在rc内部，则输出：
The point is inside the rectangle.
如果p在rc外部，则输出：
The point is outside the rectangle.

注意：p在rc的边上，不包含p在rc的某条边的延长线上的情况。


## Sample Input
```
1 2
1 3 3 1

```
## Sample Output
```
The point is on one edge.

```

## HINT


## Append Code
### append.c
```cint main()
{
    POINT p;
    RECT rc;
    getPoint(&p);
    getRect(&rc);
    switch (judgeRelation(p,rc))
    {
    case 1:
        puts("The point is on one edge.");
        break;
    case 2:
        puts("The point is inside the rectangle.");
        break;
    case 3:
        puts("The point is outside the rectangle.");
        break;
    }
    return 0;
}
```
