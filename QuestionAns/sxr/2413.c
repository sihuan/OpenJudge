#include <stdio.h>
#include <stdlib.h>


int main()
{
    int s[110];
    int n,i,a;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a);
        s[i]=a;
    }
    for(i=n;i>1;i--)
    {
        printf("%d ",s[i]);
    }
    printf("%d",s[1]);
    return 0;
}

/**************************************************************
	Problem: 2413
	User: 202001060915
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

