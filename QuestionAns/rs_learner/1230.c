#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int a,n,i,j,s[100],sum=0;
    scanf("%d",&n);
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&a);
        if(a>0)
            sum=sum+1;
        else
            continue;
    }
    printf("%d",sum);
    return 0;
}
/**************************************************************
	Problem: 1230
	User: 201801020908
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

