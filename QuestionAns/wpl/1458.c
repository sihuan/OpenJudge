#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    scanf("%d",&N);
    int a[N];
    int i,j;
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
    while(scanf("%d",&j)!=EOF)
    {
        if(j<=N)
        {
            printf("%d\n",a[j-1]);
        }
        else
        {
            printf("OUT OF RANGE\n");
        }
    }
    return 0;
}

/**************************************************************
	Problem: 1458
	User: 201901060819
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

