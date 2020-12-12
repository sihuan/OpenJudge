#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, a, b, i;
    int s=0,j=1;
    scanf("%d\n",&n);
    while(j<=n)
    {
        scanf("%d %d",&a,&b);
        for(i=a; i<=b; i++)
            s=s+i;
        printf("case %d:sum=%d.\n",j,s);
        s=0;
        j++;
    }
    return 0;
}

/**************************************************************
	Problem: 1145
	User: 202001060915
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

