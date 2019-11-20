# 编写函数：比较三个数大小 (Append Code)
Time Limit: 1 Sec  Memory Limit: 2 MB


## Description

从键盘上输入0～100之间的三个数，按从小到大的顺序输出。

-----------------------------------------------------------------------------
编写一个函数compare()用来比较三个数的大小，按它们的大小排好位置：
原型：int compare(int *min, int *mid, int *max);  （append.c）
          int compare(int &min, int &mid, int &max);  （append.cc）
功能：这里用到传地址，比较三个参数的数值大小，最小值的存入min，最大值存入max，mid是存中间那个值。
函数的调用格式见“Append Code”。



## Input
输入只有一行，为三个整数。


## Output
按从小到大输出这三个数。


## Sample Input
```
15 10 20
```
## Sample Output
```
10 15 20
```

## HINT
传地址可以使得在函数中改变实参的值，学习怎么用指针吧。

## Append Code
### append.c
```c
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    compare(&a, &b, &c);
    printf("%d %d %d", a, b, c);
    return 0;
}
```
### append.cc
```cpp
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    compare(a, b, c);
    cout << a << " " << b << " " << c;
    return 0;
}
```
