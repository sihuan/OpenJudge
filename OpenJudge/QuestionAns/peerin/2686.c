#include <stdio.h>
#include <stdlib.h>

void f (int a,int b, int c){
printf("%.3f",(a*1.0)/(b+c));
}


int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    f(a, b, c);
    return 0;
}

/**************************************************************
	Problem: 2686
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

