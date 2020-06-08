# 的幸运数
Time Limit: 1 Sec  Memory Limit: 128 MB


## Description
wxy最近一直状态不佳,他有一天打开手机并且启动了个计时器.这个计时器从1开始,每天增加一个,并且会对某个特定数字取余.wxy为了提升自己的状态,他决定只要是符合以下条件的日期都要好好努力刷题进队.
设第n个日期为C(n),那么,C(n)符合以下条件.
1. C(0) = 0, C(1) = 1.
2. C(n) = C(n - 1) + 2 * C(n - 2).
wxy想知道第N个这样的日期是什么时候,请你帮帮他.(所有日期对2018007取余.)
输入一个N,求出符合上述条件的C(N)是多少.
保证输出的C(N)在int范围的正数内.
该题目有多组输入!

## Input
一个正整数N

## Output
一个在int范围内的符合wxy要求的数

## Sample Input
```
10
```
## Sample Output
```
341

```

## HINT
Append CodeSource#include 
#include 
#include 
#define mod 2018007
int main()
{