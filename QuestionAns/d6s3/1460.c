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
            if (ar[h]==i)
                k=h+1;
        }
        if (k!=0)
            printf("%d\n",k);
        else
            printf("NOT FOUND\n");
    }
}

/**************************************************************
	Problem: 1460
	User: 201901060610
	Language: C
	Result: Accepted
	Time:48 ms
	Memory:748 kb
****************************************************************/

