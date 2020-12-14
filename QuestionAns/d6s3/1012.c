#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d",&d);
    a = d/100;
    b = (d%100)/10;
    c = (d%100)%10;
    if ((a*100+b*10+c) == (a*a*a+b*b*b+c*c*c))
        printf("YES");
    else
        printf("NO");
}

/**************************************************************
	Problem: 1012
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

