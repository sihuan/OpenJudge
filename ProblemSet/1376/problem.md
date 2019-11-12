# 编写函数：数组的排序 (Append Code)
Time Limit: 1 Sec  Memory Limit: 16 MB


## Description
输入一组整数，按从小到大顺序排序后输出。
-----------------------------------------------------------------------------
结合“Append Code”中的代码，编写以下函数：
原型：int get_array(int a[]);
功能：遵循样例格式读取n个输入存放在a[]里，返回值为实际输入的元素个数。
原型：int put_array(int a[], int n);
功能：按格式输出a[]中的前n个元素。
原型：int sort_array(int a[], int n);
功能：把a[]中前n个元素按从小到大排序。
函数的调用格式见“Append Code”。

## Input
输入最多不超过N（N<100）个整数，至EOF结束。

## Output
在一行中按从小到大排序输出这些整数，两数之间用一个空格分开，行尾有回车。

## Sample Input
```
5 3 2 4 9 8
```
## Sample Output
```
2 3 4 5 8 9

```

## HINT
 “Append Code”中用到的头文件、全局变量或宏的定义应自行补充。

## Append Code
### append.c
```c
int main()
{
    int array[MAX_SIZE], size;
 
    size = get_array(array);
    sort_array(array, size);
    put_array(array, size);
 
    return 0;
}
```
