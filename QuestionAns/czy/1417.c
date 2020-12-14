#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n=0;
    double sum,ave;
   // scanf("%d",&n);
    while(scanf("%lf",&sum) != EOF)
    {
        ave=ave+sum;
        ++n;
    }
    ave=ave/(double)n;
    printf("%.3lf\n",ave);
    return 0;
}

/**************************************************************
	Problem: 1417
	User: 201601160202
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

