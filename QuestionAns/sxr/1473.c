#include <stdio.h>
#include <stdlib.h>

int digits(int n)
{
    int i=1;
    while(n/10!=0)
    {
        i++;
        n=n/10;
    }
    return i;
}

int main()
{
    int num;
    scanf("%d", &num);
    printf("%d\n", digits(num));
}
/**************************************************************
	Problem: 1473
	User: 202001060915
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

