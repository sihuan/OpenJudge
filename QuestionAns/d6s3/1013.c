#include<stdio.h>
int main()
{
    int a,b,b1,c,c1,d,e;
    scanf("%d",&a);
    a = 100-a;
    b = a/20;
    b1 = a%20;
    c = b1/10;
    c1 = b1%10;
    d = c1/5;
    e = c1%5;
    printf("$20 bills: %d\n$10 bills: %d\n $5 bills: %d\n $1 bills: %d\n",b,c,d,e);
}

/**************************************************************
	Problem: 1013
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

