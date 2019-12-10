# 编写函数：两点之间的距离 (Append Code)
Time Limit: 1 Sec  Memory Limit: 2 MB


## Description
计算平面上两点之间的直线距离。
-----------------------------------------------------------------------------
编写两个函数input_point()和distance()完成程序：
原型：void input_point(POINT *pt);
功能：按格式输入一个点的坐标，存入pt所指的内存中。
原型：double distance(POINT p1, POINT p2);
功能：返回点p1到p2的直线距离。
函数的调用格式见“Append Code”，结构体“POINT”的类型定义根据“Append Code”自行给出。



## Input
输入有2行，每行有2个实数，分别代表两个点的坐标。


## Output
输出两个点之间的距离，用%g格式输出即可。


## Sample Input
```
1.1 1.2
1.3 1.4
```
## Sample Output
```
0.282843
```

## HINT


## Append Code
### append.c
```cint main()
{
   POINT p,q;
   double dis;
   input_point(&p);
   input_point(&q);
   dis=distance(p,q);
   printf("%g",dis);
   return 0;
}
```
