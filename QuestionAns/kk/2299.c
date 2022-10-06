#include<stdio.h>
int main()
{
    unsigned int n,i=1;
    scanf("%u",&n);
    while(n>=2)
    {
        n/=2;
        i++;
    }
    printf("%u",i);
}

/**************************************************************
	Problem: 2299
	User: 202001060117
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

