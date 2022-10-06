#include<stdio.h>
int add(int a,int b)
{
    int c;
    c=a+b;
    return c;
}
int sub(int a,int b)
{
    int c;
    c=a-b;
    return c;
}
int mul(int a,int b)
{
    int c;
    c=a*b;
    return c;
}
double div(int a,int b)
{
    double c;
    c=(double)a/b;
    return c;
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d + %d = %d\n", a, b, add(a, b));
    printf("%d - %d = %d\n", a, b, sub(a, b));
    printf("%d * %d = %d\n", a, b, mul(a, b));
    printf("%d / %d = %lg\n", a, b, div(a, b));
    return 0;
}

/**************************************************************
	Problem: 2294
	User: 202001060117
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

