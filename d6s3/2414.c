#include <stdio.h>

int main()
{
    int n=0, i;
    char ar[101][101];
    while(gets(ar[n]) != NULL)
        n++;
    for(i=n-1; i>=0; i--)
        puts(ar[i]);
}

/**************************************************************
	Problem: 2414
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

