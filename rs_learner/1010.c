#include<stdio.h>
int main()
{
    int year;
    scanf("%d",&year);
    if(year%400==0)
        printf("Yes");
    else if(year%4==0&&year%100!=0)
        printf("Yes");
    else
        printf("No");
    return 0;
}
/**************************************************************
	Problem: 1010
	User: 201801020908
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

