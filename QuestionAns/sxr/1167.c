#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,m;
    scanf("%d",&n);
    if(n>0)
    {
        printf("1");
        for(i=2;i<=n;i++)
            printf(" %d",i);
    }
    else if(n == 0)
         printf("0");
    else if(n<0)
    {
        printf("%d",n);
        m = n+1;
        while(m<=-1)
            {printf(" %d",m);
            m++;}
    }
    return 0;
}

/**************************************************************
	Problem: 1167
	User: 202001060915
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

