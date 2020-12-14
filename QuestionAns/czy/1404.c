#include <stdio.h>
#include <stdlib.h>

int main()
{
int a,b,c,d,e,f,g;
scanf("%d%d%d%d",&a,&b,&c,&d);
scanf("%d%d%d",&e,&f,&g);
if(e>=a && f>=b && g>=c && (e+f+g)>=d)
{
    printf("congratulations\n");
}
else
{
    printf("sorry\n");
}
}

/**************************************************************
	Problem: 1404
	User: 201601160202
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

