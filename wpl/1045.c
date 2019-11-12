#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int i,a,b,d;
    int c;
    scanf("%d",&d);
    for(i=1;i<=d;i++)
    {
 
 
    while(scanf("%d",&a)!=EOF)
    {
        c=0;
        for(i=1;i<=a; i++)
        {
            scanf("%d",&b);
            c=c+b;
 
        }if(i==a+1)
    printf("%d\n",c);
    printf("\n");
    }
 
    }
 
    return 0;
}
/**************************************************************
	Problem: 1045
	User: 201901060819
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

