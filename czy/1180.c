#include <stdio.h>
#define MAX_SIZE 10009

typedef struct date
{
    int month;
    int year;
    int day;
}ddd;



int get_date_array(struct date *d)
{
    int ii=0;
    while(~scanf("%d/%d/%d",&d[ii].month,&d[ii].day,&d[ii].year)) ++ii;
    return ii;

}

int sort_date_array(struct date *d, int n)
{
    int i,j;
    ddd x;
    for(i=0;i<n-1;++i)
    {
        for(j=0;j<n-1-i;++j)
        {
            if(d[j].year>d[j+1].year)
            {
                x=d[j];d[j]=d[j+1];d[j+1]=x;
            }
            else if(d[j].year==d[j+1].year && d[j].month>d[j+1].month)
              {
                  x=d[j];d[j]=d[j+1];d[j+1]=x;
              }
            else if(d[j].year==d[j+1].year && d[j].month==d[j+1].month && d[j].day>d[j+1].day)
              {
                  x=d[j];d[j]=d[j+1];d[j+1]=x;
              }
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
	User: 201601160202
	Language: C
	Result: Accepted
	Time:1940 ms
	Memory:792 kb
****************************************************************/

