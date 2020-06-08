# 
Time Limit: 1 Sec  Memory Limit: 128 MB


## Description
给定一个N*N的矩阵(0 < N <= 10)，进行以下操作：
ADD LINE t a b (x,y) 把第t行的数从第a列到第b列(包含第a列和第b列)的和加到点(x,y)上，然后对1000007取余;
ADD ROW t a b (x,y)   把第t列的数从第a行到第b行(包含第a行和第b行)的和加到点(x,y)上，然后对1000007取余;
ADD MAX(或MIN) LINE(或ROW) a MAX(或MIN) LINE(或ROW) b
打印输出第a行(或列)的最大(或最小)值与第b行(或列)的最大值(或最小)之和(同样对1000007取余输出); 
EXIT 打印当前矩阵并退出（打印N行N列，每列之间用一个空格隔开，最后一列后面不需要空格）。
(0 <= a,b,t,x,y < N)


## Input
输入中第一行为一个整数T代表case数。
每个case中第一行为整数N(1 <= N <= 10);
后面N行N列代表N*N的矩阵A。(-1000007 < A[i][j] < 1000007).
后面输入一个M(0 < M <= 100).
后面M行，每行一个操作执行语句。
所有语句均为上述语句，且不会出现非法数据，所有的操作都保证在N*N的矩阵内进行。
操作执行语句中每个单词之间由一个或多个空格隔开，每条语句长度不超过50。
"EXIT"语句一定出现在最后一句。

## Output
按操作规则完成M项操作即可。

## Sample Input
```
1
3
1 2 3
4 5 6
7 8 9
3
ADD LINE 0 0 2 (1,1)
ADD MAX LINE 0 MIN ROW 1
EXIT

```
## Sample Output
```
Case 1:
5
1 2 3
4 11 6
7 8 9
```

## HINT


## Append Code
Source