#include <stdio.h>
#define MAX_STR_LEN 210

int print_graphic(int n)
{
    int i,j;
    for(j=1; j<=n; j++)
        printf("*");
    printf("\n");
    for(i=1; i<=(n-1)/2; i++)
    {
        for(j=1; j<=(n-1)/2-i+1; j++)
            printf("*");
        for(j=1; j<=i*2-1; j++)
            printf(" ");
        for(j=1; j<=(n-1)/2-i+1; j++)
            printf("*");
        printf("\n");
    }
    for(i=2; i<=(n-1)/2; i++)
    {
        for(j=1; j<=i; j++)
            printf("*");
        for(j=1; j<=((n-1)/2-i+1)*2-1; j++)
            printf(" ");
        for(j=1; j<=i; j++)
            printf("*");
        printf("\n");
    }
    for(j=1; j<=n; j++)
        printf("*");
    printf("\n");
    return 0;
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
	User: 202001060915
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

