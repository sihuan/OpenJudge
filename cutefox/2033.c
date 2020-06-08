#include <stdio.h>
#include <stdlib.h>
typedef struct DATE
    {
    int year,month,day;
    } DATE;
int getDate(DATE *d)
{
DATE temp;
scanf("%d%d%d",&temp.year,&temp.month,&temp.day);
*d=temp;
}
int putDate(DATE d)
{
  printf("%04d-%02d-%02d",d.year,d.month,d.day);
}

int main()
{
    DATE date;
    getDate(&date);
    putDate(date);
    return 0;
}
/**************************************************************
	Problem: 2033
	User: 201901060203
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

