#include<stdio.h>
int main()
{
    int n;
    int m;
    int s[1001];
    scanf("%d",&m);
    for(int i=1;i<=m;i++)
    {
        int k=0;
        scanf("%d %d",&n,&s[0]);
        for(int j=1;j<n;j++)
        {
            int temp;
            scanf("%d",&temp);
            if(temp!=s[k])
                s[++k]=temp;
        }
        for(int j=0;j<=k;j++)
            if(j==0)
            printf("%d",s[0]);
        else
            printf(" %d",s[j]);
        printf("\n");
    }
    return 0;
}

/**************************************************************
	Problem: 1176
	User: 201901060203
	Language: C
	Result: Accepted
	Time:12 ms
	Memory:748 kb
****************************************************************/

