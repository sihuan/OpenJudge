#include <stdio.h>
#include <stdlib.h>

int get_nums(int *n)
{
    int i=0,a;
    while(scanf("%d",&a)!=EOF)
        i++;
    *n=i;
    return 0;
}

int main()
{
    int n;
    get_nums(&n);
    printf("%d\n", n);
}

/**************************************************************
	Problem: 1607
	User: 202001060915
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

