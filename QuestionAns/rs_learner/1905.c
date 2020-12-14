#include<stdio.h>
int main()
{
    int a,b,c,d;
    char o;
    scanf("%d %c %d =",&a,&o,&b);
    c=(a+b);
    d=(a-b);
    o=='+'?printf("%d + %d = %d",a,b,c):printf("%d - %d = %d",a,b,d);
    return 0;
}

/**************************************************************
	Problem: 1905
	User: 201801020908
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

