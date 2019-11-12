#include <stdio.h>

int main()
{
    unsigned long long int x;
    scanf("%llu",&x);
    double a=x/1024.0/1024.0;
    double b=x/1024.0/1024.0/1024.0;
    printf("%lluK\n",x/1024);
    printf("%.2lfM\n",a);
    printf("%.2lfG\n",b);
}

/**************************************************************
	Problem: 2040
	User: 201601160202
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

