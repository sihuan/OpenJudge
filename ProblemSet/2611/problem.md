# 类型无关的排序(Append Code)
Time Limit: 1 Sec  Memory Limit: 16 MB


## Description
写一组抽象的输入、输出和排序的函数。要求能对用数组存储的任意类型数据排序，即忽略数据的差异并通过回调函数开放出与数据紧密相关的操作。

输入函数原型：
    int get_arr(void *ar, int sz, int (*get)(void*));
    参数：ar为输入数组的首地址、sz为数组每个单元大小，回调函数get处理具体数据相关的输入操作，其参数为数据存储位置的首地址。
    返回值：输入了多少个元素。
输出函数原型：
    int put_arr(void *ar, int sz, int n, int (*put)(void*));
    参数：ar为输入数组的首地址、sz为数组每个单元大小，n为数组元素个数，回调函数put处理具体数据相关的输出操作，其参数为数据存储位置的首地址。
    返回值：无意义。
排序函数原型：
    int sort(void *ar, int sz, int n, int (*cmp)(void *, void*));
    参数：ar为输入数组的首地址、sz为数组每个单元大小，n为数组元素个数，回调函数cmp处理具体数据相关的比较操作，其参数为待比较的两数据存储位置的首地址。
    返回值：无意义。

相关的各种类型数据处理函数为
    int类型：输入get_int()、输出put_int()、比较int_cmp()
    double类型：输入get_dbl()、输出put_dbl()、比较dbl_cmp()
    字符数组类型：输入get_str()、输出put_str()、比较str_cmp()
    日期类型：输入get_dte()、输出put_dte()、比较dte_cmp()
请根据题意完善这些函数的参数和返回值，并编写出来。

函数的调用格式见“Append Code”。


## Input

输入数据分为4组，每组以一个正整数n（n<100）开始，后接n个输入的数据。
第一组为n个整数，要求按从大到小排列。
第二组为n个实数，要求按从小到大排列。每个实数输出1位小数。
第三组为n个小写字母组成的串，串长小于50，要求按规范序排列，即先按长度再按照字典序排列。
第四组为n个日期，格式为“mm-dd-yyyy”即月日年，要求按日期先后顺序排列。



## Output

输出为4行，每行对应一组输入数据，数据之间有一个空格分隔，行尾无空格。
第一行为n个整数，第二行为n个实数，第三行为n个串，第四行为n个日期，格式为“yyyy-mm-dd”，年月日位数不足要补0。


## Sample Input
```
10 5 8 1 4 3 2 9 0 6 7
6 0.2 2.1 1.6 6.3 3.5 5.4
8 adc ad d ab abc b acb abb
5 10/10/2000 02/10/2012 01/10/2010 01/10/2012 02/01/2000

```
## Sample Output
```
9 8 7 6 5 4 3 2 1 0
0.2 1.6 2.1 3.5 5.4 6.3
b d ab ad abb abc acb adc
2000-02-01 2000-10-10 2010-01-10 2012-01-10 2012-02-10

```

## HINT


## Append Code
### append.c
```c
int main()
{
    int n;
    int int_arr[MAX_SIZE];
    double dbl_arr[MAX_SIZE];
    struct date dte_arr[MAX_SIZE];
    char str_arr[MAX_SIZE][MAX_LEN];

    n = get_arr(int_arr, sizeof(int), get_int);
    sort(int_arr, sizeof(int), n, int_cmp);
    put_arr(int_arr, sizeof(int), n, put_int);

    n = get_arr(dbl_arr, sizeof(double), get_dbl);
    sort(dbl_arr, sizeof(double), n, dbl_cmp);
    put_arr(dbl_arr, sizeof(double), n, put_dbl);

    n = get_arr(str_arr, sizeof(char) * MAX_LEN, get_str);
    sort(str_arr, sizeof(char) * MAX_LEN, n, str_cmp);
    put_arr(str_arr, sizeof(char) * MAX_LEN, n, put_str);

    n = get_arr(dte_arr, sizeof(struct date), get_dte);
    sort(dte_arr, sizeof(struct date), n, dte_cmp);
    put_arr(dte_arr, sizeof(struct date), n, put_dte);

    return 0;
}

```
