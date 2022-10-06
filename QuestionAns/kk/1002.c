#include<stdio.h>
#include<math.h>
int main()
{
    int x,y;
    scanf("x = %d, y = %d",&x,&y);
    printf("x + y : %d\nx - y : %d\nx * y : %d\nx / y quotient: %d, remainder: %d\nx ^ 2 : %.0lf\ny ^ 3 : %.0lf",x+y,x-y,x*y,x/y,x%y,pow(x,2),pow(y,3));

}
/**************************************************************
	Problem: 1002
	User: 202001060117
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:760 kb
****************************************************************/

