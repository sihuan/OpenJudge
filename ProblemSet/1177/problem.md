# 成绩统计
Time Limit: 1 Sec  Memory Limit: 16 MB


## Description
把百分制的考试成绩转换为五个等级：

90～100：Excellent

80～89：Good

70～79：Average

60～69：Pass

0～59：Failing

统计每个等级的成绩，并输出。



## Input
输入多行，每行一个整数。输入的成绩总数不超过1000个。到EOF结束。


## Output
按从好到差的顺序分等级输出成绩，第一行为“等级 : 成绩数”，成绩数为这一等级的成绩总数；第二行为具体的成绩，用逗号分隔开，每个逗号后面有空格，每行最后一个成绩后没有逗号和空格。最后一行后有回车。输出的成绩与输入的顺序相同。若某个等级没有成绩，则不输出第二行。
具体格式参照sample。



## Sample Input
```
-1
81
92
35
68
72
100
1000
95
60
59
72
```
## Sample Output
```
Excellent : 3
92, 100, 95
Good : 1
81
Average : 2
72, 72
Pass : 2
68, 60
Failing : 2
35, 59

```

## HINT
如果没有不及格的成绩，你的程序还能否正确运行吗？