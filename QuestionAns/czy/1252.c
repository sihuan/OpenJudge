#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=0;
    scanf("%d",&a);
    int b,c,d,e;
    b=a;c=a;d=a;e=a;
    printf("  a   : %d\n",a);
    printf("--a   : %d\n",--b);
    printf("  a-- : %d\n",c--);
    printf("  a++ : %d\n",d++);
    printf("++a   : %d\n",++e);
    return 0;
}

/**************************************************************
	Problem: 1252
	User: 201601160202
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

