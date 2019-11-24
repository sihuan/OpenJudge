#include<string.h>
#include<stdio.h>
int main()
{
    char a[101];
    int i,j,n,m,sum=0;
    scanf("%d",&n);
    getchar();
    for(i=1;i<=n;i++)
    {
        sum=0;
        gets(a);
        m=strlen(a);
        for(j=0;j<=m;j++)
        {
            sum=sum+a[j];
        }
        if(sum%3==0)
            printf("Yes\n");
        else
            printf("No\n");
    }


    return 0;
}

/**************************************************************
	Problem: 1187
	User: 201801020908
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

