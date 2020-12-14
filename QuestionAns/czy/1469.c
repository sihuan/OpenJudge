#include <stdio.h>
#include <string.h>

int main()
{
    int temp=0,n=0,m=0,sum=0,i,j,k;
  //  scanf("%d",&n);
    int a[300000];
    scanf("%d",&n);
    int max=0;
    memset(a,0,sizeof(a));
    for(i=0;i<n;++i)
    {
        scanf("%d",&temp);
        a[temp]++;
        if(a[temp]>max) max=a[temp];
    }

    printf("%d\n",max);

}

/**************************************************************
	Problem: 1469
	User: 201601160202
	Language: C
	Result: Accepted
	Time:68 ms
	Memory:1848 kb
****************************************************************/

