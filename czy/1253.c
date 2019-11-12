#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    int n=0,sum=0,first=0,end=0,i=0,k=0,j=0;
    char a[30];
    char temp[30];
    scanf("%s",a);
    scanf("%d",&n);
    int l=strlen(a);
    if(n<=l && n>=1) printf("%c",a[n-1]);
    else printf("error");

    return 0;
}

/**************************************************************
	Problem: 1253
	User: 201601160202
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

