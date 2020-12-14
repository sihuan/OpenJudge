#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <malloc.h>

 int get_nums(int *n)
 {
     int i=0,nn;
     while(~scanf("%d",&nn)) ++i;
     *n=i;
 }


int main()
{
    int n;
    get_nums(&n);
    printf("%d\n", n);
}

/**************************************************************
	Problem: 1607
	User: 201601160202
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

