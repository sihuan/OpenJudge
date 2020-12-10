#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m,i,j;
    scanf("%d",&n);
    m=n/2+1;
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=2*(m-i);j++)
            printf(" ");
        for(j=i+64;j<=3*i+62;j++)
            printf("%c",j);
        for(j=j-2;j>=i+64;j--)
            printf("%c",j);
        printf("\n");
    }
    for(i=1;i<=m-1;i++)
    {
        for(j=1;j<=i*2;j++)
            printf(" ");
        for(j=(m-i)+64;j<=3*(m-i)+62;j++)
            printf("%c",j);
        for(j=j-2;j>=(m-i)+64;j--)
            printf("%c",j);
        printf("\n");
    }
    return 0;
}
/**************************************************************
	Problem: 1870
	User: 202001060915
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

