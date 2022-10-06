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
        int flag=0;
        for(i=0;i<n;i++)
        {
            if(num[i]==m)
            {
                flag++;
                if(flag==1)
                    printf("%d",i+1);
                else
                    printf(" %d",i+1);
            }
        }
        if(flag==0)
            printf("NOT FOUND");
        printf("\n");
    }
}

/**************************************************************
	Problem: 1462
	User: 202001060117
	Language: C
	Result: Accepted
	Time:48 ms
	Memory:748 kb
****************************************************************/

