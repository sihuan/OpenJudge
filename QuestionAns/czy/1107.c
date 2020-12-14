#include<stdio.h>
#include<string.h>
#include<ctype.h>

#define SWAP(t1,x1,y1) (t1)=(x1);(x1)=(y1);(y1)=(t1);

int int_swap(int *a,int *b)
{
    int aa=*a,bb=*b;
    {int temp;temp=aa;aa=bb;bb=temp;}
    *a=aa;*b=bb;
    return 0;
}

int dbl_swap(double *a,double *b)
{
    double aa=*a,bb=*b;
    {double temp;temp=aa;aa=bb;bb=temp;}
    *a=aa;*b=bb;
    return 0;
}


int main()
{
    int x1, y1, t1;
    double x2, y2, t2;

    scanf("%d %d", &x1, &y1);
    int_swap(&x1, &y1);
    printf("%d %d\n", x1, y1);

    scanf("%d %d", &x1, &y1);
    SWAP(t1, x1, y1);
    printf("%d %d\n", x1, y1);

    scanf("%lf %lf", &x2, &y2);
    dbl_swap(&x2, &y2);
    printf("%lg %lg\n", x2, y2);

    scanf("%lf %lf", &x2, &y2);
    SWAP(t2, x2, y2);
    printf("%lg %lg\n", x2, y2);
}

/**************************************************************
	Problem: 1107
	User: 201601160202
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

