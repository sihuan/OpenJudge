#include <stdio.h>
#include <string.h>
int main()
{
    int a[1001]={0};
    int b[1001]={0};
    int c[1001]={0};
    int i,j,k=0;
    int d;
    int s;
    while(scanf("%d",&d)!=EOF)
    {
        k++;
        if(k%2!=0)
        {
            for(i=0; i<d; i++)
                scanf("%d",&a[i]);
        }
        else
        {
            for(j=0; j<d; j++)
                scanf("%d",&b[j]);
        }
        if(k%2==0)
        {
            if(i>j)
            {
                for(s=0; s<i; s++)
                {
                    c[s]=a[s]+b[s];
                }
                for(s=0; s<i; s++)
                {
                    if(s==0)
                    printf("%d",c[0]);
                    else
                    printf(" %d",c[s]);
                }
                printf("\n");
                memset(a,0,sizeof(a));
                memset(b,0,sizeof(b));
                memset(c,0,sizeof(c));
            }
            else
            {
                for(s=0; s<j; s++)
                {
                    c[s]=a[s]+b[s];
                }
                for(s=0; s<j; s++)
                {
                    if(s==0)
                    printf("%d",c[0]);
                    else
                    printf(" %d",c[s]);
                }
                printf("\n");
                memset(a,0,sizeof(a));
                memset(b,0,sizeof(b));
                memset(c,0,sizeof(c));
            }
        }
    }
    if(d!=0&&k%2==1)
        for(s=0; s<i; s++)
        {
            if(s==0)
                printf("%d",a[s]);
            else
                printf(" %d",a[s]);
        }
        printf("\n");
    if(d==0&&k%2==1)
        printf("\n");
}

/**************************************************************
	Problem: 1050
	User: 201801020908
	Language: C
	Result: Accepted
	Time:24 ms
	Memory:748 kb
****************************************************************/

