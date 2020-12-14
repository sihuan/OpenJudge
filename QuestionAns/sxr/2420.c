#include<stdio.h>

int main()
{
    double k;
    long double s;
    while(scanf("%lf",&k)!=EOF)
    {
        s=k*(k+1)/2;
        printf("%.0Lf\n",s);
    }
    return 0;
}
/**************************************************************
	Problem: 2420
	User: 202001060915
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

