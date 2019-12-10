# 编写函数：复数的运算 (Append Code)
Time Limit: 1 Sec  Memory Limit: 2 MB


## Description
设有两个复数a+bi、c+di，它们的加减法运算定义为：
(a+bi)+(c+di)=(a+c)+(b+d)i
(a+bi)-(c+di)=(a-c)+(b-d)i
-----------------------------------------------------------------------------
编写以下四个函数完成程序：
原型：void get_cplx(struct CPLX *cx);
功能：按格式输入一个复数，存入cx所指的内存中。
原型：void put_cplx(struct CPLX cx);
功能：按格式输出一个复数。
原型：struct CPLX add_cplx(struct CPLX cx1, struct CPLX cx2);
功能：返回复数，其值为cx1+cx2。
原型：struct CPLX sub_cplx(struct CPLX cx1, struct CPLX cx2);
功能：返回复数，其值为cx1-cx2。
函数的调用格式见“Append Code”。

## Input
输入第一个整数n，表示后面有n组测试数据。每组测试数据包括两行，每行为一个复数的实部和虚部。



## Output
输出为多组，与输入顺序对应。每组为两行，第一行是两复数相加的结果，第二行是两复数相减的结果。每行输出一个复数的实部和虚部，用一个空格分隔。

## Sample Input
```
1
2 1
1 2

```
## Sample Output
```
3 3
1 -1
```

## HINT
 “Append Code”中用到的头文件、自定义类型的定义应自行补充。

## Append Code
### append.c
```c
int main()
{
    struct CPLX ab, cd;
    int cases;
    scanf("%d", &cases);
    while(cases--)
    {
        get_cplx(&ab);
        get_cplx(&cd);
        put_cplx( add_cplx(ab, cd) );
        put_cplx( sub_cplx(ab, cd) );
    }
    return 0;
}
```
