#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,i=1;
    char x,y;
    while(scanf("%d %c %c %d %d",&a,&x,&y,&b,&c)!=EOF)
    {
        for(i=1;i<=c;i++)
    printf("%d%02d%02d%02d%02d\n",a,x-64,y-64,b,i);}
    return 0;
}

/**************************************************************
	Problem: 1425
	User: 201901060819
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

