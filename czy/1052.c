#include <stdio.h>
#include <math.h>

int main()
{
    int n=0,i,k,j;
    int a[1009],b[1009],temp[1009];
    int a1=0,b2=0;
    scanf("%d",&n);
    for(i=0;i<n;++i)
    {
        if(i==0)
        {
            scanf("%d",&a1);
            for(j=0;j<a1;++j)
            {
                scanf("%d",&a[j]);
            }
            continue;
        }
        scanf("%d",&b2);
        for(j=0;j<b2;++j)
        {
            scanf("%d",&b[j]);
        }
        if(a1>=b2)
        {
            for(j=0;j<b2;++j)
            {
                a[j]=a[j]+b[j];
            }
        }
        else
        {
            for(j=0;j<a1;++j)
            {
                a[j]=a[j]+b[j];
            }
            for(j=a1;j<b2;++j)
            {
                a[j]=b[j];

            }
            a1=b2;
        }
        int flag=0;
        for(k=0;k<a1;++k)
        {
            if(flag==0)
            {
                printf("%d",a[k]);
                flag=1;
            }
            else
            {
                printf(" %d",a[k]);
            }

        }
        printf("\n");
        for(k=0;k<b2;k++)
        {
            a[k]=b[k];
        }
        a1=b2;
    }
    int flag=0;
    for(k=0;k<a1;++k)
    {
        if(flag==0)
        {
            printf("%d",a[k]);
            flag=1;
        }
        else
        {
            printf(" %d",a[k]);
        }
    }
    printf("\n");

}

/**************************************************************
	Problem: 1052
	User: 201601160202
	Language: C
	Result: Accepted
	Time:28 ms
	Memory:748 kb
****************************************************************/

