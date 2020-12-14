#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i,N,j;
    char a[1001];
    scanf("%d",&N);
    getchar();
    for(i=1;i<=N;i++)
    {
        gets(a);
        j=strlen(a);
        printf("case %d:length=%d.\n",i,j);
    }

    return 0;
}

/**************************************************************
	Problem: 1149
	User: 201901060819
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

