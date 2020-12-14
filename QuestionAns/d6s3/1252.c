#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    scanf("%d",&a);
    b=a,c=a,d=a,e=a;
    b=--b;
    e=++e;
    printf("  a   : %d\n",a);
    printf("--a   : %d\n",b);
    printf("  a-- : %d\n",c--);
    printf("  a++ : %d\n",d++);
    printf("++a   : %d\n",e);
}

/**************************************************************
	Problem: 1252
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

