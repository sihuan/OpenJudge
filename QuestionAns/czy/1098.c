#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    int n,m;
    while(1)
    {
        scanf("%d",&n);
        if(n==0) break;
        m=n%10;
        if(m==1) printf("%dst\n",n);
        else if(m==2) printf("%dnd\n",n);
        else if(m==3) printf("%drd\n",n);
        else printf("%dth\n",n);
    }
    return 0;
}

/**************************************************************
	Problem: 1098
	User: 201601160202
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

