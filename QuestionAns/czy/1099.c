#include <stdio.h>
#include <string.h>

int main()
{
    int temp=0,n=0,m=0,sum=0,i,j,k;
    scanf("%d",&n);
    int a[2000];
    for(i=0;i<n;++i)
    {
        scanf("%d",&a[i]);
    }
    for(j=0;j<n-1;j++)
    {
        for(i=j+1;i<n;++i)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("%d",a[0]);
    for(i=1;i<n;++i)
    {
        printf(" %d",a[i]);
    }
    return 0;
}

/**************************************************************
	Problem: 1099
	User: 201601160202
	Language: C
	Result: Accepted
	Time:16 ms
	Memory:748 kb
****************************************************************/

