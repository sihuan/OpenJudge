#include <stdio.h>
#include <math.h>
#include <string.h>
#define MAX_SIZE 1009

int a[109][109];

int main()
{
    int n=0,i=0;
    scanf("%d",&n);
    for(i=0;i<n;++i)
    {
        int m=0,n=0;
        scanf("%d%d",&m,&n);
        int k=0,j=0;
        for(k=0;k<m;++k)
        {
            for(j=0;j<n;++j)
            {
                scanf("%d",&a[j][k]);
            }
        }
        for(k=0;k<n;++k)
        {
            for(j=0;j<m;++j)
            {
                printf("%d",a[k][j]);
                if(j<m-1) printf(" ");
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}

/**************************************************************
	Problem: 1053
	User: 201601160202
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:844 kb
****************************************************************/

