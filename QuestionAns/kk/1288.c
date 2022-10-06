#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    printf("%d",a);
        while(a*c<=b)
    {
        a=a*c;
        printf(" %d",a);
    }
}
/**************************************************************
	Problem: 1288
	User: 202001060117
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

