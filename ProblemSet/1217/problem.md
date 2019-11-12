# 编写函数：浮点数取整 (Append Code)
Time Limit: 1 Sec  Memory Limit: 2 MB


## Description

各种程序设计语言里常见的取整函数有四个，分别是fix()、floor()、ceil()、round()。它们的功能细微之处各不相同，但有一点功能是共同的，就是把一个可能带小数点的浮点数转换成一个整数。
-----------------------------------------------------------------------------
编写函数myFloor()和myCeil()：
原型：int myFloor(double data);
功能：下取整，返回不大于data的最大整数。
原型：int myCeil(double data);
功能：上取整，返回不小于data的最小整数。
函数的调用格式见“Append Code”。
-----------------------------------------------------------------------------
Invalid Word（禁用单词）错误：在解决这个题目时，某些关键词是不允许被使用的。如果提交的程序中包含了下列的关键词之一，就会产生这个错误。
被禁用的头文件：math.h和stdlib.h。




## Input
输入有多行，每行是一个可能带小数点的浮点数m。


## Output
输出为多行，与上述输入一一对应。每行输出两个整数：m上取整和下取整的结果，两者之间用一个空格分隔开。


## Sample Input
```
1.3
-1.5
2
```
## Sample Output
```
1 2
-2 -1
2 2

```

## HINT


## Append Code
### append.c
```c 
int main()
{
    double data;
    while(scanf("%lf", &data) != EOF)
        printf("%d %d\n", myFloor(data), myCeil(data));
    return 0;
}
```
### append.cc
```cpp
int main()
{
    double data;
    while(cin >> data)
        cout << myFloor(data) << " " << myCeil(data) << endl;
    return 0;
}
```
