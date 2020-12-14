#include<stdio.h>
int main()
{
    int h,m,s;
    while(scanf("%d:%d:%d",&h,&m,&s) != EOF)
        printf("%d\n",h*3600+m*60+s+1);
}

/**************************************************************
	Problem: 1455
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

