#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned long long int inp;
    scanf("%llu",&inp);
    printf("%lluK\n%.2lfM\n%.2lfG",inp/1024,inp/1024.0/1024.0,inp/1024.0/1024.0/1024.0);
}

/**************************************************************
	Problem: 2040
	User: 202001060117
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

