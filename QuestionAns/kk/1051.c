#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int numl[1002]={0},numd[1002]={0},nums[1002]={0};
    int M,s,i=0,j=0,k,flag,temp;
    flag=1;
    scanf("%d",&M);
    for(s=0;s<M;s++)
    {
        if(flag==1)
        {
            i=0;
            while(1)
            {
                scanf("%d",&numl[i]);

                if(numl[i]==0)
                    break;
                i++;
            }


            flag++;
            continue;

        }
        if(flag==2)
        {
            j=0;
            while(1)
            {
                scanf("%d",&numd[j]);

                if(numd[j]==0)
                    break;
                    j++;
            }

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
            for(k=0;k<i;k++)
            {
                if(k==0)
                    printf("%d",numl[k]);
                else
                    printf(" %d",numl[k]);
            }
    return 0;
}

/**************************************************************
	Problem: 1051
	User: 202001060117
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

