# 输出矩形 (Append Code)
Time Limit: 1 Sec  Memory Limit: 16 MB


## Description
输出一个m行n列的矩形，m和n均大于2，只有四边输出“*”，矩形中间输出空格。
例如，最小的矩形是：
***
* *
***


         请根据“Append Code”完成程序。append.c中调用了一个函数print ()。用C语言或C++编写自定义类型和函数实现，函数的原型为：
                  int print(int m, int n);
                   功能：输出一个m行n列的矩形。
         函数的调用格式见“Append Code”。



## Input
输入为两个整数m和n。


## Output
输出一个m行n列的矩形


## Sample Input
```
4 5
```
## Sample Output
```
*****
*   *
*   *
*****

```

## HINT


## Append Code
### append.c
```c
int main()
{
    int m, n;
    scanf("%d%d", &m, &n);
    print(m, n);
}

```
### append.cc
```cpp
int main()
{
    int m, n;
    cin >> m >> n;
    print(m, n);
}

```
