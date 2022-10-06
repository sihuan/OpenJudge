#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char mes[501];
    int len=0,times=0;
    double fee;
    while(gets(mes)!=NULL)
    {
        len=strlen(mes);
        times+=len/30;
        if(len%30!=0)
            times++;
    }
    if(times<16)
        printf("1.0");
    else
    {
        fee=1+(times-15)/10.0;
        printf("%.1lf",fee);
    }

}

/**************************************************************
	Problem: 2300
	User: 202001060117
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

