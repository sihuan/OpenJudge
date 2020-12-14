#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>
#define MAX_STR_LEN 101
typedef struct fraction
{
    int numerator; // 分子
    int denominator; // 分母
    int symbol; // 符号，分子为负时取值为-1，为正时取值为1，其它取值无意义
}fff;

int flag=0;

int scan_frac(struct fraction *f, struct fraction *g)
{
    flag=0;
    int x=scanf("%d/%d*%d/%d",&f->denominator,&f->numerator,&g->denominator,&g->numerator);
    if(f->denominator<0 && g->denominator<0) return x;
    if(f->denominator<0 )
    {
        flag=1;
        f->denominator=-f->denominator;
    }
    if(g->denominator<0)
    {
        flag=1;
        g->denominator=-g->denominator;
    }
    return x;
}

int gcd(int a,int b)
{
    if(b>a) {int temp=a;a=b;b=temp;}
    while (b!=0)
    {


        //if(a%b==0) return b;
        a=a%b;
        if(b>a) {int temp=a;a=b;b=temp;}
    }
    return a;
}

struct fraction multiply_frac(struct fraction f, struct fraction g)
{
    fff aa;
    aa.denominator=f.denominator*g.denominator;
    aa.numerator=f.numerator*g.numerator;
    int x=gcd(aa.denominator,aa.numerator);
    aa.denominator=aa.denominator/x;
    aa.numerator=aa.numerator/x;
    int temp;
    temp=aa.denominator;
    aa.denominator=aa.numerator;
    aa.numerator=temp;
    if(flag==1) aa.symbol=-1;
    else aa.symbol=0;
    return aa;

};

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
	User: 201601160202
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

