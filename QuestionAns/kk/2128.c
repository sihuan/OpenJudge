#include<stdio.h>
int main()
{
    unsigned int a,sum=0;
    while(1)
    {
        scanf("%u",&a);
        if(a==-1)
            break;
        sum*=10;
        sum+=a;
    }
    if(sum<=4294967295)
    printf("%u",sum);
}

/**************************************************************
	Problem: 2128
	User: 202001060117
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

