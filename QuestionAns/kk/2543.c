#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <malloc.h>
typedef struct Dates
{
    int y;
    int m;
    int d;
}DATE;
void input(DATE *date)
{
    scanf("%d%d%d",&date->y,&date->m,&date->d);
}
void output(DATE date)
{
    printf("%d-%d-%d",date.m,date.d,date.y);
}
int main()
{
    DATE d;
    input(&d);
    output(d);
    return 0;
}
/**************************************************************
	Problem: 2543
	User: 202001060117
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

