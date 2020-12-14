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
    int outarr[109][109];
    int m=0,n=0;
    int ss=0;
    int pm=0,pn=0;
    while(1)
    {
        ss++;
        if(ss==1)
        {
            scanf("%d%d",&m,&n);
            if(m==0&&n==0) break;
            getarr(a,m,n);
            continue;
        }
        else
        {
            scanf("%d%d",&pm,&pn);
            if(pm==0&&pn==0) break;
            if(n==pm)
            {
                getarr(temp,pm,pn);
                int i=0,j=0,kl=0;
                for(i=0;i<m;++i)
                {
                    for(j=0;j<pn;++j)
                    {
                        int sum=0;
                        for(kl=0;kl<n;++kl)
                        {
                            sum=sum+a[i][kl]*temp[kl][j];
                        }
                        printf("%d",sum);
                        outarr[i][j]=sum;
                        if(j<pn-1) printf(" ");
                    }
                    printf("\n");
                }
                printf("\n");
                for(i=0;i<m;++i)
                {
                    for(j=0;j<pn;++j)
                    {
                        a[i][j]=outarr[i][j];
                    }
                }
                n=pn;
            }
            else
                {
                    //ss--;
                    getarr(a,pm,pn);
                    m=pm;n=pn;
                    printf("Not satisfied the definition of matrix multiplication!\n\n");
                }

        }

    }
    return 0;
}

/**************************************************************
	Problem: 1055
	User: 201601160202
	Language: C
	Result: Accepted
	Time:12 ms
	Memory:812 kb
****************************************************************/

