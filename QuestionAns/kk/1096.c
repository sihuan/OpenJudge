#include<stdio.h>
int main()
{
    int n,i,j;
    while(scanf("%d",&n)&&n!=0)
    {
        if(n%2==1)
            for(i=n; i>0; i--)
            {
                for(j=n-i;j>0;j--)
                    printf("%c",' ');
                for(j=1;j<=i;j++)
                    printf("%c",'+');
                for(j=1;j<i;j++)
                    printf("%c",'+');
                printf("\n");
            }
            if(n%2==0)
            for(i=1; i<=n; i++)
            {
                for(j=n-i;j>0;j--)
                    printf("%c",' ');
                for(j=1;j<=i;j++)
                    printf("%c",'+');
                for(j=1;j<i;j++)
                    printf("%c",'+');
                printf("\n");
            }
            printf("\n");

    }
}

/**************************************************************
	Problem: 1096
	User: 202001060117
	Language: C
	Result: Accepted
	Time:8 ms
	Memory:748 kb
****************************************************************/

