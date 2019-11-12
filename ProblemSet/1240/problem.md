# A+B Problem (VII) : Function Practice (Append Code)
Time Limit: 1 Sec  Memory Limit: 2 MB


## Description
计算a+b，0<=a,b<1000。
-----------------------------------------------------------------------------
编写一个函数put_int_sum()。函数原型为
int put_int_sum(int a, int b);
功能：函数的参数传入a和b的值，计算a+b并输出，返回值为0时读取结束（在主函数中用返回值作为判断循环是否应该结束的条件）。
函数put_int_sum()的调用格式见“Append Code”。


## Input
输入有多对整数a和b组成，每对a和b占一行，a,b用空格分开。当测试样为0 0时表示输入结束，0 0不参与运算


## Output
每行输出一个a+b的值，顺序与输入对应。


## Sample Input
```
1 2
10 20
0 0
```
## Sample Output
```
3
30

```

## HINT
参看系统首页上的“Append Code”使用说明，讨论版（Web Board）上也有。

## Append Code
### append.c
```cint main()
{
    int a, b;
    while(scanf("%d%d", &a, &b))
        if(put_int_sum(a, b) == 0)
            break;
    return 0;
}
```
### append.cc
```cpp
int main()
{
    int a, b;
    while(cin >> a >> b)
        if(put_int_sum(a, b) == 0)
            break;
    return 0;
}
```
