#include<stdio.h>

int main()
{
    int m,a,i,sum,j,n;
    scanf("%d",&m);
    for(i=1;i<=m;i++){
        sum=0;
        scanf("%d",&n);
        for(j=1;j<=n;j++){
            scanf("%d",&a);
            if (a%2==0)
                sum+=a;
            else
                sum+=(a+1);
        }
        printf("Case %d: %d\n",i,sum);
    }
}

/**************************************************************
	Problem: 1420
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

