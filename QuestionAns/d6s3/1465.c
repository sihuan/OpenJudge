#include <stdio.h>

int is_leap_year(int n)
{
    if (n % 4 == 0)
        if (n % 100 == 0)
            if (n % 400 == 0)
                return 1;
            else
                return 0;
        else
            return 1;
    return 0;
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
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

