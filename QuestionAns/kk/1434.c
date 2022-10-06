#include<stdio.h>
#include<string.h>
void input(int n,double sqr[][n+1])
{
    for(int i=0;i<n;i++)
        for(int j=0;j<n+1;j++)
            scanf("%lf",&sqr[i][j]);
}
void check(int n,double sqr[][n+1])
{
    double temp;
    int temp2;
    for(int i=0;i<n;i++)
    {
        if(sqr[i][i]==0)
        {
            for(int j=i+1;j<n;j++)
                if(sqr[j][i]!=0)
                {
                    for(int k=0;k<n+1;k++)
                    {
                        temp=sqr[i][k];
                        sqr[i][k]=sqr[j][k];
                        sqr[j][k]=temp;
                    }
                }
        }
    }
}
void calculate(int n,double sqr[][n+1])
{
    double x[n];
    for(int i=0;i<0;i++)
        x[i]=sqr[i][i];
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n+1;j++)
        {
//            printf("%lf  ",sqr[i][j]);
            sqr[i][j]/=sqr[i][i];
//            printf("%lf\n",sqr[i][j]);
        }
        sqr[i][i]=1;
//        printf("%lf\n",sqr[i][0]);
        for(int j=0;j<n;j++)
        {
            if(j==i)
                continue;
            double m;
            m=sqr[j][i];
            for(int k=i;k<n+1;k++)
                sqr[j][k]=sqr[j][k]-sqr[i][k]*m;
        }
//        for(int j=0;j<n;j++)
//            printf("%lf  ",sqr[j][n]);
//        printf("\n");
    }
//    for(int i=0;i<n;i++)
//        sqr[i][n]/=x[i];
}
void output(int n,double sqr[][n+1])
{
    for(int i=0;i<n;i++)
        printf("x%d=%.3lf\n",i+1,sqr[i][n]);
//    for(int i=0;i<n;i++)
//    {
//        for(int j=0;j<n+1;j++)
//            printf("%.3lf  ",sqr[i][j]);
//        printf("\n");
//    }
}
int main()
{
    int N;
    scanf("%d",&N);
    for(int k=0;k<N;k++)
    {
        int n;
        scanf("%d",&n);
        double sqr[n][n+1];
        input(n,sqr);
        check(n,sqr);
        calculate(n,sqr);
        if(k!=0)
            printf("\n");
        output(n,sqr);
    }
}

/**************************************************************
	Problem: 1434
	User: 202001060117
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

