# 寻求勾股数
Time Limit: 1 Sec  Memory Limit: 2 MB


## Description
满足x2+y2=z2的正整数x，y和z称为一组勾股数（pythagorean triple），又称为毕达哥拉斯三元数组。现在要求你编程求指定范围内的勾股数。





## Input
输入若干对数a和b，每对数占一行。0<=a,b<=10000，分别为指定范围的最小值和最大值。


## Output
输出为多行，与上述输入一一对应。
每行输出首先输出用例编号“case i"，其中i为行号，从1开始计数。
如果指定范围内有勾股数，则按照x从小到大的顺序输出每组勾股数，每组勾股数要求x<y<z。勾股数的组与组之间用一个分号（";"）隔开。
如果指定范围内没有勾股数，则输出”No pythagorean triple“。


## Sample Input
```
1 10
6 9
```
## Sample Output
```
case 1:3,4,5;6,8,10
case 2:No pythagorean triple

```

## HINT
