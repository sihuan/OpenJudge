#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int numl[1000]={0},numd[1000]={0},nums[1000]={0};
    int N,i,j,k,flag,temp;
    flag=1;
    while(scanf("%d",&N)!=EOF)
    {
        if(flag==1)
        {
            for(i=0;i<N;i++)
                scanf("%d",&numl[i]);
            flag++;
            continue;

        }
        if(flag==2)
        {
            for(j=0;j<N;j++)
                scanf("%d",&numd[j]);
            (i>j)?(temp=i):(temp=j);
            for(k=0;k<temp;k++)
            {
                nums[k]=numl[k]+numd[k];
                if(k==0)
                    printf("%d",nums[k]);
                else
                    printf(" %d",nums[k]);
            }
            printf("\n");
            memset(numl,0,sizeof(numl));
            memset(numd,0,sizeof(numd));
            memset(nums,0,sizeof(nums));
            flag--;

        }

    }
    if(flag==2)
            for(k=0;k<N;k++)
            {
                if(k==0)
                    printf("%d",numl[k]);
                else
                    printf(" %d",numl[k]);
            }
    return 0;
}

/**************************************************************
	Problem: 1050
	User: 202001060117
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

