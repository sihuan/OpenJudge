#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    unsigned long long int b=0,c=0,n=0,i=0,m=0,sum=0;;
    char a[2000];
    scanf("%llu",&b);
    getchar();
    for(c=0;c<b;++c)
    {

        gets(a);
        sum=0;
        int l=strlen(a);
        for(i=0;i<l;++i)
        {
            sum=sum+a[i]-'0';
        }
        if(sum%3==0) printf("Yes\n");
        else printf("No\n");
    }

    return 0;
}

/**************************************************************
	Problem: 1187
	User: 201601160202
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

