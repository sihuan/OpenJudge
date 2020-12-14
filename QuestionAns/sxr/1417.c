#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, sum=0;
    int k=0;
    while(scanf("%d",&a) != EOF)
    {
        sum += a;
        k++;
    }
    printf("%.3lf",sum*1.0/k);
    return 0;
}

/**************************************************************
	Problem: 1417
	User: 202001060915
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

