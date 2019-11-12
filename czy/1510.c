#include <stdio.h>

int main()
{
    int m,n;
    int i,j=0,k,l;
    while(~scanf("%d%d",&m,&n))
    {
        int a[1009]={0};
        int nn=n;
        j=0;
        for(i=0;i<m-1;++i)
        {
            for(k=j;k<n;++k)
            {
                if(a[k%m]==1) ++n;
                if(k==n-1) a[k%m]=1;
            }
            j=k%m;
            n=j+nn;
        }
        for(l=0;l<m;++l)
        {
            if(a[l]==0)
            {
                printf("%d\n",l+1);
            }
        }
    }

}

/**************************************************************
	Problem: 1510
	User: 201601160202
	Language: C
	Result: Accepted
	Time:1440 ms
	Memory:748 kb
****************************************************************/

