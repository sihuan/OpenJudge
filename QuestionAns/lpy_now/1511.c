#include<stdio.h>

struct fraction{
    int numerator,denominator;
    int symbol;
};

int gcd(int n,int m){
    if(m==0){
        return n;
    }
    return gcd(m,n%m);
}
int abs(int n){
    if(n<0){
        return -n;
    }
    return n;
}
int scan_frac(struct fraction *f1,struct fraction *f2){
    int a;
    a=scanf("%d/%d*%d/%d",&f1->numerator,&f1->denominator,&f2->numerator,&f2->denominator);
    return a;
}
struct fraction multiply_frac(struct fraction f1,struct fraction f2){
    struct fraction F;
    F.numerator=f1.numerator*f2.numerator,F.denominator=f1.denominator*f2.denominator;
    F.symbol=1;
    if(F.numerator<0 || F.denominator<0){
        F.symbol=-1;
    }
    F.numerator=abs(F.numerator),F.denominator=abs(F.denominator);
    int G=gcd(F.denominator,F.numerator);
    F.denominator/=G,F.numerator/=G;
    return F;
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
	User: 201901061011
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

