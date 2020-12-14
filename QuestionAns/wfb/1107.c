#include <stdio.h>

#define SWAP(t,a,b) t=a;a=b;b=t;
void int_swap(int *a,int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
void dbl_swap(double *a,double *b)
{
	double temp = *a;
	*a = *b;
	*b = temp;
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
	User: 201601011420
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

