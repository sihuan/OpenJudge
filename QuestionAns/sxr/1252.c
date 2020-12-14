#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a,b,c,d,e;
    scanf("%d",&a);
    b=a;
    c=a;
    d=a;
    e=a;
    printf("  a   : %d\n",a);
    printf("--a   : %d\n",--b);
    printf("  a-- : %d\n",c--);
    printf("  a++ : %d\n",d++);
    printf("++a   : %d\n",++e);
    return 0;
}

/**************************************************************
	Problem: 1252
	User: 202001060915
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

