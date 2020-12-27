#include <stdio.h>
#include <string.h>

int main()
{
    char str[501];
    int x=0, ms=0;
    while (gets(str)!=NULL)
	{
        x=strlen(str);
        ms+=x/30;
        if(x%30!=0)
        ms++;
    }
    if (ms <= 15)
        printf("1.0");
    else
        printf("%.1lf", 1.0+(ms-15)*0.1);
}
/**************************************************************
	Problem: 2300
	User: 202001061101
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

