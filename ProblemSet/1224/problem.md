# 编写函数：求三个整数的最大值 (Append Code)
Time Limit: 1 Sec  Memory Limit: 2 MB


## Description
求三个整数的最大值。
-----------------------------------------------------------------------------
编写一个函数maxValue()求三个整数的最大值。其原型为：
int maxValue(int a,int b,int c);
功能：函数的三个参数传入a,b,c的值，返回其中最大值。
函数的调用格式见“Append Code”。




## Input
输入三个int类型的整数，两两之间用空格隔开。


## Output
输出三个整数的最大值。


## Sample Input
```
1 2 3
```
## Sample Output
```
3
```

## HINT
 参看系统首页上的“Append Code”使用说明，讨论版（Web Board）上也有。

## Append Code
### append.c
```c
int main()
{
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);
    printf("%d", maxValue(x, y, z));
    return 0;
}
```
### append.cc
```cpp
int main()
{
    int x, y, z;
    cin >> x >> y >> z;
    cout<<maxValue(x, y, z);
}
```
