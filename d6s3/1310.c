#include<stdio.h>
 
int isleapyear(int year)
{
    if (year % 100 == 0) {
        if (year % 400 == 0)
            return 1;
        else
            return 0;
    } else if (year % 4 == 0)
        return 1;
    else
        return 0;
}
 
int islegaldate(int year, int month, int date)
{
    int dy[7] = { 1, 3, 5, 7, 8, 10, 12 };
    int i, idy;
    if (month == 2) {
        if (isleapyear(year) == 1 && date < 30)
            return 1;
        if (isleapyear(year) == 0 && date < 29)
            return 1;
        return 0;
    }
    for (i = 0, idy = 0; i < 7; i++) {
        if (dy[i] == month) {
            idy = 1;
            break;
        }
    }
    if (idy == 1 && date < 32)
        return 1;
    if (idy == 0 && date < 31)
        return 1;
    return 0;
}
 
int getdays(int year, int month, int date)
{
    int i, ts = date, idy, m;
    int dy[7] = { 1, 3, 5, 7, 8, 10, 12 };
    if (month > 2) {
        for (m = 3; m < month; m++) {
            for (i = 0, idy = 0; i < 7; i++) {
                if (dy[i] == m) {
                    idy = 1;
                    break;
                }
            }
            if (idy == 1)
                ts += 31;
            else
                ts += 30;
        }
    }
    if (month > 2 && isleapyear(year) == 1)
        ts += 60;
    else if (month > 2 && isleapyear(year) == 0)
        ts += 59;
    else if (month == 2)
        ts += 31;
    return ts;
}
 
int prd(int y,int m,int d)
{
    int ds=0,j;
    if(isleapyear(y))
        ds+=(366-getdays(y, m, d));
    else
        ds+=(365-getdays(y, m, d));
    for(j=1;j<=17;j++)
        ds += getdays(y+j, 12, 31);
    ds += getdays(y+18, m, d);
    printf("%d\n", ds);
}
 
int main()
{
    int n, y, m, d, i, ds,j;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d-%d-%d", &y, &m, &d);
        if(isleapyear(y)){
            if(m==2&&d==29){
                printf("-1\n");
                continue;
            }
            else{
                prd(y,m,d);
                continue;
            }
        }
        else
            prd(y,m,d);
    }
}
/**************************************************************
	Problem: 1310
	User: 201901060610
	Language: C
	Result: Accepted
	Time:8 ms
	Memory:748 kb
****************************************************************/

