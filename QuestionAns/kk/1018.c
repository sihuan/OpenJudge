#include<stdio.h>
int main()
{
    int a,b,c,d,f;
    scanf("%d%d%d",&a,&b,&c);
    if((a<=100)&&(a>=0)&&(b<=100)&&(b>=0)&&(c<=100)&&(c>=0))
    {


    if(a>b)
    {
        f=a;
        a=b;
        b=f;
    }
    if(a>c)
    {
        f=a;
        a=c;
        c=f;
    }
    if(b>c)
    {
        f=b;
        b=c;
        c=f;
    }
    printf("%d %d %d",a,b,c);
    }
    else ;
}
/**************************************************************
	Problem: 1018
	User: 202001060117
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

