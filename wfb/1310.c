#include <stdio.h>
int MList1[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
int MList2[13] = {0,31,29,31,30,31,30,31,31,30,31,30,31};
int isYear(int y)
{
    if(y%4==0 && y%100!=0 || y%400 == 0)
        return 1;
    else
        return 0;
}
int Day(int year,int month,int day)
{
    int cnt = 0;
    int y,m,d;
    if(isYear(year))
    {
        for(m=1; m<month; ++m)
            cnt-=MList2[m];
        cnt-=day;
    }
    else
    {
        for(m=1; m<month; ++m)
            cnt-=MList1[m];
        cnt-=day;
    }
    int sty=year,edy=year+18;
    for(y=sty; y<edy; ++y)
    {
        if(isYear(y))
        {
            cnt+= 366;
        }
        else
        {
            cnt+=365;
        }
    }
    if(isYear(y))
    {
        for(m=1; m<month; ++m)
        {
            cnt+=MList2[m];
        }
        if(day <= MList2[month])
        {
            cnt += day;
        }
        else
            cnt = -1;
    }
    else
    {
        for(m=1; m<month; ++m)
        {
            cnt+=MList1[m];
        }
        if(day <= MList1[month])
        {
            cnt += day;
        }
        else
            cnt = -1;
    }
    return cnt;
}
int main()
{
    int n;
    scanf("%d",&n);
    int i;
    int y,m,d;
    for(i=0; i<n; ++i)
    {
        scanf("%d-%d-%d",&y,&m,&d);
        printf("%d\n",Day(y,m,d));
    }
    return 0;
}

/**************************************************************
	Problem: 1310
	User: 201601011420
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

