# 说好的点呢
Time Limit: 1 Sec  Memory Limit: 16 MB


## Description

两点确定一条直线，判断一条直线与一个圆的位置关系。


## Input

输入中前两行每行描述一个点的坐标(x,y)，x,y均为实数。
第三行包含三个实数，即圆心坐标和圆的半径R>0。


## Output
输出包含三种情况，计算误差应在1e-3(0.001)内。
“Interseetion”（相交时输出）；
“Tangency”（相切时输出）；
“Disjoint”（相离时输出）；
以上输出不含引号。

## Sample Input
```
1 0
0 1
0 0 1
```
## Sample Output
```
Interseetion
```

## HINT
回忆中学的几何知识，最好能自己先想到此题的几何解，实在想不到，可以查查法线方程之类的，然后用程序实现。这里要用到浮点数的精度控制。