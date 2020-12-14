#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    if(n%400==0)
    {
        printf("Yes");
    }
    else
    {
        if(n%4==0&&n%100!=0)
    {
        printf("Yes");
    }
    else
        {
            printf("No");
        }
    }
    return 0;
}
/**************************************************************
	Problem: 1010
	User: 201901060819
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

