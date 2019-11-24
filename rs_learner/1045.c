#include<stdio.h>
int main()
{
    int n,i,sum=0,x,m,j;
    //while(1)
    scanf("%d",&m);
    for(j=1;j<=m;j++)
    {
       scanf("%d",&n);
   // if(n!=0)
   // {
        for(i=1;i<=n;i++)
        {
            scanf("%d",&x);
            sum=sum+x;
        }
        printf("%d\n",sum);
        sum=0;
        printf("\n");

    //}
       // else
       //     break;
    }

    return 0;
}

/**************************************************************
	Problem: 1045
	User: 201801020908
	Language: C
	Result: Accepted
	Time:8 ms
	Memory:748 kb
****************************************************************/

