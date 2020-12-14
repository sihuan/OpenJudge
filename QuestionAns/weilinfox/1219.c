#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main()
{
    double h, w;
    double ans;

    while (scanf("%lf%lf", &h, &w)==2) {
        ans=w/(h*h/10000);
        printf("%.2lf ", ans);
        if (ans<19)
            printf("lower\n");
        else if (ans<25)
            printf("health\n");
        else if (ans<30)
            printf("heavy\n");
        else if (ans<40)
            printf("super heavy\n");
        else
            printf("extra heavy\n");
    }
    return 0;
}

/**************************************************************
	Problem: 1219
	User: 201901060401
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

