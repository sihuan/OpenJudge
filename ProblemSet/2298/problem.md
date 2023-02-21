# A+B Problem (VIII) : Recursion Practice (Append Code)
Time Limit: 1 Sec  Memory Limit: 2 MB


## Description
计算a+b，0<=a,b<1000。
-----------------------------------------------------------------------------
编写一个函数add()。函数原型为
      int add(int n);
      功能：函数读入a和b的值，并输出a+b。用递归的方法编写，n是递归的次数。
函数add()的调用格式见“Append Code”。
-----------------------------------------------------------------------------
Invalid Word（禁用单词）错误：在解决这个题目时，某些关键词是不允许被使用的。如果提交的程序中包含了下列的关键词之一，就会产生这个错误。
被禁用的关键字：for, while, do, break, continue, goto。


## Input
输入的第一行是一个正整数N，后面有N对整数a和b，每对a和b占一行，a,b用空格分开。


## Output
每行输出一个a+b的和，顺序与输入对应。


## Sample Input
```
2
1 2
10 20

```
## Sample Output
```
3
30

```

## HINT


## Append Code
### append.c
```c
int main()
{
    int N;
    scanf("%d", &N);
    add(N);
}

```
### append.cc
```cpp
int main()
{
    int N;
    cin >> N;
    add(N);
}

```
