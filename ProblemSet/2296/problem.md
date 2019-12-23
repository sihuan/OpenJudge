# 编写函数：数组的操作 之二(Append Code)
Time Limit: 1 Sec  Memory Limit: 16 MB


## Description
给出两个不超过N个元素的数组，交换这两个数组的元素。 
----------------------------------------------------------------------------- 
结合“Append Code”中的代码，编写以下函数：
      原型：int swap_array(int a[], int m, int b[], int n); 
  功能：把a[]的元素和b[]的元素按下标对应交换，其中m、n是数组a[]、b[]的长度。 
对于这个函数来说，默认m和n都不超过arr[]、a[]、b[]的实际存储空间。


## Input
有M（M<50）组测试样例。每组样例包含两个数组，每个数组以一个非负整数N（N<=1000）开始，后接N个整数。


## Output
每组测试样例的两个数组交换输出，每个数组输出一行，元素之间用一个空格分开，行尾不要有多余的空格。


## Sample Input
```
3
5  1  2  3  4  5
4 -1 -2 -3 -4
4  1  2  3  4
5 -1 -2 -3 -4 -5
5  1  2  3  4  5
5 -1 -2 -3 -4 -5

```
## Sample Output
```
-1 -2 -3 -4
1 2 3 4 5
-1 -2 -3 -4 -5
1 2 3 4
-1 -2 -3 -4 -5
1 2 3 4 5

```

## HINT


## Append Code
### append.c
```c
int get_array(int a[])
{
    int n, i;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    return n;
}

int put_array(int a[], int n)
{
    int i;
    if(n > 0)
        printf("%d", a[0]);
    for(i = 1; i < n; i++)
        printf(" %d", a[i]);
    printf("\n");
    return 0;
}

int main()
{
    int cases;
    int m, n, k, arr[1000], ar[1000];
    scanf("%d", &cases);
    while(cases--)
    {
        m = get_array(ar);
        n = get_array(arr);
        k = swap_array(ar, m, arr, n);
        put_array(ar, n);
        put_array(arr, m);
    }
    return 0;
}

```
### append.cc
```cpp
int get_array(int a[])
{
    int n, i;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    return n;
}

int put_array(int a[], int n)
{
    int i;
    if(n > 0)
        printf("%d", a[0]);
    for(i = 1; i < n; i++)
        printf(" %d", a[i]);
    printf("\n");
    return 0;
}

int main()
{
    int cases;
    int m, n, k, arr[1000], ar[1000];
    scanf("%d", &cases);
    while(cases--)
    {
        m = get_array(ar);
        n = get_array(arr);
        k = swap_array(ar, m, arr, n);
        put_array(ar, n);
        put_array(arr, m);
    }
    return 0;
}

```
