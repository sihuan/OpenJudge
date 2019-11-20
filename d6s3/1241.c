#include<stdio.h>

int mmax(int a,int b)
{
    if (a>b)
        return a;
    else
        return b;
}

int mmin(int a,int b)
{
    if (a>b)
        return b;
    else
        return a;
}

int compare(int *min, int *mid, int *max)
{
    int ma,mi;
    int s=*min+*mid+*max;
    ma=mmax(*min,mmax(*mid,*max));
    mi=mmin(*min,mmin(*mid,*max));
    *max=ma;
    *min=mi;
    *mid=(s-*max-*min);
}

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    compare(&a, &b, &c);
    printf("%d %d %d", a, b, c);
    return 0;
}
/**************************************************************
	Problem: 1241
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

