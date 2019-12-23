# 编写函数：二十一世纪 (Append Code)
Time Limit: 1 Sec  Memory Limit: 2 MB


## Description
每一百年是一个世纪。公元1年至99年是第一个世纪，公元100年至199年是第二个世纪……以此类推，19xx年是二十世纪，二十一世纪是2000年开始的。
现在编写一个程序计算一个年份是属于哪一个世纪。
--------------------------------------------------------------------

请根据“Append Code”完成程序。append.c中调用了一个结构体类型struct date和2个函数get_date()和put_century()。用C语言或C++编写自定义类型和函数实现，2个函数的原型为：
      int get_date(struct date *dt);
      功能：形参dt是一个结构体变量的指针，用于输入日期。
      put_century(struct date dt);
      功能：按格式输出dt所处的世纪。
 函数的调用格式见“Append Code”。


## Input
输入格式为y/m/d，其中y、m、d是三个正整数表示年月日，均为合法日期。


## Output
输出为一行“in the ??? century”，其中“???”表示序数（第几个）。
在序数xx（第xx个）中：个位数为1的是“st”结尾，为2的是“nd”结尾，为3的是“rd”结尾，为4～9和0的都是“th”结尾。


## Sample Input
```
2018/12/30

```
## Sample Output
```
in the 21st century
```

## HINT


## Append Code
### append.c
```c
int main()
{
    struct date d;
    get_date(&d);
    put_century(d);
    return 0;
}

```
### append.cc
```cpp
int main()
{
    Date d;
    d.get();
    d.century();
    return 0;
}

```
