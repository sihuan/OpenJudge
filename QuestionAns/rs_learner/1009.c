#include<stdio.h>
int main()
{
    int m,n,x;
    scanf("%d %d %d",&m,&n,&x);
    m*x>=n?printf("%.2lf",m*x*0.88):printf("%.2lf",(double)m*x);
    return 0;
}
/**************************************************************
	Problem: 1009
	User: 201801020908
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

