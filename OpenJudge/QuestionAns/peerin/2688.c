#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

struct date{
int y;
int m;
int d;
};

struct date to_date(char s[]){
    int len = strlen(s);
    char ye[5],mo[3],da[3];
    strncpy(ye,s,4);
    ye[4]='\0';
    strncpy(mo,s+4,2);
    mo[2]='\0';
    strncpy(da,s+6,2);
    da[2]='\0';
    struct date d;
    d.y=atoi(ye);
    d.m=atoi(mo);
    d.d=atoi(da);
    return d;
};


int main()
{
    char str[10];
    struct date dt;
    while(gets(str) != NULL)
    {
        dt = to_date(str);
        printf("%d %d %d\n", dt.y, dt.m, dt.d);
    }
    return 0;
}

/**************************************************************
	Problem: 2688
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

