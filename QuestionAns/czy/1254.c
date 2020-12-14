#include <stdio.h>
#include <string.h>
#define MAX_STR_LEN 100

double a[59][59];

int main()
{
    char b[1000];
    int n,m,kl;
    scanf("%d%d",&n,&m);
   // freopen("123.txt","w",stdout);
    getchar();
    char c[100];
    for(kl=0;kl<=m;++kl)
    {
        scanf("%s",c);
        if(kl != 0)
            printf("%7s",c);
        else
            printf("name    ");
    }
    printf("    sum\n");
    int i,l,k,j;

    for(i=0;i<n;++i)
    {
        double sum=0;
        scanf("%s",b);
        for(j=0;j<m;++j)
        {
            scanf("%lf",&a[i][j]);
            sum=sum+a[i][j];
        }
        printf("%-8s",b);
        printf("%7.1lf",a[i][0]);
        for(j=1;j<m;++j)
        {
            printf("%7.1lf",a[i][j]);
        }
        printf("%7.1lf\n",sum);

    }

    printf("average   ");
    for(k=0;k<m;++k)
    {
        double num=0;
            for(j=0;j<n;++j)
        {
            num=num+a[j][k];
        }
        if(k==0) printf("%5.1lf",num/n);
    else  printf("%7.1lf",num/n);
    }

}

/**************************************************************
	Problem: 1254
	User: 201601160202
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:772 kb
****************************************************************/

