#include <stdio.h>

int main()
{
    int gcd(int, int);
    int a, b;
    int ans;
    
    scanf("%d%d", &a, &b);
    ans=gcd(a, b);
    printf("%d %d\n", ans, a/ans*b/ans*ans);


    return 0;
}

int gcd(int m, int n)
{
    int gcd(int, int);
    /*int t;
    if (a>b) {
        t=a;
        a=b;
        b=t;
    }*/
    if (n==0)
        return m;

    if (m%n==0)
        return n;
    else
        gcd(n, m%n);
}

/**************************************************************
	Problem: 1298
	User: 201901060401
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

