#include<stdio.h>
int main()
{
    long long int k;
    while(scanf("%lld",&k)!=EOF)
    {
        if(k==1)
            printf("471\n");
        else
            printf("%lld471\n",k-1);
    }
}
/**************************************************************
	Problem: 1047
	User: 202001060117
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

