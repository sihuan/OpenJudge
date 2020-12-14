#include<stdio.h>
int main()
{
    int m,n,i,sum=0,x,j;
    scanf("%d",&m);
   for(j=1;j<=m;j++)
    {
        scanf("%d",&n);
       for(i=1;i<=n;i++)
       {
           scanf("%d",&x);
           sum=sum+x;
       }
            if(i>n)
            printf("%d\n",sum);
            sum=0;
    }



    return 0;
}

/**************************************************************
	Problem: 1043
	User: 201801020908
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

