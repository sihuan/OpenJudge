# 最晚的一天 (Append Code)
Time Limit: 1 Sec  Memory Limit: 16 MB


## Description

         输入的日期中哪一天是最晚的。
 
         请根据“Append Code”完成程序。append.c中调用了一个结构体类型struct date和一个函数get_maxdate ()。用C语言或C++编写自定义类型和函数实现，函数的原型为：
                  struct date get_maxdate();
                   功能：用于输入日期并返回最大值。
         函数的调用格式见“Append Code”。



## Input
         输入若干日期至EOF结束，格式为y-m-d，其中y、m、d是三个正整数表示年月日，均为合法日期，其中y的输入范围是1000～9999年。


## Output
         输出日期最晚的那一天。


## Sample Input
```
2019-12-31
2020-01-01
2019-12-24
2019-12-30
2020-01-15
```
## Sample Output
```
2020-01-15

```

## HINT


## Append Code
### append.c
```c
int main()
{
    struct date d;
    d = get_maxdate();
    printf("%04d-%02d-%02d\n", d.y, d.m, d.d);
}

```
### append.cc
```cpp
int main()
{
    Date d;
    d.getmax();
    d.put();
    return 0;
}

```
