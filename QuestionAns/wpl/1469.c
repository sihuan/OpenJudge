#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,i,j,k=0;
    int a[200001];
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        scanf("%d",&j);
        a[j]++;
        if(a[j]>k)
            k=a[j];
    }
    printf("%d\n",k);
    return 0;
}

/**************************************************************
	Problem: 1469
	User: 201901060819
	Language: C
	Result: Accepted
	Time:60 ms
	Memory:1456 kb
****************************************************************/

