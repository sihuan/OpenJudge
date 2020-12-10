#include <stdio.h>
#include <stdlib.h>

int RN(int y)
{
    if(y%100!=0&&y%4==0)
        return 1;
    if(y%400==0)
        return 1;
    return 0;
}

int main()
{
    int n,i,m,d,y,x,t;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d-%d-%d",&y,&m,&d);
        x=RN(y);
        if(m>12||m<1||d<1||d>31||y<1)
            printf("error date!");
        else if((m==4||m==6||m==9||m==11)&&d==31)
                printf("error date!");
        else if(x==1&&m==2&&d>29)
            printf("error date!");
        else if(x==0&&m==2&&d>28)
            printf("error date!");
        else
        {
            if(m==1)
                t=d;
            if(m==2)
                t=d+31;
            if(m==3)
                t=d+60;
            if(m==4)
                t=d+91;
            if(m==5)
                t=d+121;
            if(m==6)
                t=d+152;
            if(m==7)
                t=d+182;
            if(m==8)
                t=d+213;
            if(m==9)
                t=d+244;
            if(m==10)
                t=d+274;
            if(m==11)
                t=d+305;
            if(m==12)
                t=d+335;
            if(x==0&&m>2)
                t=t-1;
            printf("%d",t);
        }
        printf("\n");
    }
    return 0;
}

/**************************************************************
	Problem: 1101
	User: 202001060915
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

