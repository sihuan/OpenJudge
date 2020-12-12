#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, a, b, c, m, i=0;
    int s[120];
    scanf("%d",&n);
    while(i<n)
    {
        scanf("%d %d %d",&a,&b,&c);
        if(a+b>c&&a+c>b&&b+c>a)
        s[i]=1;
        else s[i]=2;
        i++;
    }
    for(m=0;m<n;m++)
    {
        if(s[m]==1)
        printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}

/**************************************************************
	Problem: 1079
	User: 202001060915
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

