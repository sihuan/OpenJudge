#include <stdio.h>
#include <stdlib.h>

int main()
{
    scanf("70 80 70 240");
    int a,b,c,d;
    scanf("%d %d %d",&a,&b,&c);
    d=a+b+c;
    if(a>=70&&b>=80&&c>=70&&d>=240)
    {
        printf("congratulations");
    }
    else
        printf("sorry");
    return 0;
}

/**************************************************************
	Problem: 1404
	User: 201901060819
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

