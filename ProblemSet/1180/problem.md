# 编写函数：日期的顺序 (Append Code)
Time Limit: 2 Sec  Memory Limit: 16 MB


## Description
输入不超过10000个日期，把它们按从前到后进行排序。
-----------------------------------------------------------------------------
至少编写两个函数完成程序：
原型：int get_date_array(struct date d[]);
功能：按格式从输入读取若干日期存入结构体数组d[]中，返回值为实际读取的日期数。
原型：int sort_date_array(struct date d[], int n);
功能：将结构体数组中的日期排序。
函数的调用格式见“Append Code”，结构体“struct date”的类型定义根据“Append Code”自行给出。


## Input
输入为多行，到EOF结束。
每行一个日期，格式为“mm/dd/yyyy”（月/日/年），其中，月和日都占2个字符位，年占4位。
可以保证输入的日期都是合法的，且都不早于公元1000年。


## Output
按从前到后的顺序输出这些日期，每个日期占一行。


## Sample Input
```
01/01/2012
02/01/2010
02/01/2012
10/01/2010
10/01/2012
01/01/2010
02/10/2000
02/10/2012
01/10/2010
10/10/2010
10/10/2000
02/10/2012
01/10/2010
01/10/2012
02/01/2000
```
## Sample Output
```
02/01/2000
02/10/2000
10/10/2000
01/01/2010
01/10/2010
01/10/2010
02/01/2010
10/01/2010
10/10/2010
01/01/2012
01/10/2012
02/01/2012
02/10/2012
02/10/2012
10/01/2012

```

## HINT
“Append Code”中用到的头文件、全局变量、宏和自定义类型的定义应自行补充。

## Append Code
### append.c
```c
int main()
{
    struct date d_arr[MAX_SIZE];
    int cases = 0, i, j;

    cases = get_date_array(d_arr);
    sort_date_array(d_arr, cases);

    for(i = 0; i < cases; i++)
        printf("%02d/%02d/%d\n", d_arr[i].month, d_arr[i].day, d_arr[i].year);
    return 0;
}
```
