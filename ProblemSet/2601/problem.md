# digit函数二 (Append Code)
Time Limit: 1 Sec  Memory Limit: 2 MB


## Description
在程序中定义一函数digit(n)，它能分离出整数最左边的数字。

函数的调用格式见“Append Code”。

-----------------------------------------------------------------------------

Invalid Word（禁用单词）错误：在解决这个题目时，某些关键词是不允许被使用的。如果提交的程序中包含了下列的关键词之一，就会产生这个错误。

被禁用的关键字：for, while, do, break, continue, goto。


## Input
非负整数n，n不超int范围。


## Output
一个数字


## Sample Input
```
31859
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
    scanf("%d", &n);
    printf("%d\n", digit(n));
}

```
### append.cc
```cpp
int main()
{
    int n;
    cin >> n;
    cout << digit(n);
}

```
