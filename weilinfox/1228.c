#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int gcd(int a, int b)
{
    int t;
    if (b>a) {
        t=a;
        a=b;
        b=t;
    }
    if (b==0) {
        return a;
    }
    if (a%b!=0) {
        return gcd(a%b, b);
    } else {
        return b;
    }

}

int lcm(int a, int b)
{
    int t;
    if (b>a) {
        t=a;
        a=b;
        b=t;
    }
    if (b==0) {
        return b;
    }

    return (a/gcd(a,b))*(b/gcd(a, b))*gcd(a, b);

}



int main()
{
    int a, b;
    while(scanf("%d %d", &a, &b) != EOF)
        printf("%d %d\n", gcd(a, b), lcm(a, b));
    return 0;
}
/**************************************************************
	Problem: 1228
	User: 201901060401
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

