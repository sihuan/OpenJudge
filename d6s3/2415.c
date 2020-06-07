#include <stdio.h>

int dx()
{
    char ar[101];
    if(gets(ar) != NULL) {
        dx();
        puts(ar);
    }
    return 1;
}

int main()
{
    dx();
}

/**************************************************************
	Problem: 2415
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

