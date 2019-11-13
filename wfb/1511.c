#include <stdio.h>
#define SWAP(a,b,t) t=a; a=b; b=t;
struct fraction
{
    int numerator; // 分子
    int denominator; // 分母
    int symbol; // 符号，分子为负时取值为-1，为正时取值为1，其它取值无意义
};

void scan(struct fraction *f,int a,int b)
{
    if(a<0)
    {
        f->symbol = -1;
        f->numerator = -a;
    }
    else
    {
        f->symbol = 1;
        f->numerator = a;
    }
    f->denominator = b;
}
int scan_frac(struct fraction *f, struct fraction *g)
{
    int a,b,c,d;
    if(scanf("%d/%d*%d/%d",&a,&b,&c,&d)==EOF) return EOF;
    scan(f,a,b);
    scan(g,c,d);
    return 2;
}
int gcd(int a,int b)
{
    int t;
    while(a)
    {
        b %= a;
        SWAP(a,b,t);
    }
    return b;
}
struct fraction multiply_frac(struct fraction f, struct fraction g)
{
    struct fraction ans;
    ans.symbol = f.symbol*g.symbol;
    int a = f.numerator*g.numerator;
    int b = f.denominator*g.denominator;
    int x = gcd(a,b);
    ans.numerator = a/x;
    ans.denominator = b/x;
    return ans;
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
	User: 201601011420
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

