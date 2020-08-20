#include<stdio.h>

int is_swapped(int *a,int *b){
    if(*a>*b){
        int temp=*a;
        *a=*b,*b=temp;
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
	User: 201901061011
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

