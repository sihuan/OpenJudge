#include<stdio.h>
int get_nums(int *n)
{
    int t, s = 0;
    while (scanf("%d", &t) != EOF)
        s++;
    *n = s;
}

int main()
{
    int n;
    get_nums(&n);
    printf("%d\n", n);
}

/**************************************************************
	Problem: 1607
	User: 202001060117
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

