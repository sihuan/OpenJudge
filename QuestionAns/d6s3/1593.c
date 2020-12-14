#include<stdio.h>
#include<string.h>

int main()
{
    int K,m,n,i,j,a,k=0;
    double lh[101];
    scanf("%d",&K);
    while(K--){
        scanf("%d %d",&m,&n);
        memset(lh,0.0,sizeof lh);
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                scanf("%d",&a);
                lh[j]+=a;
            }
        }
        printf("case %d:",++k);
        for(j=0;j<n;j++)
            if(j)
                printf(" %lg",lh[j]/m);
            else
                printf("%lg",lh[j]/m);
        printf("\n");
    }
}
/**************************************************************
	Problem: 1593
	User: 201901060610
	Language: C
	Result: Accepted
	Time:12 ms
	Memory:748 kb
****************************************************************/

