#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <malloc.h>

int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    unsigned int n,m,i;
    scanf("%u",&n);
    m=2;
    for(i=1;m<n;i++)m*=2;
    printf("%u",i);
}

/**************************************************************
	Problem: 2537
	User: 202001060117
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

