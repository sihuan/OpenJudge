#include<stdio.h>

int is_swapped(int * a, int * b)
{
    int t;
    if(*a > *b){
        t = *b;
        *b = *a;
        *a = t;
        return 1;
    }
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
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

