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
    int d,l;
    scanf("%d",&d);
    for(l=0;l*(l+3)<=d;l++);
    printf("%d",l-1);

}

/**************************************************************
	Problem: 2535
	User: 202001060117
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

