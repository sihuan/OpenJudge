# 时间的顺序 (Append Code)
Time Limit: 1 Sec  Memory Limit: 2 MB


## Description
输入不超过100个（24小时制）时间，把它们按从前到后进行排序。
 -----------------------------------------------------------------------------
 至少编写三个函数完成程序：
 原型：int get_time(struct time tm[]);
 功能：按格式从输入读取若干时间存入结构体数组tm[]中，返回值为实际输入的时间个数。
 原型：int sort_time(struct time tm[], int n);
 功能：将结构体数组tm中的时间按从小到大排序。
 原型：int put_time(struct time tm[], int n);
 功能：将结构体数组tm中的时间按顺序输出，格式见样例。
 函数的调用格式见“Append Code”，结构体“struct time”的类型定义根据“Append Code”自行给出。


## Input
输入为两部分，第一部分为整数n，n<=100，第二部分为n行，每行三行个整数，表示时间的小时、分钟、秒。



## Output
输出为n个从小到大的时间，格式为”hh:mm:ss”，时分秒均输出2位，不足前补0。


## Sample Input
```
5
12 0 30
12 3 30
11 1 30
11 3 20
12 3 20

```
## Sample Output
```
11:01:30
11:03:20
12:00:30
12:03:20
12:03:30

```

## HINT


## Append Code
### append.c
```c
int main()
{
    struct time tm[100];
    int i, n;
    n = get_time(tm);
    sort_time(tm, n);
    put_time(tm, n);
}

```
