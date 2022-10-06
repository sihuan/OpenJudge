#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <malloc.h>

int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    int n;

    scanf("%d",&n);
    int i,j;
    printf("    ");
    for(int k=1;k<=n;k++)
        printf("%5d",k);
    printf("\n");
    for(i=1;i<=n;i++)
    {
        printf("%4d",i);
        for(j=1;j<=i;j++)
            printf("%5d",i+j);
        printf("\n");
    }
}

/**************************************************************
	Problem: 2540
	User: 202001060117
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

