#include<stdio.h>
int main()
{
    int a,i=10;

    scanf("%d",&a);
    for(;a%i!=a;i*=10);
    if(a*a%i-a==0)
        printf("YES");
    else printf("NO");
}
/**************************************************************
	Problem: 2118
	User: 202001060117
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

