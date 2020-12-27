#include <stdio.h>
#include <stdlib.h>
#include <math.h> 

int main()
{
	int x;
	char c;
	scanf("%c %d",&c,&x);
	if(c+x<=90)
	printf("%c",c+x);
	else if(c+x>90)
	printf("%c",c+x-26);
}

/**************************************************************
	Problem: 1161
	User: 202001061101
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

