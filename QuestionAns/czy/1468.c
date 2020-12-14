#include <stdio.h>
#define MAX_SIZE 200


int main()
{
    int n;
    scanf("%d",&n);
    int aa[10009];
    int i,k,j,l;
    for(i=1;i<=n;++i)
    {
        scanf("%d",&aa[i]);
    }
    int a,b;
    while(scanf("%d%d",&a,&b)!=EOF)
    {
        if(b<a)
        {
            int temp;
            temp=b;
            b=a;
            a=temp;
        }
        if(a>n||b<1) printf("OUT OF RANGE");
        if(b>n) b=n;
        if(a<1) a=1;
        int flag=0;
        for(j=a;j<=b;++j)
        {
            if(flag==0) printf("%d",aa[j]);
            else printf(" %d",aa[j]);
            flag=1;
        }
        puts("");
    }
}

/**************************************************************
	Problem: 1468
	User: 201601160202
	Language: C
	Result: Accepted
	Time:36 ms
	Memory:748 kb
****************************************************************/

