#include<stdio.h>
int main()
{
    unsigned long long k;
    while(scanf("%llu",&k)!=EOF)
    {
        if(k>1)
        {
            printf("%llu471\n",k-1);
        }
        else
        {
            printf("471\n");
        }
    }
    return 0;
}
/**************************************************************
	Problem: 1047
	User: 202001061101
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

