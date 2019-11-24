#include<stdio.h>
int put_sum(int a,int b)
{
    int sum;
    sum=a+b;
    printf("%d\n",sum);
}

int main()
{
    int a, b;

    while(scanf("%d%d", &a, &b) != EOF)
        put_sum(a, b);

    return 0;
}
/**************************************************************
	Problem: 1464
	User: 201801020908
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

