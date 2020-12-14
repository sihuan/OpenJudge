#include <stdio.h>
#include <stdlib.h>
#define  MAX_SIZE 10000
struct date {
int year;
int month;
int day;
};
int get_date_array(struct date d[])
{
    int i=0;
while(scanf("%d/%d/%d",&d[i].month,&d[i].day,&d[i].year)!=EOF)
    {
        i++;
    }
    return i;
}
int sort_date_array(struct date d[], int n)
{
    int i,j,min;
    struct date t;
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        if(d[j].year<d[min].year||d[j].year==d[min].year&&d[j].month<d[min].month||d[j].year==d[min].year&&d[j].month==d[min].month&&d[j].day<d[min].day)
            min=j;
        if(min!=i)
        {
            t=d[i];
            d[i]=d[min];
            d[min]=t;
        }
    }
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
	User: 201901060203
	Language: C
	Result: Accepted
	Time:1552 ms
	Memory:792 kb
****************************************************************/

