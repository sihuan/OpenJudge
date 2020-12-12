#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,sum=0;
    while(scanf("%d",&a)!=EOF)
    {
        while(scanf("%d",&b)==1)
            sum=sum+b;
        sum=sum+a;
        printf("%d\n",sum);
        sum=0;
        if(getchar()=='\n')
            continue;
    }
    return 0;
}

/**************************************************************
	Problem: 2037
	User: 202001060915
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

