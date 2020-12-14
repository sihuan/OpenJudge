#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    unsigned long long int b=0,c=0,n=0,i=0,m=0,sum=0;;
    char a[2000];
    scanf("%llu",&n);
    getchar();
    for(i=0;i<n;++i)
    {
        gets(a);
        int l=strlen(a);
        printf("case %llu:length=%d.\n",i+1,l);
    }

    return 0;
}

/**************************************************************
	Problem: 1149
	User: 201601160202
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

