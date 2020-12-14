#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

int main()
{
    int dates (int leap, int m);
    int year (int leap);
    int leap (int y);
    int n;
    int y, m, d;
    int i, j;
    int date;

    scanf("%d", &n);
    while (n--) {
        scanf("%d-%d-%d", &y, &m, &d);
        if (dates(leap(y+18), m)<d) {
            printf("-1\n");
            continue;
        }
        date=0;
        date+=dates(leap(y), m)-d;

        for (i=m+1; i<=12; i++) {
            date+=dates(leap(y), i);
        }
        for (i=1; i<=17; i++) {
            date+=year(leap(y+i));
        }
        for (i=1; i<m; i++) {
            date+=dates(leap(y+18), i);
        }
        date+=d;
        printf("%d\n", date);
    }


    return 0;
}

int dates (int leap, int m)
{
    int md[]={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    return m==2?md[m-1]+leap:md[m-1];
}

int year (int leap)
{
    if (leap) {
        return 366;
    } else {
        return 365;
    }

}

int leap (int y)
{
    if (y%400==0) {
        return 1;
    } else if (y%100==0) {
        return 0;
    } else if (y%4==0) {
        return 1;
    } else {
        return 0;
    }
}



/**************************************************************
	Problem: 1310
	User: 201901060401
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

