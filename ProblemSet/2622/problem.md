# 数组元素计数 (Append Code)
Time Limit: 1 Sec  Memory Limit: 2 MB


## Description
输出一个数组中与指定数字相同的元素的个数。
-----------------------------------------------------------------------------
 结合“Append Code”中的代码，编写以下函数：
 原型：int count_array(int a[], int n, int v);
 功能：从数组a[]中统计与v相同的元素个数并返回，其中n是数组a[]的长度。


## Input
输入为三行整数，第一行为n，表示数组长度（n<=100）；第二行为n个整数；第三行为一个整数，为指定数字m。





## Output
输出为n个数中与m相同的数的个数。


## Sample Input
```
3
2 3 2
2

```
## Sample Output
```
2
```

## HINT


## Append Code
### append.c
```c
int main()
{
    int a[100], i, n, val, cnt;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    scanf("%d", &val);
    cnt = count_array(a, n, val);
    printf("%d\n", cnt);
}

```
