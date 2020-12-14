#include <stdio.h>
#include <stdlib.h>

int main()
{
    int k, i, a;
    int sum = 0;
    scanf("%d\n", &k);
    for(i=0; i<k; i++)
    {
        scanf("%d", &a);
        sum = sum + a;
    }
    printf("%.3f",sum*1.0/k);
    return 0;
}
/**************************************************************
	Problem: 1416
	User: 202001060915
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

