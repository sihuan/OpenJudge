#include <stdio.h>
#include <math.h>
#define MAX_SIZE 1009

void print_graphic(int num)
{
    int i=num,j,k;
    for(i=0;i<num;++i) printf("*");
    printf("\n");
    for(i=num-1;i>=1;i=i-2)
    {
        for(j=0;j<i/2;++j)
        {
            printf("*");
        }
        for(j=0;j<num-i;++j)
        {
            printf(" ");
        }
        for(j=0;j<i/2;++j)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i=4;i<=num;i=i+2)
    {
        for(j=0;j<i/2;++j)
        {
            printf("*");
        }
        for(j=0;j<num-i;++j)
        {
            printf(" ");
        }
        for(j=0;j<i/2;++j)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i=0;i<num;++i) printf("*");
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
	User: 201601160202
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

