#include<stdio.h>
int main()
{
    int n,a,j,h,i,k=0;
    scanf("%d",&n);
    int ar[n];
    for(j=0;j<n;j++){
        scanf("%d",&a);
        ar[j]=a;
    }
    while(scanf("%d",&i) != EOF){
        k=0;
        for(h=0;h<n;h++){
            if (ar[h]==i){
                printf("%d\n",++h);
                k=1;
                break;
            }
        }
        if (k==0)
            printf("NOT FOUND\n");
    }
}

/**************************************************************
	Problem: 1459
	User: 201901060610
	Language: C
	Result: Accepted
	Time:16 ms
	Memory:748 kb
****************************************************************/

