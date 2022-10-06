#include<stdio.h>
int main()
{
    int h,m,s,r,n;
    while(scanf("%d:%d:%d",&h,&m,&s)!=EOF)
    {
       r=h*3600+m*60+s;
       n=r+1;
       printf("%d\n",n);
    }
}

/**************************************************************
	Problem: 1455
	User: 202001060117
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

