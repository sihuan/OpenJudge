# 递归求倒序数二（Append Code）
Time Limit: 1 Sec  Memory Limit: 2 MB


## Description
         给出一个无符号整数n<264，求出n的倒序数字。
 
         请根据“Append Code”完成程序。append.c中将n输入到一个字符串num中，调用了一个函数rev (num, i)，用来倒转输出数字n，其中i为串的下标。用C语言或C++编写自定义类型和函数实现，函数的原型为：
                  int rev(char s[], int i);
         函数的调用格式见“Append Code”。
         -----------------------------------------------------------------------------
         Invalid Word（禁用单词）错误：在解决这个题目时，某些关键词是不允许被使用的。如果提交的程序中包含了下列的关键词之一，就会产生这个错误。

         被禁用的关键字：for, while, do, break, continue, goto。


## Input
         输入一个小于264的无符号整数n。





## Output
         输出n的倒序数。


## Sample Input
```
110
```
## Sample Output
```
011
```

## HINT


## Append Code
### append.c
```c
int main()
{
    char num[MAX_LEN];
    gets(num);
    rev(num, 0);
}

```
