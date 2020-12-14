#include <stdio.h>
int main()
{
    int n,i,j,t,a[1000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=1;j<n;j++)
    {
        for(i=0;i<n-j;i++)
        {
            if(a[i]>a[i+1])
            {
                t=a[i];
                a[i]=a[i+1];
                a[i+1]=t;
            }

        }
    }
            printf("%d",a[0]);
              for(i=1;i<n;i++)
            {
               printf(" %d",a[i]);
            }
    return 0;


}

/**************************************************************
	Problem: 1099
	User: 201901100103
	Language: C
	Result: Accepted
	Time:16 ms
	Memory:748 kb
****************************************************************/

