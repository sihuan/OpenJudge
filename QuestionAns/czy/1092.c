#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    int n=0,sum=0,first=0,end=0,i=0,k=0,j=0;
    char a[200];
    char temp[200];
    scanf("%s",a);
    int l=strlen(a);
    for(i=l-1;i>=0;--i)
    {
        printf("%c",a[i]);
    }

    return 0;
}

/**************************************************************
	Problem: 1092
	User: 201601160202
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

