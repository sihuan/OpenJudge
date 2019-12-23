# 编写函数：分数的乘法  (Append Code)
Time Limit: 1 Sec  Memory Limit: 128 MB


## Description
设有两个分数a/b和c/d，计算这两个分数的乘积，输出该乘积的最简分数形式。

分数乘法的运算方法：分数的分子与分子相乘，分母与分母相乘。

分子、分母只有公因数1的分数，或者说分子和分母互质的分数，叫做最简分数，又称既约分数。

-----------------------------------------------------------------------------

编写以下两个个函数完成程序：

原型：int scan_frac(struct fraction *f, struct fraction *g);

功能：按题目格式输入两个分数，存入f和g所指的内存中。

原型：struct fraction multiply_frac(struct fraction f, struct fraction g);

功能：返回分数f和g的乘积。

-----------------------------------------------------------------------------

“Append Code”中用到如下结构体定义：

struct fraction
{
    int numerator; // 分子
    int denominator; // 分母
    int symbol; // 符号，分子为负时取值为-1，为正时取值为1，其它取值无意义
};


## Input
输入为多行，直到EOF结束。每行为一组测试数据，形如“a/b*c/d”。

a/b为一个分数，a为分子，b为分母；其中，b为正整数，a为任意整数，a为负数时表示整个分数是负数，a为0时则整个分数为0。

c/d格式同a/b。


## Output
输出为多行，每行对应一个输入，为a/b和c/d的乘积，并且是该乘积的最简分数形式。

如果乘积为0，则输出只有一种形式：0。


## Sample Input
```
1/3*2/3
20/15*150/80
0/77*9/1
6/6*4/4
12/16*4/3
33/48*6/11
```
## Sample Output
```
2/9
5/2
0
1/1
1/1
3/8

```

## HINT
 scan_frac()函数返回EOF可以通过调用scanf()实现。

## Append Code
### append.c
```c
int main()
{
    struct fraction f1, f2, product;
    while(scan_frac(&f1, &f2) != EOF)
    {
        product = multiply_frac(f1, f2);
        if(product.numerator == 0)
        {
            printf("0\n");
            continue;
        }
        if(product.symbol == -1)
            printf("-");
        printf("%d/%d\n", product.numerator, product.denominator);
    }
    return 0;
}
```
