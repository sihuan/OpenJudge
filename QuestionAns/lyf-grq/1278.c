#include <stdio.h>
#include <stdlib.h>
int is_daffodil(int n)
{
	int a,b,c;
	a=n/100;
	b=n/10%10;
	c=n%10;
	if(n==a*a*a+b*b*b+c*c*c&&n>99&&n<1000)
	return 1;
	else
	return 0;
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%s",
           ( is_daffodil(n) ? "Yes, it is a daffodil."
                            : "No, it is not a daffodil." )
          );
    return 0;
}
/**************************************************************
	Problem: 1278
	User: 202001061101
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

