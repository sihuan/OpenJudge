#include<stdio.h>
int main()
{
    int j,a[200005],i,n,c,max;
    scanf("%d",&n);
    getchar();
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&c);
        getchar();
        a[c]=a[c]+1;
    }
    max=a[0];
    for(i=1;i<=n-1;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    printf("%d",max);
    return 0;
}
/**************************************************************
	Problem: 1469
	User: 201801020908
	Language: C
	Result: Accepted
	Time:80 ms
	Memory:1456 kb
****************************************************************/

