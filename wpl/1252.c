#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d,e,f;
    scanf("%d",&a);
    b=a;
    c=--a;
    a=a+1;
    d=a--;
    a=a+1;
    e=a++;
    a=a-1;
    f=++a;
    printf("  a   : %d\n",b);
    printf("--a   : %d\n",c);
    printf("  a-- : %d\n",d);
    printf("  a++ : %d\n",e);
    printf("++a   : %d\n",f);
    return 0;
}

/**************************************************************
	Problem: 1252
	User: 201901060819
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

