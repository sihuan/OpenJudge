# 小学生算术
Time Limit: 1 Sec  Memory Limit: 16 MB


## Description
给出两个正整数，计算两个数相加需要多少次进位。



## Input
数据有多组，每组包含两个整数，都在int范围内，输入以EOF结尾


## Output

一个整数，表示两个数相加需要的进位次数


## Sample Input
```
123 321
555 555
123456789 987654321
```
## Sample Output
```
0
3
9
```

## HINT
一定要用整数求余相加判断吗？想想有没有简洁的思路。试试用字符串吧，转换思路，分步处理。