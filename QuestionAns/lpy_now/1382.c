#include<stdio.h>

void get_num(int *a,int *b,int *c){
    scanf("%d%d%d",a,b,c);
}
void max_min(int *mmax,int *mmin,int a,int b,int c){
    *mmax=a>b?a:b;
    *mmax=*mmax>c?*mmax:c;
    *mmin=a<b?a:b;
    *mmin=*mmin<c?*mmin:c;
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
	User: 201901061011
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

