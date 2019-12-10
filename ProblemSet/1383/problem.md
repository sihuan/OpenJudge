# 动态的数组
Time Limit: 1 Sec  Memory Limit: 128 MB


## Description
输入N个浮点数，输出其中第m个～第n个数，满足m<n。
-----------------------------------------------------------------------------

你需要编写以下4个函数，完成这个程序：
double* allocate(int n)，在动态内存上分配n个元素的double型数组，并返回其首地址。
void input(double* p, int n)，向p中输入n个double型数值。
void output(double* p, int n)，把长度为n的数组p中符合条件的第m个～第n个元素输出，m和n从标准输入读取。
void release(double* p)，释放p所指的动态内存空间。

函数的调用格式见“Append Code”。



## Input
输入的第一个整数N（在int范围内），表示后跟N个double类型的浮点数。输入的最后是两个整数m和n，满足m<n，m和n在int范围内，但不一定在1～N之间。



## Output
输出第m个～第n个之间的浮点数，每个数占一行。若区间[m,n]和[1,N]没有任何重叠，则输出“no output”。区间[m,n]和[1,N有交集]时，但给出的n超出第N个数的范围，则只需输出到第N个数，m超出范围时同样处理。



## Sample Input
```
20
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20
15 25

```
## Sample Output
```
15
16
17
18
19
20

```

## HINT


## Append Code
### append.c
```c
int main()
{
    int len;
    double *array;
    scanf("%d", &len);
    array = allocate(len);
    input(array, len);
    output(array, len);
    release(array);
}
```
### append.cc
```cpp
int main()
{
    int len;
    double *array;
    cin>>len;
    array = allocate(len);
    input(array, len);
    output(array, len);
    release(array);
}

```
