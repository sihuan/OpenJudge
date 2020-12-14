#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,n,s=0;
    scanf("%d",&n);
    while(scanf("%d",&a)!=EOF)
        s+=a;
    if(s<0)
        printf("Yes");
    else printf("No");
    return 0;
}

/**************************************************************
	Problem: 2044
	User: 202001060915
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

