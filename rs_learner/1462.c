#include<stdio.h>
int main()
{
    int s[10001],i,n,a,b,j,count;
    scanf("%d",&n);
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&a);
        s[i]=a;
    }
    while(scanf("%d",&a)!=EOF)
    {
       for(i=0;i<=n-1;i++)
       {
           if(s[i]==a)
           {
               printf("%d",i+1);
               break;
           }
            else
                continue;
       }
       if(i==n)
        printf("NOT FOUND\n");
        else
        {
            for(j=i+1;j<=n-1;j++)
       {
           if(s[j]==a)
           {
               printf(" %d",j+1);
           }
       }
       printf("\n");
        }


    }
    return 0;
}
/**************************************************************
	Problem: 1462
	User: 201801020908
	Language: C
	Result: Accepted
	Time:44 ms
	Memory:748 kb
****************************************************************/

