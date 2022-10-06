#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int num[n];
    for(i=0;i<n;i++)
        scanf("%d",&num[i]);
    int x,y;
    while(scanf("%d%d",&x,&y)!=EOF)
    {
        int temp;
        if(x>y)
        {
            temp=x;
            x=y;
            y=temp;
        }
        if(y<1||x>n)
            printf("OUT OF RANGE\n");
        else
        {
            if(x<1)x=1;
            if(y>n)y=n;
            for(i=x-1;i<=y-1;i++)
            {
                if(i==x-1)
                    printf("%d",num[i]);
                else
                    printf(" %d",num[i]);
            }
            printf("\n");
        }
    }
}

/**************************************************************
	Problem: 1468
	User: 202001060117
	Language: C
	Result: Accepted
	Time:36 ms
	Memory:748 kb
****************************************************************/

