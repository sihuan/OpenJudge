#include <stdio.h>

int digits(int n)
{
    int i=0;
    if (n==0)
        return 1;
    while (n>0) {
        n/=10;
        i++;
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
	Problem: 1272
	User: 201901060401
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

