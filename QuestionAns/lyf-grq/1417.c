#include <stdio.h>
#include <stdlib.h>

int main()
{
   double num, sum=0;
    int i=0;
    while(scanf("%lf", &num)!=EOF)
    {
        sum+=num;
        i++;
    }
    printf("%.3f", sum/i);
}

/**************************************************************
	Problem: 1417
	User: 202001061101
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

