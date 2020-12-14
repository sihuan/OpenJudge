#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>




int main()
{
    int n,i,k,j;
   // freopen("1.txt","r",stdin);
    while(scanf("%d",&n))
    {
        if(n==0) break;
        if(n%2==0)
        {
            for(i=1;i<=n;++i)
            {
                for(j=1;j<=n-i;++j) printf(" ");
                for(k=1;k<=1+(i-1)*2;++k) printf("+");
                printf("\n");
            }
            printf("\n");
        }
        if(n%2!=0)
        {
            for(i=n;i>=1;--i)
            {
                for(j=1;j<=n-i;++j) printf(" ");
                for(k=1;k<=1+(i-1)*2;++k) printf("+");
                printf("\n");
            }
            printf("\n");
        }
    }
    return 0;
}

/**************************************************************
	Problem: 1096
	User: 201601160202
	Language: C
	Result: Accepted
	Time:8 ms
	Memory:748 kb
****************************************************************/

