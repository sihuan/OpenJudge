#include <stdio.h>
#include <string.h>

int main()
{
    int temp=0,n=0,m=0,sum=0,i,j,k;
  //  scanf("%d",&n);
    int a[20];
    while(scanf("%d",&n)!=EOF)
    {
        m=0;
        if(n==0)
        {
            printf("0\n");
            continue;
        }
        while(1)
        {
            if(n/2==0)
            {
               a[m]=n%2;
                break;
            }
            else
            {
                a[m]=n%2;
                m++;
                n=n/2;
            }
        }
        for(i=m;i>=0;--i)
        {
            printf("%d",a[i]);
        }
        printf("\n");
    }
}

/**************************************************************
	Problem: 1039
	User: 201601160202
	Language: C
	Result: Accepted
	Time:8 ms
	Memory:748 kb
****************************************************************/

