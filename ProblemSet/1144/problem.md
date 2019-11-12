# 编写函数：求数组中的最大值 (Append Code)
Time Limit: 1 Sec  Memory Limit: 16 MB


## Description
现有一个不超过N个元素的数组，其中可能有重复数据出现。求该数组中的最大值以及最大值所在的下标。
-----------------------------------------------------------------------------
结合“Append Code”中的代码，编写以下函数：
原型：int get_array(int a[]);
功能：遵循样例输入的格式读取若干整数存放在a[]里，返回值为实际输入的元素个数。
原型：int put_array(int a[], int n);
功能：按格式输出a[]中的前n个元素。
原型：int max_value(int a[], int n);
功能：返回a[]中所有元素的最大值。
原型：int max_index(int idx[], int a[], int n);
功能：将a[]中所有最大值所在位置的索引（下标）存放在idx中，返回idx[]中元素的个数。
函数的调用格式见“Append Code”。



## Input
第一个输入为正整数N<=1000，后面输入N个整数。


## Output
输出是一行，其格式为：
maximum number is ？, whose positions are:*
其中“？”代表最大值（唯一的），“*”代表最大值所在的位置。如果最大值出现多次，则需输出所有的下标，下标两两之间由半角的逗号“,”隔开。


## Sample Input
```
9
1 2 3 9 5 8 7 8 9
```
## Sample Output
```
maximum number is 9, whose positions are:3,8
```

## HINT
 “Append Code”中用到的头文件、全局变量或宏的定义应自行补充。

## Append Code
### append.c
```c
int main()
{
    int array[MAX_SIZE], size;
    int index[MAX_SIZE], idx_size;

    size = get_array(array);
    idx_size = max_index(index, array, size);
    printf("maximum number is %d, ", max_value(array, size));
    printf("whose positions are:");
    put_array(index, idx_size);

    return 0;
}
```
