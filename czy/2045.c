#include <stdio.h>
#include <string.h>

//char a[1001][100];

void sort(double *a,int n)
{
    int i,j;
    for(i=0;i<n-1;++i)
    {
        for(j=0;j<n-i-1;++j)
        {
            if((int)a[j]>(int)a[j+1])
            {
                double temp;
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}

int main()
{
    double a[109];
    int i,m,n,k;
    scanf("%d",&m);
    for(k=0;k<m;++k)
    {
        scanf("%d",&n);
        for(i=0;i<n;++i) scanf("%lf",&a[i]);
        sort(a,n);
        int flag=0;
        for(i=0;i<n;++i)
        {
            if(flag==0) printf("%.1lf",a[i]);
            else printf(" %.1lf",a[i]);
            flag=1;
        }
        puts("");
    }

}

/**************************************************************
	Problem: 2045
	User: 201601160202
	Language: C
	Result: Accepted
	Time:12 ms
	Memory:748 kb
****************************************************************/

