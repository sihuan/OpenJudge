#include<stdio.h>
int main()
{
    int a,b,c,d,e,f;
    scanf("%d",&a);
    b=100-a;
    c=b/20;
    d=(b%20)/10;
    e=(b%10)/5;
    f=b%5;
    printf("$20 bills: %d\n",c);
    printf("$10 bills: %d\n",d);
    printf(" $5 bills: %d\n",e);
    printf(" $1 bills: %d",f);
}
/**************************************************************
	Problem: 1013
	User: 202001060117
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

