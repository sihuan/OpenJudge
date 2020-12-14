#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    int n=0,sum=0,first=0,end=0,i=0,k=0,j=0;
    scanf("%d",&n);
    int a[1009];
    char name[20];
    int sco=0;
    for(i=0;i<n;++i)
    {

        scanf("%s",name);
        scanf("%d",&sco);
        printf("%8s",name);
        printf(" |");
        for(k=0;k<sco;++k)
        {
            printf("=");
        }
        printf("\n");
    }
}

/**************************************************************
	Problem: 1246
	User: 201601160202
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

