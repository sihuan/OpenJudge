#include<stdio.h>
int main()
{
    int M,N;
    int i,j,k;
    scanf("%d",&M);
    for(i=0;i<M;i++)
    {
        scanf("%d",&N);
        int a[N],n;
        k=0;
        for(j=0;j<N;j++)
        {
            scanf("%d",&n);
            if(k==0)
            {
                a[k]=n;
                k++;
            }
            if(n>a[k-1])
            {
                a[k]=n;
                k++;
            }
        }
        for(j=0;j<k;j++)
        {
            if(j==0)
                printf("%d",a[j]);
            else
                printf(" %d",a[j]);
        }
        printf("\n");
    }
}

/**************************************************************
	Problem: 1176
	User: 202001060117
	Language: C
	Result: Accepted
	Time:12 ms
	Memory:748 kb
****************************************************************/

