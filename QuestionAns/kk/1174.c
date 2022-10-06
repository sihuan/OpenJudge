#include<stdio.h>
int main()
{
    int M,N,R;
    int i,j,k;
    int num[1000],stor[1000];
    scanf("%d",&M);
    for(i=0;i<M;i++)
    {
        scanf("%d",&N);
        if(N==0)
        {
            printf("\n");
            continue;
        }
        scanf("%d",&R);
        R=R%N;
        if(R<0)
            R+=N;
        for(j=0;j<N;j++)
            scanf("%d",&num[j]);
        for(k=0;k<N-R;k++)
            stor[k+R]=num[k];
        for(k=0;k<R;k++)
            stor[k]=num[N-R+k];
        for(k=0;k<N;k++)
        {
            if(k==0)
                printf("%d",stor[k]);
            else
                printf(" %d",stor[k]);
        }
        printf("\n");
    }
}

/**************************************************************
	Problem: 1174
	User: 202001060117
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

