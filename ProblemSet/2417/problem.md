# 数组的移位(Append Code)
Time Limit: 1 Sec  Memory Limit: 16 MB


## Description
给出一个不超过N个元素的数组，将数组的第一个数据放到末尾，其余数据依次前移。
 
-----------------------------------------------------------------------------
 
结合“Append Code”中的代码，编写以下函数：
 
原型：int get_array(int a[], int n);
 
功能：输入n个元素到数组a[]中，其中n是数组a[]的长度。
 
原型：int shift_array(int a[], int n);
 
功能：按题意处理数组a[]的元素，其中n是数组a[]的长度。
 
原型：int put_array(int a[], int n);
 
功能：将数组a[]中的前n个元素输出。


## Input
输入为两部分，第一部分为一个整数n，n<=100，后跟n个整数。


## Output
将n个整数的第一个放到最后，其余输出顺序不变。


## Sample Input
```
5
1 2 3  4 5

```
## Sample Output
```
2 3 4 5 1
```

## HINT


## Append Code
### append.c
```c
int main()
{
    int n, a[100];
    scanf("%d", &n);
    get_array(a, n);
    shift_array(a, n);
    put_array(a, n);
    return 0;
}

```
### append.cc
```cpp
int main()
{
    int n, a[100];
    cin >> n;
    get_array(a, n);
    shift_array(a, n);
    put_array(a, n);
    return 0;
}

```
