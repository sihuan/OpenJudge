#include<stdio.h>
int main()
{
    int n,a,j,h,i,k,m;
    scanf("%d",&n);
    int ar[n];
    for(j=0;j<n;j++){
        scanf("%d",&a);
        ar[j]=a;
    }
    while(scanf("%d",&i) != EOF){
        k=0,m=0;
        for(h=0;h<n;h++){
            if (ar[h]==i){
                if (m==0){
                    printf("%d",h+1);
                    m=1;
                }
                else
                    printf(" %d",h+1);
                k=1;
            }
        }
        if (k==0)
            printf("NOT FOUND\n");
        if (k==1)
            printf("\n");
    }
}

/**************************************************************
	Problem: 1462
	User: 201901060610
	Language: C
	Result: Accepted
	Time:48 ms
	Memory:748 kb
****************************************************************/

