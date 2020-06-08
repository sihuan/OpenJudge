#include <stdio.h>
#include <stdlib.h>
void sort(int m,int n,int a[])
{
    int i,j,k=0;
    for(i=0;i<m;i++)
{
        for(j=0;j<n;j++)
    {
        if(j==0)
        printf("%2d",a[k]);
         else
     printf(" %2d",a[k]);
              k++;
    }
    putchar('\n');
}
}
int main()
{
    int t,q,m,n,i,j,k,a[1000];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {

        scanf("%d",&q);
        for(j=0;j<q;j++)
            scanf("%d",&a[j]);
        scanf("%d%d",&m,&n);
        if(i!=0)
       putchar('\n');
        sort(m,n,a);
    }
    return 0;
}

/**************************************************************
	Problem: 1770
	User: 201901060203
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

