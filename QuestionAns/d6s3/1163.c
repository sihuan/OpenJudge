#include<stdio.h>

int main()
{
    int h,m;
    scanf("%d:%d",&h,&m);
    if(h==0)
        printf("12:%02d a.m.",m);
    else if(h>=13&&h<=23)
        printf("%02d:%02d p.m.",h-12,m);
    else if(h<=11)
        printf("%02d:%02d a.m.",h,m);
    else
        printf("%02d:%02d p.m.",h,m);
}

/**************************************************************
	Problem: 1163
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

