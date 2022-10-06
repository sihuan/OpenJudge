#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int num[n];
    for(i=0;i<n;i++)
        scanf("%d",&num[i]);
    int m;
    while(scanf("%d",&m)!=EOF)
    {
        i=n-1;
        while(num[i]!=m&&i>=0)
            i--;
        if(i>=0)
            printf("%d\n",i+1);
        else
            printf("NOT FOUND\n");
    }
}

/**************************************************************
	Problem: 1460
	User: 202001060117
	Language: C
	Result: Accepted
	Time:16 ms
	Memory:748 kb
****************************************************************/

