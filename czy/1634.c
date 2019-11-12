#include <stdio.h>
#define MAX_STR_LEN 109

int a[109][109];

int main()
{
    int m,n;
    //printf("%d",gcd(11,8));
    scanf("%d%d",&m,&n);
    int i,j,k,l;
    for(i=0;i<m;++i)
    {
        for(k=0;k<n;++k)
        {
            scanf("%d",&a[i][k]);
        }
    }
    char b[20];
    int mm,nn;
    while(~scanf("%s %d %d",b,&mm,&nn))
    {
        getchar();
        if(b[0]=='l')
        {
            int temp;
            int ii,kk;
            for(ii=0;ii<n;++ii)
            {
                    temp=a[mm][ii];
                    a[mm][ii]=a[nn][ii];
                    a[nn][ii]=temp;
            }
        }
        if(b[0]=='r')
        {
            int ii,temp;
            for(ii=0;ii<m;++ii)
            {
                temp=a[ii][nn];
                a[ii][nn]=a[ii][mm];
                a[ii][mm]=temp;
            }
        }
        int iii,kkk;
        for(iii=0;iii<m;++iii)
        {
            for(kkk=0;kkk<n;++kkk)
            {
                printf("%d",a[iii][kkk]);
                if(kkk<n-1) printf(" ");
            }
            puts("");
        }
        puts("");
    }
}

/**************************************************************
	Problem: 1634
	User: 201601160202
	Language: C
	Result: Accepted
	Time:36 ms
	Memory:792 kb
****************************************************************/

