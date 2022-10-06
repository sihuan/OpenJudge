#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
int month[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int judge(int y)
{
    if((y%4==0&&y%100!=0)||y%400==0)
        return 1;
    else
        return 0;
}
int date_is(int y,int m)
{
    y--;
    int all,sum=0,i;
    for(i=1;i<m;i++)
        sum+=month[i];
    all=365*(y-1899)+(y/4-y/100+y/400-460)+sum+1;
    return all%7;
}
void output(int m,int d)
{
    int i;
    printf("Sun Mon Tue Wen Thu Fri Sat\n");
    for(i=0;i<4*d-1;i++)
        putchar(' ');
    for(i=1;i<=month[m];i++)
    {
        if(d%7!=0)
            printf("%4d",i);
        else if(d%7==0&&d!=0)
            printf("\n%3d",i);
        else
            printf("%3d",i);
        d++;
    }
    printf("\n");
}
int main()
{
    int y,m,d;
    int flag=0;
    while(scanf("%d%d",&y,&m)!=EOF)
    {
        if(flag)
            printf("\n");
        if(judge(y))
            month[2]=29;
        else
            month[2]=28;
        d=date_is(y,m);
        output(m,d);
        flag=1;
    }
}

/**************************************************************
	Problem: 2423
	User: 202001060117
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

