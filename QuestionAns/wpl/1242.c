#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <tgmath.h>
int main()
{
    long long l,i,s,s2;
    char a[66];
    while(scanf("%s",a)!=EOF)
    {
        s2=0;
        s=0;
        l=strlen(a);
        for(i=0; i<l; i++)
        {
            s2=pow(2,(l-i-1));
            s=s+(a[i]-48)*s2;
        }
        printf("%lld\n",s);
    }
    return 0;
}

/**************************************************************
	Problem: 1242
	User: 201901060819
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:760 kb
****************************************************************/

