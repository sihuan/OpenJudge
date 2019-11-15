
#include<stdio.h>

int main()
{
    int a;
    int c;
    int gcd(int, int);
    int lcm(int, int, int);
    scanf("%d%d", &a, &c);

    int g;
    g=gcd(a,c);
    printf("%d %d", g, lcm(a, c, g));


    return 0;
}

int gcd (int a, int b)
{
    int t;
    int gcd (int, int);
    if (a>b) {
        t=a;
        a=b;
        b=t;
    }

    if (b==0)
        return 0;
    else if (a==0)
        return b;
    else
        return gcd(a,b%a);
}

int lcm (int a, int b, int g)
{
    if (g==0)
        return 0;
    else if (a==0||b==0)
        return a==0?b:a;
    else
        return (a/g)*(b/g)*g;
}

/**************************************************************
	Problem: 1298
	User: 201901060401
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

