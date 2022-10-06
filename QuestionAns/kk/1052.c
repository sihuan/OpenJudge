#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int numl[1002],numd[1002],nums[1002];
    int N,M,s,i=0,j=0,k,temp,flag,times=0;
    memset(numl,0,sizeof(numl));
    memset(nums,0,sizeof(nums));
    memset(numd,0,sizeof(numd));
    scanf("%d",&M);
    flag=1;
    for(s=0; s<M; s++)
    {
        times++;
        scanf("%d",&N);

        if(flag==1)
        {
            for(i=0; i<N; i++)
                scanf("%d",&numl[i]);
            (i>j)?(temp=i):(temp=j);
            if(times>1)
                for(k=0; k<temp; k++)
                {
                    nums[k]=numl[k]+numd[k];
                    if(k==0)
                        printf("%d",nums[k]);
                    else
                        printf(" %d",nums[k]);
                }
            if(times>1)
                printf("\n");
            memset(numd,0,sizeof(numd));
            memset(nums,0,sizeof(nums));
            flag++;
            continue;
        }
        if(flag==2)
        {
            for(j=0; j<N; j++)
                scanf("%d",&numd[j]);
            (i>j)?(temp=i):(temp=j);
            for(k=0; k<temp; k++)
            {
                nums[k]=numl[k]+numd[k];
                if(k==0)
                    printf("%d",nums[k]);
                else
                    printf(" %d",nums[k]);
            }
            printf("\n");
            if(s+1<M)
                memset(numl,0,sizeof(numl));
            memset(nums,0,sizeof(nums));
            flag--;
        }

    }
    if(flag==2)
    {
        if(N!=0)
            for(k=0; k<N; k++)
            {
                if(k==0)
                    printf("%d",numl[k]);
                else
                    printf(" %d",numl[k]);
            }
        else
            printf("\n");
        printf("\n");

    }
    if(flag==1)
    {
        if(N!=0)
            for(k=0; k<N; k++)
            {
                if(k==0)
                    printf("%d",numd[k]);
                else
                    printf(" %d",numd[k]);
            }
        else
            printf("\n");
        printf("\n");

    }


    return 0;
}

/**************************************************************
	Problem: 1052
	User: 202001060117
	Language: C
	Result: Accepted
	Time:20 ms
	Memory:748 kb
****************************************************************/

