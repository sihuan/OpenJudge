#include <stdio.h>
int add(int n)
{
    int a,b,c;
    if (n==0)
        return 0;
    else 
	{
        scanf("%d %d", &a, &b);
        c=a+b; 
        printf("%d\n",c);
        return add(n - 1);
    }
}

int main()
{
    int N;
    scanf("%d", &N);
    add(N);
}

/**************************************************************
	Problem: 2298
	User: 202001061101
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

