#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <malloc.h>
#include <iostream>

using namespace std;

typedef struct Date
{
    int year,month,day;
}DATE;
void getDate(DATE *date)
{
    scanf("%d%d%d",&date->year,&date->month,&date->day);
}
DATE getMax(Date date1,DATE date2)
{
    if((date1.year>date2.year)||(date1.year==date2.year&&date1.month>date2.month)||(date1.year==date2.year&&date1.month==date2.month&&date1.day>date2.day))
        return date1;
    return date2;
}
void putDate(DATE max)
{
    printf("%04d-%02d-%02d\n", max.year, max.month ,max.day );
}
int main()
{
    DATE date1, date2, max;
    int n, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        getDate(&date1);
        getDate(&date2);
        max = getMax(date1, date2);
        putDate(max);
    }
    return 0;
}

/**************************************************************
	Problem: 2034
	User: 202001060117
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

