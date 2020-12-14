#include<stdio.h>

int main()
{
    int t,n,i,j,k,a;
    int ar[1000];
    while(scanf("%d",&n)&&n!=0){
        for(i=0;i<n;i++)
            scanf("%d",&ar[i]);
        for (j = 1; j < n; j++) {
            a = ar[j];
            k = j - 1;
            while ((k >= 0) && (ar[k] > a)) {
                ar[k + 1] = ar[k];
                k--;
            }
            ar[k + 1] = a;
        }
        if(n%2==1)
            printf("%d\n",ar[n/2]);
        else
            printf("%lg\n",(ar[n/2-1]+ar[n/2])/2.0);
    }
}
/**************************************************************
	Problem: 1508
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

