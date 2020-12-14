#include<stdio.h>
int main()
{
    int x,a,b,c,d;
    scanf("%d",&x);
    a=x/100;
    b=x/10-10*a;
    c=x-100*a-10*b;
    d=a*a*a+b*b*b+c*c*c;
    d==x?printf("YES"):printf("NO");
    return 0;
}

/**************************************************************
	Problem: 1012
	User: 201801020908
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

