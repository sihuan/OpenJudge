#include<stdio.h>
int main()
{
    int k,i,j,c,n,m,flag=0;
    scanf("%d",&k);
    for(i=1;i<=k;i++)
    {
        scanf("%d %d",&n,&m);
        for(j=0;j<=n;j++)
        {
            if(j*4+2*(n-j)==m)
            {
                 printf("%d %d\n",n-j,j);
                break;
            }
            else
                continue;
        }
        if(j>n)
            printf("no result\n");
    }
    return 0;
}
/**************************************************************
	Problem: 1763
	User: 201801020908
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

