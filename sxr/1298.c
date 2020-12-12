#include<stdio.h>

int gcd(int m, int n)
{
    int a, b;
    a=(m>=n?m:n);
    b=(m>n?n:m);
    if(b==0) return a;
    else if(a%b==0) return b;
    else gcd(b,a%b);
}
int lcm(int m, int n)
{
    int a,b;
    a=gcd(m, n);
    b=n*m/a;
    return b;
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d %d",gcd(a, b),lcm(a, b));
    return 0;
}
/**************************************************************
	Problem: 1298
	User: 202001060915
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

