#include <stdio.h>

int even( int n );

int main()
{
    int n;

    scanf("%d", &n);
    if (even(n))
        printf("%d is an even number.\n", n);
    else
        printf("%d is an odd number.\n", n);

    return 0;
}
  int even(int n)
{
	if(n%2==0)
	return 1;
	else
	return 0;
}

/**************************************************************
	Problem: 1142
	User: 201901100103
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

