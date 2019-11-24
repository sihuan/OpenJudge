#include<stdio.h>
int main()
{
    int a,b,c,d,e,f;
    scanf("%d",&a);
    b=100-a;
    c=b/20;
    d=(b-20*c)/10;
    e=(b-20*c-10*d)/5;
    f=(b-20*c-10*d-5*e)/1;
    printf("$20 bills: %d\n",c);
    printf("$10 bills: %d\n",d);
    printf(" $5 bills: %d\n",e);
    printf(" $1 bills: %d",f);
    return 0;
}
/**************************************************************
	Problem: 1013
	User: 201801020908
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

