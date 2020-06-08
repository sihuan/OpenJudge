# 列
Time Limit: 1 Sec  Memory Limit: 128 MB


## Description
斐波那契数列（Fibonacci sequence），又称黄金分割数列、因数学家列昂纳多·斐波那契（Leonardoda Fibonacci）
以兔子繁殖为例子而引入，故又称为“兔子数列”，指的是这样一个数列：1、1、2、3、5、8、13、21、34、……，现要求输入
一个n，然后输出第n个斐波那契数，计数从0开始；



## Input
一个n，表示要求第n个的斐波那契数；
0<=n<=30；
多组输入


## Output
输出第n个斐波那契数；



## Sample Input
```
1
```
## Sample Output
```
1
```

## HINT

主函数已经给出，然后可以根据append查看主函数，根据主函数内容编写一个名为“Fibonacci”的函数，函数用递归实现，来求出第n
个斐波那契；



## Append Code
### append.c
```c#include<stdio.h>
int main()
{
    int n;
    while(~scanf("%d",&n))
    printf("%d\n",Fibonacci(n));
    return 0;
}
```
