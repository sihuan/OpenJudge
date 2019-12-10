# 编写函数：数组的操作 之一(Append Code)
Time Limit: 1 Sec  Memory Limit: 128 MB


## Description
给出两个不超过N个元素的数组，将它们元素相加之和放入第三个数组中。
-----------------------------------------------------------------------------
结合“Append Code”中的代码，编写以下函数：
原型：int add_array(int arr[], int a[], int m, int b[], int n);
功能：把a[]的元素和b[]的元素按下标对应相加，放入arr[]里，其中m、n是数组a[]、b[]的长度，a[]或b[]中较长的数组多出来的元素视作加0，返回值是较长的数组的元素个数。
对于这个函数来说，默认m和n都不超过arr[]、a[]、b[]的实际存储空间。



## Input
有M（M<50）组测试样例。每组样例包含两个数组，每个数组以一个非负整数N（N<=1000）开始，后接N个整数。



## Output
每组测试样例的两个数组对应元素相加，元素多的那个数组视作加0，得到一个新的数组，并输出在一行，元素之间用一个空格分开，行尾不要有多余的空格。



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
0 0 0 0 5
0 0 0 0 -5
0 0 0 0 0

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
    int m, n, k,arr[1000], ar[1000], a[1000];
    scanf("%d", &cases);
    while(cases--)
    {
        m = get_array(a);
        n = get_array(ar);
        k = add_array(arr, ar, n, a, m);
        put_array(arr, k);
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
    int m, n, k,arr[1000], ar[1000], a[1000];
    scanf("%d", &cases);
    while(cases--)
    {
        m = get_array(a);
        n = get_array(ar);
        k = add_array(arr, ar, n, a, m);
        put_array(arr, k);
    }
    return 0;
}

```
