#include <stdio.h>
#include <stdlib.h>

struct fraction {
    int numerator; // 分子
    int denominator; // 分母
    int symbol; // 符号，分子为负时取值为-1，为正时取值为1，其它取值无意义
};

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

int scan_frac(struct fraction* f, struct fraction* g)
{
    return scanf("%d/%d*%d/%d", &(f->numerator), &(f->denominator), &(g->numerator), &(g->denominator));
}

struct fraction multiply_frac(struct fraction f, struct fraction g)
{
    struct fraction jg;
    int gbs;
    jg.numerator = f.numerator * g.numerator;
    jg.denominator = f.denominator * g.denominator;
    if (jg.numerator < 0 || jg.denominator < 0) {
        jg.symbol = -1;
        jg.numerator = abs(jg.numerator);
        jg.denominator = abs(jg.denominator);
    } else
        jg.symbol = 1;
    gbs = gcd(jg.numerator, jg.denominator);
    jg.numerator /= gbs;
    jg.denominator /= gbs;
    return jg;
}


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
/**************************************************************
	Problem: 1511
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

