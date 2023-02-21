# max()函数（Append Code）
Time Limit: 1 Sec  Memory Limit: 2 MB


## Description
编写一个函数max()，返回三个参数中的最大整数。

max()函数的调用格式见append.c



## Input
输入为三个整数。



## Output
输出为三个整数中的最大值。



## Sample Input
```
15 10 20
```
## Sample Output
```
20

```

## HINT


## Append Code
### append.c
```c
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d\n", max(a, b, c));
}

```
