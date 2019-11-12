# 编写函数：求整数的位数 之二 (Append Code)
Time Limit: 1 Sec  Memory Limit: 2 MB


## Description
输入一个十进制的整数，它共有几位数字组成？
-----------------------------------------------------------------------------
编写一个函数digits()，其原型为：
int digits(int n);
功能：返回n的十进制位数。
函数的调用格式见“Append Code”。


## Input
一个不超过10位的整数num。


## Output
输出num有多少位十进制数字。


## Sample Input
```
1000
```
## Sample Output
```
4

```

## HINT
负数该怎么处理？

## Append Code
### append.c
```c
int main()
{
    int num;
    scanf("%d", &num);
    printf("%d\n", digits(num));
}
```
### append.cc
```cpp
int main()
{
    int num;
    cin >> num;
    cout << digits(num) << endl;
}

```
