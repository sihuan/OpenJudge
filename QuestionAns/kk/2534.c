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
    double rode;
    double a,b;
    scanf("%lf",&rode);
    a=rode/0.003+60;
    b=rode/0.0012;
    if(a<b)
        printf("Bike");
    if(a>b)
        printf("Walk");
    if(a==b)
        printf("All");
    return 0;
}

/**************************************************************
	Problem: 2534
	User: 202001060117
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

