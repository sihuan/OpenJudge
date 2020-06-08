# I）
Time Limit: 1 Sec  Memory Limit: 256 MB


## Description
         对于一个数字N，使得N=a+b（a>0,b>0,gcd(a,b)=1）成立，这样的a与b有多少对。


## Input
         第一行输入一个T 代表有T组测试用例。
         每组测试用例包含一个数字n（3<=n<=100000）。


## Output
         对于每组测试用例，输出测试用例编号和答案。


## Sample Input
```
2
3
6

```
## Sample Output
```
Case 1: 2
Case 2: 2

```

## HINT
n=3，有1+2、2+1，一共两种情况。
n=6，有1+5、5+1，一共两种情况。如2+4、3+3、4+2中，a和b都不互质，因此不被统计在内。


## Append Code
