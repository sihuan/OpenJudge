#include <stdio.h>
#define MAX_STR_LEN 200

int main()
{
    int N,i,j,k,m,n;
    scanf("%d",&N);
  //  double sum[109];
  int a[109][109];
    for(i=0;i<N;++i)
    {
        double sum[109]={0};
        scanf("%d%d",&m,&n);
        for(j=0;j<m;++j)
        {
            for(k=0;k<n;++k)
            {
                scanf("%d",&a[j][k]);
            }
          //  sum[j]=sum[j]/m;
        }
        for(j=0;j<n;++j)
        {
            for(k=0;k<m;++k)
            {
                sum[j]=sum[j]+a[k][j];

            }
          //  printf("\n%lf\n",sum[j]);
            sum[j]=sum[j]/m;
           // printf("\n%lf\n",sum[j]);
        }
        printf("case %d:",i+1);
        int kl=0,flag=0;
        for(kl=0;kl<n;++kl)
        {
            if(flag==0) printf("%lg",sum[kl]);
            else printf(" %lg",sum[kl]);
            flag=1;
        }
        printf("\n");
    }

}

/**************************************************************
	Problem: 1593
	User: 201601160202
	Language: C
	Result: Accepted
	Time:12 ms
	Memory:748 kb
****************************************************************/

