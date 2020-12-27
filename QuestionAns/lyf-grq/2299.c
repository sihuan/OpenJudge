#include <stdio.h>
int main()
{
    int n, count= 0;
    scanf("%d", &n);
    if(n==0)
    printf("1");
    else
	{
	while (n!= 0)
	{
        count++;
        n /= 2;
    }
    printf("%d",count);
}
}

/**************************************************************
	Problem: 2299
	User: 202001061101
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

