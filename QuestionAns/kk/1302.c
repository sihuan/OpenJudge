#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int a,b,c;
    double p,s;
    while(scanf("%d%d%d",&a,&b,&c)!=EOF)
    {
        s=sqrt((a+b+c)/2.0*(a+b-c)/2.0*(a+c-b)/2.0*(b+c-a)/2.0);
        printf("%.2lf\n",s);
    }
}

/**************************************************************
	Problem: 1302
	User: 202001060117
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:756 kb
****************************************************************/

