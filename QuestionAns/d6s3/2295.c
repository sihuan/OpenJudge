#include <stdio.h>

struct date {
    int year, month, day;
};

int get_date(struct date* dt)
{
    scanf("%d/%d/%d", &(dt->year), &(dt->month), &(dt->day));
}

int put_century(struct date dt)
{
    int sj = dt.year / 100 + 1;
    if (sj % 10 == 1)
        printf("in the %dst century", sj);
    else if (sj % 10 == 2)
        printf("in the %dnd century", sj);
    else if (sj % 10 == 3)
        printf("in the %drd century", sj);
    else
        printf("in the %dth century", sj);
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
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

