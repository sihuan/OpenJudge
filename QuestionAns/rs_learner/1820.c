#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int print_graphic(int n)
{
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=n-i;j>=1;j--)
        {
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
int main()
{
    int num;
    scanf("%d", &num);
    print_graphic(num);
    return 0;
}
/**************************************************************
	Problem: 1820
	User: 201801020908
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

