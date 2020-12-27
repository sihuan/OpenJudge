#include <stdio.h>
#include <stdlib.h>
 
int main()
{
	int n;
	scanf("%d",&n);
	if(n%400==0||(n%4==0&&n%100!=0))
	printf("Yes");
	else 
	printf("No"); 
}
/**************************************************************
	Problem: 1010
	User: 202001061101
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

