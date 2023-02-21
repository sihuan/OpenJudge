# 求数组中最大最小值(Append Code)
Time Limit: 1 Sec  Memory Limit: 2 MB


## Description
         给出若干整数，求其中的最大值和最小值。


## Input
         首先输入一个整数n（n<100），然后输入n个整数。


## Output
         输出n个整数中的最小值和最大值。


## Sample Input
```
5
1 2 3 4 5

```
## Sample Output
```
1 5
```

## HINT


## Append Code
### append.c
```c
int main()
{
    int max, min, ar[100], i, n;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
        scanf("%d", &ar[i]);
    max_min(&max, &min, ar, n);
    printf("%d %d\n", min, max);
    return 0;
}

```
### append.cc
```cpp
int main()
{
    int max, min, ar[100], i, n;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
        scanf("%d", &ar[i]);
    max_min(&max, &min, ar, n);
    printf("%d %d\n", min, max);
    return 0;
}

```
