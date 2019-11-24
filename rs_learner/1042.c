#include<stdio.h>
int main()
{
    int n,i,sum=0,x;
    while(scanf("%d",&n)!=EOF)
    {
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
	Problem: 1042
	User: 201801020908
	Language: C
	Result: Accepted
	Time:8 ms
	Memory:748 kb
****************************************************************/

