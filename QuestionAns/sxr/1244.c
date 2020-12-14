#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,h,m,s;
    scanf("%d",&n);
    while(n!=0)
    {
        n=n-1;
        h=n/3600;
        m=(n%3600)/60;
        s=(n%3600)%60;
        printf("%02d:%02d:%02d\n",h,m,s);
        scanf("%d",&n);
    }
    return 0;
}
/**************************************************************
	Problem: 1244
	User: 202001060915
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

