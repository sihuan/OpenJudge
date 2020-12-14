#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,a,b;
    int c;
    while(scanf("%d",&a)!=EOF)
    {
        if(a==0)
            break;
        c=0;
        for(i=1;i<=a; i++)
        {
            scanf("%d",&b);
            c=c+b;
        }
           if(i==a+1)
    printf("%d\n",c);
    }

    return 0;
}
/**************************************************************
	Problem: 1044
	User: 201901060819
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

