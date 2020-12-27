# 奇怪的求和 之一
Time Limit: 1 Sec  Memory Limit: 16 MB


## Description
给定3个正整数a、b和c，按照如下规则求和：
如果这个数字是偶数，则累加到和中；
如果这个数字是奇数，则将大于该数的最小偶数累加到和中。


## Input
三个正整数，均在100以内。


## Output
一个和。


## Sample Input
```
2 3 5
```
## Sample Output
```
12
```

## HINT
如果不会使用分支语句， 可使用条件运算符判断到底将哪个数累积到和中。