#include <stdio.h>
#include <stdlib.h>

int main()
{
    int k,i;
    int a;
    float b=0;
    scanf("%d",&k);
    for(i=1;i<=k;i++)
    {
        scanf("%d",&a);
        b=b+a;
    }
    printf("%.3f",b/(float)k);
    return 0;
}

/**************************************************************
	Problem: 1416
	User: 201901060819
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

