# 成绩的等级
Time Limit: 1 Sec  Memory Limit: 2 MB


## Description
把百分制的考试成绩转换成五级制的成绩：
90～100：Excellent
80～89：Good
70～79：Average
60～69：Pass
0～59：Failing
不在0～100之间的输入是非法数据，输出“Error”。

## Input
输入多行，每行一个整数。

## Output
输入所对应的成绩等级。

## Sample Input
```
-1
81
92
35
68
72
100
```
## Sample Output
```
Error
Good
Excellent
Failing
Pass
Average
Excellent

```

## HINT
用switch语句解决这个问题比较方便。