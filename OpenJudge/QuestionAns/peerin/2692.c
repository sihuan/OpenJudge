#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    for(int i = n*n-n+1,cnt=0;cnt<n;++cnt,i+=2)printf("%d\n",i);
    return 0;
}

/**************************************************************
	Problem: 2692
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

