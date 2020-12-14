#include <stdio.h>

#define OVERFLOW -2
#define MAX_STR_LEN 1500
#define MAX_SIZE 10005
struct date
{
    int year,month,day;
};
int get_date_array(struct date d[])
{
    int i = 0;
    while(1)
    {
        if(scanf("%d/%d/%d",
                 &d[i].month,&d[i].day,&d[i].year) == EOF)
                    break;
        ++i;
    }
    return i;
}
int RT(struct date t1,struct date t2)
{
    if(t1.year > t2.year) return 1;
    else if(t1.year == t2.year)
    {
        if(t1.month > t2.month) return 1;
        else if(t1.month == t2.month)
        {
            if(t1.day > t2.day) return 1;
        }
    }
    return 0;
}
int sort_date_array(struct date d[], int n)
{
    int i,j;
    struct date temp;
    for(i=0; i<n-1; ++i)
    {
        for(j=i+1; j<n; ++j)
        {
            if(RT(d[i],d[j]))
            {
                temp = d[i];
                d[i] = d[j];
                d[j] = temp;
            }
        }
    }
    return 0;
}

int main()
{
    struct date d_arr[MAX_SIZE];
    int cases = 0, i, j;

    cases = get_date_array(d_arr);
    sort_date_array(d_arr, cases);

    for(i = 0; i < cases; i++)
        printf("%02d/%02d/%d\n", d_arr[i].month, d_arr[i].day, d_arr[i].year);
    return 0;
}
/**************************************************************
	Problem: 1180
	User: 201601011420
	Language: C
	Result: Accepted
	Time:2908 ms
	Memory:792 kb
****************************************************************/

