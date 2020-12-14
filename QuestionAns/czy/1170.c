#include <stdio.h>
#include <stdlib.h>
#define MAX_STR_LEN 109



int main()
{
    int i=0;
    while(scanf("%d",&i)!=EOF)

   {
       int j,k;
    for(j=-i/2;j<=i/2;++j)
    {
        for(k=-i/2;k<=i/2;++k)
        {
            if(abs(j)+abs(k)==i/2) printf("*");
            else if(-j+k>i/2);
            else if(j+k>i/2);
            else printf(" ");
        }
        printf("\n");
    }
    printf("\n");
   }
}

/**************************************************************
	Problem: 1170
	User: 201601160202
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

