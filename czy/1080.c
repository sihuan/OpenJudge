#include <stdio.h>
#include <string.h>
#define MAX_STR_LEN 100
int main()
{
    int i,l,m,n,k,j;
    int a[200000],b[200000];
    scanf("%d",&n);
    //freopen("123.txt","w",stdout);
    for(i=0;i<n;++i)
    {
        double sum=0;
        scanf("%d",&m);
        for(j=0;j<m;++j)
        {
            scanf("%d",&a[j]);
            sum=sum+a[j];
        }
        sum=sum/m;
        int num=0;
        for(k=0;k<m;++k)
        {
            if(a[k]==sum)
            {
                b[num]=k+1;
                num++;
            }
        }
        if(num==0)
        {
            printf("0\n");
            continue;
        }
        printf("%d\n",num);
            int flag=0;
        for(k=0;k<num;++k)
        {
            if(flag==0) printf("%d",b[k]);
        else
            printf(" %d",b[k]);
            flag=1;
        }
        printf("\n");
    }
}

/**************************************************************
	Problem: 1080
	User: 201601160202
	Language: C
	Result: Accepted
	Time:28 ms
	Memory:2236 kb
****************************************************************/

