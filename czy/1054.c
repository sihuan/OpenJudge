#include <stdio.h>
#include <math.h>

int getarr(int a[][109],int m,int n)
{
    int i=0,j=0;
    for(i=0;i<m;++i)
    {
        for(j=0;j<n;++j)
        {
            scanf("%d",&a[i][j]);
        }
    }
}

int main()
{
    int a[109][109];
    int temp[109][109];
    int m=0,n=0;
    int ss=0;
    int pm=0,pn=0;
    while(1)
    {
        ss++;
        scanf("%d%d",&m,&n);
        if(m==0&&n==0) break;
        if(ss%2!=0)
        {
            getarr(a,m,n);
            pm=m;pn=n;
            continue;
        }
        else
        {
            if(pm==m && pn==n)
            {
                getarr(temp,m,n);
                int i=0,j=0;
                for(i=0;i<m;++i)
                {
                    for(j=0;j<n;++j)
                    {
                        printf("%d",a[i][j]+temp[i][j]);
                        if(j<n-1) printf(" ");
                    }
                    printf("\n");
                }
                printf("\n");
            }
            else
                {
                    getarr(temp,m,n);
                    printf("Not satisfied the definition of matrix addition!\n\n");
                }

        }

    }
    return 0;
}

/**************************************************************
	Problem: 1054
	User: 201601160202
	Language: C
	Result: Accepted
	Time:16 ms
	Memory:764 kb
****************************************************************/

