#include<stdio.h>

int is_leap_year(int year)
{
	int is = 0;
	if(year%4==0 && year%100 !=0 || year%400==0)
		is = 1;

	return is;
}

int main()
{
    int year;
    
    scanf("%d", &year);
    is_leap_year(year) ? printf("Yes") : printf("No");
    
    return 0;
}
/**************************************************************
	Problem: 1465
	User: 201601011420
	Language: C
	Result: Accepted
	Time:8 ms
	Memory:748 kb
****************************************************************/

