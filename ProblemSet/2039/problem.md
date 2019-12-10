# 编写函数：笛卡尔坐标系(Append Code)
Time Limit: 1 Sec  Memory Limit: 128 MB


## Description

在数学里，笛卡儿坐标系（Cartesian坐标系），也称直角坐标系，是一种正交坐标系。二维的直角坐标系是由两条相互垂直、0 点重合的数轴构成的。在平面内，任何一点的坐标 是根据数轴上对应的点的坐标设定的。
二维的直角坐标系通常由两个互相垂直的坐标轴设定，通常分别称为 x-轴 和 y-轴；两个坐标轴的相交点，称为原点，通常标记为 O ，既有“零”的意思，又是英语“Origin”的首字母。每一个轴都指向一个特定的方向。这两个不同线的坐标轴，决定了一个平面，称为 xy-平面，又称为笛卡儿平面。

以笛卡尔平面上一个点的坐标(x,y)坐标为输入，输出该点是否在坐标轴上或者位于哪一个象限。
-----------------------------------------------------------------------------
请根据“Append Code”的代码，给出结构体的定义，并编写以下两个函数完成程序：
get_point()函数的功能是：按照格式输入一个点，用传地址的方法。
judge_point()函数的功能是：判断点位于哪个象限或哪个坐标轴上，或者是原点，按照格式输出结果。




## Input
输入为一行。输入的坐标x、y值都会带有1位小数，括号和逗号都是英文半角符号，逗号后面有一个空格。



## Output
四个象限输出为“quadrand I”、“quadrand II”、“quadrand III”、“quadrand IV”，x-轴和y-轴输出为“x axis”和“y axis”，原点输出为“origin”
输出为以下三种：
(-1.0, -2.5) is in quadrand III
(0.0, 4.8) is on the y axis
(0.0, 0.0) is origin



## Sample Input
```
(-1.0, -2.5)
```
## Sample Output
```
(-1.0, -2.5) is in quadrand III
```

## HINT


## Append Code
### append.c
```c
int main()
{
    struct point p;
    get_point(&p);
    judge_point(p);
    return 0;
}
```
### append.cc
```cpp
int main()
{
    Point p;
    getPoint(&p);
    judgePoint(p);
    return 0;
}
```
