#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;
    char q,w,e,r,t;
    scanf("%c %c %d %c %c %c %d",&q,&w,&x,&e,&r,&t,&y);
    printf("x + y : %d\nx - y : %d\nx * y : %d\nx / y quotient: %d, remainder: %d\nx ^ 2 : %d\ny ^ 3 : %d",x + y,x - y ,x * y,x / y,x % y, x * x ,y *y*y);
    return 0;
}

/**************************************************************
	Problem: 1002
	User: 202001061101
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

