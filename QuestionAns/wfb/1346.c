#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#define MAX_STR_LEN 100
#define llu long long unsigned
typedef struct
{
    llu p,q;
}Div;

void rev(Div *a)
{
    llu temp;
    temp = a->p;
    a->p = a->q;
    a->q = temp;
}
void ReadLlu(Div *a)
{
    scanf("%llu",&a->p);
    a->q = 1;
}
llu gcd(llu a,llu b)
{
    llu temp;
    while(b)
    {
        temp = a;
        a = b;
        b = temp%b;
    }
    return a;
}
void add(Div *a,Div *b)
{
    a->p += b->p*a->q;
    llu g = gcd(a->p,a->q);
    a->p /= g;
    a->q /= g;
}
int DivEqual(Div *a,Div *b)
{
    if(a->p == b->p && a->q == b->q) return 1;
    else return 0;
}
int main()
{
    Div a1,a2;
    Div a[MAX_STR_LEN];
    while(scanf("%llu %llu",&a1.p,&a1.q) != EOF)
    {
        int n;
        scanf("%d",&n);
        int i,j;
        for(i=0; i<n; ++i)
            ReadLlu(&a[i]);
        a2 = a[n-1];
        for(i=n-2; i>=0; --i)
        {
            rev(&a2);
            add(&a2,&a[i]);
        }
        if(DivEqual(&a1,&a2)) puts("YES");
        else puts("NO");
    }

    return 0;
}

/**************************************************************
	Problem: 1346
	User: 201601011420
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

