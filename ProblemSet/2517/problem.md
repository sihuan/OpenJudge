# 时间的交换（Append code）
Time Limit: 1 Sec  Memory Limit: 2 MB


## Description
         用C语言自定义结构体类型time来表示时间，用来存储小时、分钟、秒三个量。编写函数get_time()、put_time()、time_swap()实现对时间的输入、输出和交换功能。请根据“append.c”文件内容定义类型并设计函数，使程序编译正确。
         用C++语言定义Time类型，并实现函数time_swap()，请根据“append.cc”文件内容定义类型并设计函数，使程序编译正确。
         函数的调用格式见“Append Code”。


## Input
         输入为两行，每行为一个时间包括时、分、秒三部分，中间用“:”分隔。


## Output
         输出为两行，与输入顺序相反。


## Sample Input
```
12:13:40
20:30:45

```
## Sample Output
```
20:30:45
12:13:40

```

## HINT


## Append Code
### append.c
```c
int main()
{
    struct time tm, tn;
    get_time(&tm);
    get_time(&tn);
    time_swap(&tm, &tn);
    put_time(tm);
    put_time(tn);
    return 0;
}

```
### append.cc
```cpp
int main()
{
    Time tm, tn;
    cin >> tm >> tn;
    time_swap(tm, tn);
    cout << tm << " " << tn;
    return 0;
}

```
