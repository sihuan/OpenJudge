#include<stdio.h>

int main()
{
    int n,max,min,i,sum,j;
    scanf("%d",&n);
    for (i=1;i<=n;i++){
        scanf("%d%d",&min,&max);
        j=min;
        sum=0;
        while (j<=max){
            sum+=j;
            j++;
        }
        printf("case %d:sum=%d.\n",i,sum);
    }
}

/**************************************************************
	Problem: 1145
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

