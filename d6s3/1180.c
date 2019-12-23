#include <stdio.h>
#define MAX_SIZE 10001

struct date{
    int month, day, year;
};

int rqpx(struct date d1, struct date d2)
{
    if(d1.year > d2.year){
        return 1;
    }
    else if(d1.year == d2.year){
        if(d1.month > d2.month){
            return 1;
        }
        else if(d1.month == d2.month){
            if(d1.day > d2.day)
                return 1;
        }
    }
    return -1;
}

int get_date_array(struct date d[])
{
    int i=0;
    while(scanf("%d/%d/%d", &(d[i].month), &(d[i].day), &(d[i].year)) != EOF)
        i++;
    return i;
}

int sort_date_array(struct date d[], int n)
{
    int i,j;
    struct date t;
    for(i=0; i<n-1; i++){
        for(j=0; j<n-i-1; j++){
            if(rqpx(d[j], d[j+1]) > 0){
                t = d[j];
                d[j] = d[j+1];
                d[j+1] = t;
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
	User: 201901060610
	Language: C
	Result: Accepted
	Time:2372 ms
	Memory:792 kb
****************************************************************/

