#include <stdio.h>

struct date {
    int year; 
	int month; 
	int day;
};

int get_date(struct date* dt)
{
    scanf("%d/%d/%d", &dt->year, &dt->month, &dt->day);
}

int put_century(struct date dt)
{
    int ct=dt.year/100+1;
    if (ct%10==1)
        printf("in the %dst century", ct);
    else if (ct%10==2)
        printf("in the %dnd century", ct);
    else if (ct%10==3)
        printf("in the %drd century", ct);
    else
        printf("in the %dth century", ct);
}

int main()
{
    struct date d;
    get_date(&d);
    put_century(d);
    return 0;
}

/**************************************************************
	Problem: 2295
	User: 202001061101
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

