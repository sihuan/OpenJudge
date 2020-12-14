#include <stdio.h>
#include <stdlib.h>

int main()
{
     int m,n;
    scanf("%d:%d",&m,&n);
    if(m==0)
        printf("%02d:%02d a.m.",m+12,n);
     if(m>0&&m<12)
        printf("%02d:%02d a.m.",m,n);
    if(m==12)
        printf("%02d:%02d p.m.",m,n);
     if(m>12&&m<24)
        printf("%02d:%02d p.m.",m-12,n);
    return 0;
}

/**************************************************************
	Problem: 1163
	User: 201901060203
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

