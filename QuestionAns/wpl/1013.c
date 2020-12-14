#include <stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int a,b,c,d,e,f,g,x;
    scanf("%d",&x);
    e=100-x;
    a=e/20;
    f=e%20;
    b=f/10;
    g=f%10;
    c=g/5;
    d=g%5;
printf("$20 bills: %d\n",a);
printf("$10 bills: %d\n",b);
printf(" $5 bills: %d\n",c);
printf(" $1 bills: %d\n",d);
return 0;
}

/**************************************************************
	Problem: 1013
	User: 201901060819
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

