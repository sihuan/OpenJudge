# 求最大值和最小值
Time Limit: 1 Sec  Memory Limit: 4 MB


## Description
求出一些整数中的最大值和最小值。

## Input
输入为多行，以EOF结束。每行为一个十进制的数字，全部由0～9组成，每行最长不超过1000个字符。有些数字会以0开头（不影响数值大小的前导0）。

## Output
输出为输入中的最大值和最小值，格式见sample。

## Sample Input
```
02
010
0012
012
23
```
## Sample Output
```
The maximum value is : 23
The minimum value is : 2

```

## HINT
由于输入已经超过64bit整数的数值上限，因此应该用字符串把输入存储下来，进行大小的判断。