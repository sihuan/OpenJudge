#include<stdio.h>

int main()
{
    int N,h,i,j;
    int ar[10001];
    scanf("%d",&N);
    for(h=0;h<N;h++)
        scanf("%d",&ar[h]);
    while(scanf("%d %d",&i,&j)!=EOF){
        if(i>j){
            int t=i;
            i=j;
            j=t;
        }
        if(i>N||j<1){
            printf("OUT OF RANGE\n");
            continue;
        }
        int k;
        for(k=0;i<=j&&i<=N;i++,k++){
            if(i<1)
                i=1;
            if(k==0)
                printf("%d",ar[i-1]);
            else
                printf(" %d",ar[i-1]);
        }
        putchar('\n');
    }
}

/**************************************************************
	Problem: 1468
	User: 201901060610
	Language: C
	Result: Accepted
	Time:36 ms
	Memory:748 kb
****************************************************************/

