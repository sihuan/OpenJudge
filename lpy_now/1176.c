#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    int m;
    int s[1010];
    scanf("%d",&m);
    int i,j;
    for(i=1;i<=m;i++)
    {
        int k=0;
        scanf("%d %d",&n,&s[0]);
        for(j=1;j<n;j++)
        {
            int temp;
            scanf("%d",&temp);
            if(temp!=s[k])
                s[++k]=temp;
        }
        for(j=0;j<=k;j++)
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
	User: 201901061011
	Language: C
	Result: Accepted
	Time:12 ms
	Memory:748 kb
****************************************************************/

