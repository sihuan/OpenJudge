#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x,y,z,a,b,c,d;
    scanf("%d%d%d",&x,&y,&z);
    if(x>y)
    {
        a=x;x=y;y=a;
    }
    if(x>z)
    {
        b=x;x=z;z=b;
    }
    if (y>z)
    {
        c=y;y=z;z=c;
    }
printf("%d %d %d\n",x,y,z);
}

/**************************************************************
	Problem: 1018
	User: 201601160202
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

