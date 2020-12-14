#include <stdio.h>
#include <stdlib.h>

int digits(int n)
{
    if(n<0)
        n = -n;
    int cnt = 0;
    do
    {
        ++cnt;
        n /= 10;
    }while(n);
    return cnt;
}

int main()
{
    int num;
    scanf("%d", &num);
    printf("%d\n", digits(num));
}
/**************************************************************
	Problem: 1473
	User: 201601011420
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

