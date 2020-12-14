#include<stdio.h>
int main()
{
    int i,k;
    double s=0;
    scanf("%d",&k);
    double ll[k];
    for(i=0;i<k;i++)
        scanf("%lf",&ll[i]);
    for(i=0;i<k;i++)
        s += ll[i];
    printf("%.3lf",s/k);
}

/**************************************************************
	Problem: 1416
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

