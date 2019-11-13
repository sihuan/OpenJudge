#include <stdio.h>

int getSum(int n)
{
    if(n == 0) return 0;
    else
    {
        int x;
        scanf("%d",&x);
        return x+getSum(n-1);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",getSum(n));

    return 0;
}

/**************************************************************
	Problem: 1764
	User: 201601011420
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

