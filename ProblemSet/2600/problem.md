# digit函数一  (Append Code)
Time Limit: 1 Sec  Memory Limit: 2 MB


## Description
在程序中定义一函数digit(n,k)，它能分离出整数n从右边数第k个数字。
函数的调用格式见“Append Code”。
-----------------------------------------------------------------------------
Invalid Word（禁用单词）错误：在解决这个题目时，某些关键词是不允许被使用的。如果提交的程序中包含了下列的关键词之一，就会产生这个错误。
被禁用的关键字：for, while, do, break, continue, goto。


## Input
非负整数n和k，k不超n的十进制位数，n不超int范围。


## Output
一个数字。


## Sample Input
```
31859 3

```
## Sample Output
```
8

```

## HINT
 可以使用递归解决

## Append Code
### append.c
```c
int main()
{
    int n, k;
    scanf("%d%d", &n, &k);
    printf("%d\n", digit(n, k));
}
```
### append.cc
```cpp
int main()
{
    int n, k;
    cin >> n >> k;
    cout << digit(n, k) << endl;
}
```
