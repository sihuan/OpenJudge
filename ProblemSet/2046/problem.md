# 编写函数：转换大小写(Append Code)
Time Limit: 1 Sec  Memory Limit: 128 MB


## Description
编写一个函数，将大写字母转换为小写，或小写字母转换为大写。
-----------------------------------------------------------------------------
用C语言实现：append.c中函数原型为
char cnvchar(char c);
功能：若c是一个大写字母，转换为对应的小写字母，反之亦然。
用C++实现：append.cc中函数原型为
char cnvchar(char c);
功能：若c是一个大写字母，转换为对应的小写字母，反之亦然。
函数的调用格式见“Append Code”。


## Input
输入一个字符c，可以保证c必为一个字母。


## Output
输出也是一个字符，c为大写字母，则输出对应的小写字母，反之亦然。


## Sample Input
```
A
```
## Sample Output
```
a
```

## HINT


## Append Code
### append.c
```c
int main()
{
    char ch;
    ch = getchar();
    ch = cnvchar(ch);
    putchar(ch);
    return 0;
}
```
### append.cc
```cpp
int main()
{
    char ch;
    ch = getchar();
    ch = cnvchar(ch);
    putchar(ch);
    return 0;
}
```
