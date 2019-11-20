# 编写函数：求数组中的最小值 (Append Code)
Time Limit: 1 Sec  Memory Limit: 16 MB


## Description
现有一个不超过N个元素的数组，其中没有重复数据出现。求该数组中的最小值以及最小值所在的下标。
-----------------------------------------------------------------------------
结合“Append Code”中的代码，编写以下函数：
原型：int get_array(int a[], int n);
功能：遵循样例输入的格式读取n个整数存放在a[]里，返回值为实际输入的元素个数。
原型：int min_index(int a[], int n);
功能：返回有n个元素的数组a[]中的所有元素的最小值的索引（下标）。
函数的调用格式见“Append Code”。






## Input
第一个输入为正整数N<=1000，后面输入N个整数。


## Output
输出只有一行。格式为：
minimum number is x, whose position is y.
其中x是数组中的最小元素值，y是x在数组中的下标。


## Sample Input
```
10
1 2 3 4 5 6 7 8 9 -1
```
## Sample Output
```
minimum number is -1, whose position is 9.
```

## HINT
 “Append Code”中用到的头文件、全局变量或宏的定义应自行补充。

## Append Code
### append.c
```c

int main()
{
    int array[MAX_SIZE], size, index;

    scanf("%d", &size);
    get_array(array, size);
    index = min_index(array, size);
    printf("minimum number is %d, whose position is %d.", array[index], index);

    return 0;
}

```
