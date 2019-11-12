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
        if (i==0 || i>n || i<-n)
            printf("OUT OF RANGE\n");
        else if (i>0)
            printf("%d\n",ar[i-1]);
        else
            printf("%d\n",ar[n+i]);
    }
}

/**************************************************************
	Problem: 1461
	User: 201901060610
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

