#include<stdio.h>

int main()
{
    int x,m,y,i,j=0,k=0;
    int a[1010];
    int b[1010];
    scanf("%d",&m);
    for(i=0;i<m/2;i++)
    {
        j=0;
        k=0;
        while(scanf("%d",&x)!=EOF)
        {
            if(x==0)
                break;
            a[j]=x;
            j++;
        }
        while(scanf("%d",&x)!=EOF)
        {
            if(x==0)
                break;
            b[k]=x;
            k++;
        }
        if(j>=k)
        {
            for(y=0;y<k;y++)
                a[y]+=b[y];
            if(j!=0)
                printf("%d",a[0]);
            for(y=1;y<j;y++)
                printf(" %d",a[y]);
            printf("\n");
        }
        else
        {
            for(y=0;y<j;y++)
                b[y]+=a[y];
            printf("%d",b[0]);
            for(y=1;y<k;y++)
                printf(" %d",b[y]);
            printf("\n");
        }
    }
    if(m%2!=0)
    {
        j=0;
        while(scanf("%d",&x)!=EOF)
        {
            if(x==0)
                break;
            a[j]=x;
            j++;
        }
        if(j!=0)
            printf("%d",a[0]);
        for(k=1;k<j;k++)
            printf(" %d",a[k]);
        printf("\n");
    }
    return 0;
}

/**************************************************************
	Problem: 1051
	User: 202001060915
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

