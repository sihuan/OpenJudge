#include <stdio.h>

int digits(int n)
{   int count=0;
    if(n==0) return 1;
    if(n<0)n=-n;
    for(;n!=0;)
    {   n=n/10;
        count++;
    }
    return count;
}

int main()
{
    int num;
    scanf("%d", &num);
    printf("%d\n", digits(num));
}
/**************************************************************
	Problem: 1473
	User: 201901061304
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

