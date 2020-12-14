#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=58;i<=n;i++)
    {
        if(i%3==1&&i%4==2&&i%5==3)
            printf("%d\n",i);
        else continue;
    }
    return 0;
}

/**************************************************************
	Problem: 1275
	User: 202001060915
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

