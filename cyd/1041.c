#include <stdio.h>
int gcd(int a, int b)
{
    while(b!=0)
    {
        int c;
        c=b;
        b=a%b;
        a=c;
    }
    return a;
 
}
int lcm(int a, int b)
{
    int c;
    c=a/gcd(a,b)*b;
    return c;
}
int main()
{
    int a, b;
    while(scanf("%d %d", &a, &b) != EOF)
        printf("%d %d\n", gcd(a, b), lcm(a, b));
    return 0;
}

/**************************************************************
	Problem: 1041
	User: 201901061304
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

