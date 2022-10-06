#include<stdio.h>
int main()
{
    double sum=0,a;
    int i=0;
    while(scanf("%lf",&a)!=EOF)
    {
        sum+=a;
        i++;
    }
    printf("%.3lf",sum/(double)i);
}
/**************************************************************
	Problem: 1417
	User: 202001060117
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

