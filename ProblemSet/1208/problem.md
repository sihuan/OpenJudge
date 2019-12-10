# 编写函数：Swap (II) (Append Code)
Time Limit: 1 Sec  Memory Limit: 2 MB


## Description


编写用来交换两段连续存储空间的函数，使得“Append Code”中的main()函数能正确运行。
-----------------------------------------------------------------------------
编写一个函数swap_any()用来进行交换：
原型：int swap_any(void *s, void *t, unsigned n);
功能：前两个参数（指针s和指针t）分别标记出两处连续存储区域的起始地址，交换自s和t中地址开始的连续n个字节。
函数的调用格式见“Append Code”。
-----------------------------------------------------------------------------
Invalid Word（禁用单词）错误：在解决这个题目时，某些关键词是不允许被使用的。如果提交的程序中包含了下列的关键词之一，就会产生这个错误。
宏定义define被禁用。




## Input
 测试数据分4四组，每组占2行，为两个相互交换的同类型数据。这四组测试数据分别为：2个不超过100个字符的串、2个单字符、2个整数和2个浮点数。

## Output
 输出为4行，将2个同类型的数据交换后输出，用一个空格分开。

## Sample Input
```
3
5
3
5
3
5
3
5

```
## Sample Output
```
5 3
5 3
5 3
5 3

```

## HINT
 这里可能用到库函数malloc()和memcpy()。

## Append Code
### append.c
```c
int main()
{
    int a, b;
    double x, y;
    char c, d;
    char s[1001], t[1001];

    gets(s);
    gets(t);
    swap_any(s, t, sizeof(s));
    printf("%s %s\n", s, t);

    c = getchar();
    getchar();
    d = getchar();
    getchar();
    swap_any(&c, &d, sizeof(char));
    printf("%c %c\n", c, d);

    scanf("%d %d", &a, &b);
    swap_any(&a, &b, sizeof(int));
    printf("%d %d\n", a, b);

    scanf("%lf %lf", &x, &y);
    swap_any(&x, &y, sizeof(double));
    printf("%lg %lg\n", x, y);
}

```
