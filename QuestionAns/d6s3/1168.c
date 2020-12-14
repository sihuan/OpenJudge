#include<stdio.h>
int main()
{
    int a,i=1,n;
    long long p,q,j;
    scanf("%d",&n);
    while (i<=n){
        scanf("%lld%lld",&p,&q);
        if (p==q){
            printf("%lld",p);
            printf("\n\n");
        }
        else{
            if (p>q){
                printf("%lld",q);
                for (j=q+1;j<=p;j++)
                    printf(" %lld",j);
            }
            else{
                printf("%lld",p);
                for (j=p+1;j<=q;j++)
                    printf(" %lld",j);
            }
            printf("\n\n");
        }
    i++;
    }
}

/**************************************************************
	Problem: 1168
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

