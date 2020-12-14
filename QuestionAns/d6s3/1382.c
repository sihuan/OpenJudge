#include<stdio.h>

int amax(int a,int b)
{
    if(a>b)
        return a;
    return b;
}

int amin(int a,int b)
{
    if(a<b)
        return a;
    return b;
}

int get_num(int * a,int * b,int * c)
{
    scanf("%d %d %d",a,b,c);
}

int max_min(int * max,int * min,int a,int b,int c)
{
    *max = amax(a,amax(b,c));
    *min = amin(a,amin(b,c));
}

int main()
{
    int cases, i;
    int mmax, mmin, a, b, c;

    scanf("%d", &cases);
    for(i = 1; i <= cases; i++)
    {
        get_num(&a, &b, &c);
        max_min(&mmax, &mmin, a, b, c);
        printf("case %d : %d, %d\n", i, mmax, mmin);
    }
}

/**************************************************************
	Problem: 1382
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

