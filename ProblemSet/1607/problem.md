# 编写函数：有多少个数字 (Append Code)
Time Limit: 1 Sec  Memory Limit: 2 MB


## Description


从标准输入读取了多少个数字？
 
用C语言或C++编写函数实现，append.c中调用的函数为：
        int get_nums(); //请自行设计函数参数，使程序编译正确。
        功能：从标准输入读取若干整数，返回读取的整数个数。

函数的调用格式见“Append Code”。


## Input


输入若干数字，至EOF结束。


## Output


输出数字的个数。


## Sample Input
```
1 2 3
```
## Sample Output
```
3
```

## HINT


## Append Code
### append.c
```c
int main()
{
    int n;
    get_nums(&n);
    printf("%d\n", n);
}

```
### append.cc
```cpp
int main()
{
    int n;
    get_nums(&n);
    cout << n << endl;
}

```
