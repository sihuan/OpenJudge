# 不定方程求解
Time Limit: 1 Sec  Memory Limit: 2 MB


## Description
不定方程ax + by = c，对于给定的系数a和b、常数项c，求出在区间p～q范围内方程的一个整数解x、y，满足x和y不全为0且x取值最大。

题目保证a、b、c、x、y、p、q都是-10000～10000范围之内的整数。


## Input
输入分为两部分，第一部分是三个整数a、b、c且a、b不为0，第二部分包含多组输入，每组输入为一行包含两个整数p和q，且p <= q，至EOF结束。


## Output
输出每行与输入第二部分对应，每行为方程的解：两个整数x、y，满足条件p <=x,y <= q，x和y不全为0且x取值最大，若无满足条件的解则输出“no”。


## Sample Input
```
4 6 30
0 5
0 10
-10 10
-3 2

```
## Sample Output
```
3 3
6 1
9 -1
no

```

## HINT
