#include<stdio.h>
int main()
{
    int n,a,j,h,i;
    scanf("%d",&n);
    int ar[n];
    for(j=0;j<n;j++){
        scanf("%d",&a);
        ar[j]=a;
    }
    while(scanf("%d",&i) != EOF){
        if (i<1 || i>n)
            printf("OUT OF RANGE\n");
        else
            printf("%d\n",ar[i-1]);
    }
}

/**************************************************************
	Problem: 1458
	User: 201901060610
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

