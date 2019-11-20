# 有多少个最大值？
Time Limit: 1 Sec  Memory Limit: 128 MB


## Description
输入若干个整数，求取它们的最大值以及这些最大值所在的位置（即下标）。


## Input
输入有多行。第一行N>0是一个整数，表示后面有N个测试用例，之后有N行，每行是一个测试用例。每行第一个整数1001>M>0，表示该测试用例有M个整数，之后有M个整数。每行的输入两两之间用一个空格隔开。所有输入都在int类型范围内。


## Output
对于每个测试用例产生一行输出，格式为：
Max = #,Positions = ？
其中“#”是最大值，“？”是最大值所在下标的列表，两两之间用一个空格隔开。


## Sample Input
```
3
10 1 2 3 4 5 6 7 8 9 10
5 4 4 4 4 4
8 1 1 1 4 4 4 1 1

```
## Sample Output
```
Max = 10,Positions = 9
Max = 4,Positions = 0 1 2 3 4
Max = 4,Positions = 3 4 5

```

## HINT
