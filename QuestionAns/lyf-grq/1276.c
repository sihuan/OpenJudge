#include <stdio.h>
#include <stdlib.h>
int print_graphic(int n)
{
    int i,j,kg = 0;
    for(j = 0; j < n; j++)
        printf("*");
    printf("\n");
    for(i = 1; i < (n+1)/2; i++)
    {
        if(i == 0 || i == n-1)
            kg = 0;
        else
            kg = 2*i-1;
        int xing = (n-kg)/2;
        for(j = 0; j < xing; j++)
            printf("*");
        for(j = 0; j < kg; j++)
            printf(" ");
        for(j = 0; j < xing; j++)
            printf("*");
        printf("\n");
    }
    for(i = (n+1)/2-2; i >= 1; i--)
    {
        if(i == 0 || i == n-1)
            kg = 0;
        else
            kg = 2*i-1;
        int xing = (n-kg)/2;
        for(j = 0; j < xing; j++)
            printf("*");
        for(j = 0; j < kg; j++)
            printf(" ");
        for(j = 0; j < xing; j++)
            printf("*");
        printf("\n");
    }
    for(j = 0; j < n; j++)
        printf("*");
    printf("\n");
}


int main()
{
    int num;
    scanf("%d", &num);
    print_graphic(num);
    return 0;
}
/**************************************************************
	Problem: 1276
	User: 202001061101
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

