#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m=0,n=0;
    char c;
    while(scanf("%d%c%d",&m,&c,&n)!=EOF)
    {
        if(m==0 && c==' ' && n==0) break;
        if(c=='+') printf("%d\n",m+n);
        else if(c=='-') printf("%d\n",m-n);
        else if(c=='*') printf("%d\n",m*n);
        else if(c=='/') printf("%d\n",m/n);
        else if(c=='%') printf("%d\n",m%n);
        else printf("invalid op\n");
    }


    return 0;
}

/**************************************************************
	Problem: 1026
	User: 201601160202
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

