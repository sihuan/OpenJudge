#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main()
{
    double p, w, m;
    double a;

    while (scanf("%lf%lf%lf", &p, &w, &m)==3) {
        a=0.0;
        a=p*w;
        if (m<=500) {
            a*=m;
            printf("%.2lf\n", a);
            continue;
        } else {
            a*=500;
            m-=500;
        }

        if (m<=500) {
            a+=p*w*m*0.95;
            printf("%.2lf\n", a);
            continue;
        } else {
            a+=p*w*500*0.95;
            m-=500;
        }

        if (m<=1000) {
            a+=p*w*m*0.9;
            printf("%.2lf\n", a);
            continue;
        } else {
            a+=p*w*1000*0.9;
            m-=1000;
        }

        if (m>0) {
            a+=p*w*m*0.88;
            printf("%.2lf\n", a);
        } else
            printf("%.2lf\n", a);

    }

    return 0;
}

/*
int cmp (const void* a, const void *b)
{
    return (int)(*(int*)a-*(int*)b);
}

    int a[10]={12,12,45,4,8,878,2121,12,121, 88}, i;

    qsort(a, 10, sizeof(int), cmp);

    for (i=0; i<10; i++) printf("%d ", a[i]);

*/


/*


*/

/**************************************************************
	Problem: 2412
	User: 201901060401
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

