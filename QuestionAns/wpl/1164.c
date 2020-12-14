#include <stdio.h>

int main()

{
    int i,n,k;
    scanf("%d",&n);
    for(k=1;k<=n;k++)
    {
        for(i=1;i<=n-k;i++)
        printf(" ");
        for(i=1;i<=2*k-1;i++)
           {

           printf("+");}
            printf("\n");
    }
    return 0;
}

/**************************************************************
	Problem: 1164
	User: 201901060819
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

