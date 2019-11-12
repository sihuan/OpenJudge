#include<stdio.h>

int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d\n",a+b);
    while (scanf("%d%d",&a,&b) != EOF)
    {
        printf("\n%d\n",a+b);
    }
}

/**************************************************************
	Problem: 1023
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

