#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n;
    int h,m,s;
    while(scanf("%d",&n)!=EOF)
    {
        if(n==0)
            break;
        n=n-1;
    h=n/3600;
    m=(n-h*3600)/60;
    s=n-h*3600-m*60;
    printf("%02d:%02d:%02d\n",h,m,s);
    }
    return 0;
}

/**************************************************************
	Problem: 1244
	User: 201901060819
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

