#include <stdio.h>

void Print(double n)
{
    printf("%.2lf ",n);
    if(n >= 40)
        printf("extra heavy");
    else if(n >= 30)
        printf("super heavy");
    else if(n >= 25)
        printf("heavy");
    else if(n >= 19)
        printf("health");
    else
        printf("lower");
    putchar('\n');
}
int main()
{
    double h,w;
    double n;
    while(scanf("%lf%lf",&h,&w) != EOF)
    {
        n = w*10000/h/h;
        Print(n);
    }
    return 0;
}

/**************************************************************
	Problem: 1219
	User: 201601011420
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

