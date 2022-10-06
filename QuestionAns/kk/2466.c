#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d",&a);
    if((a<=999)&&(a>=100))
    {
        b=a/100;
        c=(a-100*b)/10;
        d=a-100*b-10*c;
    printf("%d,%d,%d",b,c,d);
    }
    else;
}

/**************************************************************
	Problem: 2466
	User: 202001060117
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

