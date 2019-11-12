# 2的多少次幂
Time Limit: 1 Sec  Memory Limit: 2 MB


## Description
从键盘输入一个数x，x是2的整数次幂（x=2y），请编程求出y的值。

## Input
一个非负有理数x，x在[0,2256]范围内。

## Output
一个整数y。

## Sample Input
```
1
```
## Sample Output
```
0
```

## HINT
看起来数据很大，但是用double完全可以存储。为什么？请研究下IEEE-754标准的浮点数存储格式。这里要用到C语言标准库的数学函数。