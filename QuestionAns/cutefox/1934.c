#include <stdio.h>
#include <stdlib.h>
int q[1000];
int find(int a[],int m)
{
    int max,j=0,i;
    max=a[0];
    for(i=0; i<m; i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }
    for(i=0; i<m; i++)
    {
        if(a[i]==max)
        {
            q[j]=i;
            j++;
        }
    }
    printf("Max = %d,Positions = ",max);
    for(i=0;i<j;i++)
    if(i==0)
        printf("%d",q[i]);
    else
        printf(" %d",q[i]);

    putchar('\n');
}
int main()
{
    int n,m,a[1000],i,j;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&m);
        for(j=0; j<m; j++)
            scanf("%d",&a[j]);
         find(a,m);
    }
    return 0;
}

/**************************************************************
	Problem: 1934
	User: 201901060203
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:752 kb
****************************************************************/

