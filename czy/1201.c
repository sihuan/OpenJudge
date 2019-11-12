#include <stdio.h>
#include <stdlib.h>
int is_swapped(int *a,int *b)
{

    if(*a>*b)
    {
        int temp;
        temp=*a;
        *a=*b;
        *b=temp;
        return 1;
    }
    else
        return 0;
}

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    if(is_swapped(&a, &b))
        printf("%d %d YES", a, b);
    else
        printf("%d %d NO", a, b);
}
/**************************************************************
	Problem: 1201
	User: 201601160202
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

