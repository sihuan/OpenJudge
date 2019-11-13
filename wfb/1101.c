#include <stdio.h>
#include <stdlib.h>

int monthMap[]={0,31,28,31,30,31,30,31,31,30,31,30,31};

int isLeapYear(int y)
{
    if(y%4==0 && y%100!=0 || y%400==0)
        return 1;
    else
        return 0;
}
int main()
{
    int n;
    scanf("%d",&n);
    int i,j;
    int y,m,d;
    int num;
    for(i=0; i<n; ++i)
    {
        scanf("%d-%d-%d",&y,&m,&d);
        if(isLeapYear(y)) monthMap[2] = 29;
        if(m<1 || m>12) printf("error date!\n");
        else if(d<1 || d>monthMap[m]) printf("error date!\n");
        else
        {
            num = 0;
            for(j=1; j<m; ++j)
            {
                num += monthMap[j];
            }
            num += d;
            printf("%d\n",num);
        }
        monthMap[2] = 28;
    }

    return 0;
}

/**************************************************************
	Problem: 1101
	User: 201601011420
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

