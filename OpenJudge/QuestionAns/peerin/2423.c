#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
int month[]={31,28,31,30,31,30,31,31,30,31,30,31};
const long long date=3;
int runnian (int y)
{
    if (y%400==0)
        return 1;
    else if (y%100==0)
        return 0;
    else if (y%4==0)
        return 1;
    else
        return 0;
}

int printm(int f, int d)
{
    /*printf("%d %d\n", f, d);*/
    int w=f;
    int i, j;
    printf("Sun Mon Tue Wen Thu Fri Sat\n");
    if (w!=7) {
        printf("   ");
        for (i=1; i<w; i++) {
            printf("    ");
        }
    } else
        w=0;
    for (i=1; i<=d; i++, w++) {
        if (w==0)
            printf("%3d", i);
        else
            printf("%4d", i);

        if (w==6) {
            putchar('\n');
            w=-1;
        }
    }
    if (w!=7 && w!=0)
        putchar('\n');
    return 0;
}

int getd (int y, int m)
{
    return m==2?runnian(y)+month[m-1]:month[m-1];
}


int getf(int y, int m)
{
    long long days=0;
    int i;
    if (y<2020) {
        for (i=y+1; i<2020; i++)
            days+=365+runnian(i);
        /*zhong jian de nian*/
        for (i=m; i<=12; i++) {
            days+=getd(y, i);
        }
        return (date+(7-days%7))%7==0?7:(date+(7-days%7))%7;
    } else if (y>2020) {
        for (i=2020; i<y; i++)
            days+=365+runnian(i);
        for (i=1; i<m; i++)
            days+=getd(y, i);
        return (date+days%7)%7==0?7:(date+days%7)%7;
    } else {
        for (i=1; i<m; i++) {
            days+=getd(y, i);
        }
        return (date+days%7)%7==0?7:(date+days%7)%7;
    }
}


int main()
{
    int y, m;
    int f=0;
    while (scanf("%d%d", &y, &m)==2) {
        if (f)
            putchar('\n');
        else
            f=1;

        printm(getf(y, m), getd(y, m));
    }

    return 0;
}



/*
int cmp (const void* a, const void *b)
{
    return (int)(*(int*)a-*(int*)b);
}

    int a[10]={12,12,45,4,8,878,2121,12,121, 88}, i;

    qsort(a, 10, sizeof(int), cmp);

    for (i=0; i<10; i++) printf("%d ", a[i]);

*/


/*


*/

/**************************************************************
	Problem: 2423
	User: 201901060401
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/


/**************************************************************
	Problem: 2423
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

