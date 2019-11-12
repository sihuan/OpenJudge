#include <stdio.h>
#include <math.h>
#include <string.h>
#define MAX_SIZE 1009

int a[1009][1009]={0};

int main()
{
    int n=0,i=0;
    while(scanf("%d",&n)!=EOF)
    {
        memset(a,0,sizeof(int));
        int j=0;
    for(i=0;i<n;++i,++j)
    {
        a[i][j]=1;
    }
    for(i=0;i<n;++i)
    {
        for(j=0;j<n;++j)
        {
            printf("%d",a[i][j]);
            if(j<n-1) printf(" ");
        }
        printf("\n");

    }
    printf("\n");
    }
}

/**************************************************************
	Problem: 1506
	User: 201601160202
	Language: C
	Result: Accepted
	Time:200 ms
	Memory:4724 kb
****************************************************************/

