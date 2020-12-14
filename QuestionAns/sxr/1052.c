#include<stdio.h>

int main()
{
    int x,y,i,j,m;
    int flag=0;
    int a[1010];
    int b[1010];
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {
        if(flag==0)
        {
            scanf("%d",&x);
            for(j=0;j<x;j++)
                scanf("%d",&a[j]);
            scanf("%d",&y);
            for(j=0;j<y;j++)
                scanf("%d",&b[j]);
            flag=1;
        }
        else
        {
            x=y;
            for(j=0;j<x;j++)
                a[j]=b[j];
            if(i==m-1)
                y=0;
            else
            {
                scanf("%d",&y);
                for(j=0;j<y;j++)
                scanf("%d",&b[j]);
            }
        }
        if(y<=x)
            {
                for(j=0;j<y;j++)
                    a[j]+=b[j];
                if(x!=0)
                    printf("%d",a[0]);
                for(j=1;j<x;j++)
                    printf(" %d",a[j]);
                printf("\n");
            }
         else
         {
            for(j=0;j<x;j++)
                a[j]+=b[j];
            if(x!=0)
            {
                printf("%d",a[0]);
                for(j=1;j<x;j++)
                    printf(" %d",a[j]);
                for(j=x;j<y;j++)
                    printf(" %d",b[j]);
            }
            else
            {
                printf("%d",b[0]);
                for(j=1;j<y;j++)
                    printf(" %d",b[j]);
            }
            printf("\n");
         }
    }
    return 0;
}

/**************************************************************
	Problem: 1052
	User: 202001060915
	Language: C
	Result: Accepted
	Time:20 ms
	Memory:748 kb
****************************************************************/

