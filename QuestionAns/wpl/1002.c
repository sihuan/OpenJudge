#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,a,b,c,d,e,f,g;
    scanf("x = %d, y = %d",&x,&y);
    a=x+y;
    b=x-y;
    c=x*y;
    d=x/y;
    e=x%y;
    f=x*x;
    g=y*y*y;
    printf("x + y : %d\n",a);
    printf("x - y : %d\n",b);
    printf("x * y : %d\n",c);
    printf("x / y quotient: %d, remainder: %d\n",d,e);
    printf("x ^ 2 : %d\n",f);
    printf("y ^ 3 : %d\n",g);
    return 0;
}

/**************************************************************
	Problem: 1002
	User: 201901060819
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

