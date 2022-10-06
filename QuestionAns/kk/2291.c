#include<stdio.h>
int main()
{
    unsigned int n,k,i;
    scanf("%u%u",&n,&k);
    for(i=0;n>0;n/=10)
        if(n%10==k)
            i++;
    if(n==0&&k==0)
        i=1;
    printf("%u",i);
}

/**************************************************************
	Problem: 2291
	User: 202001060117
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

