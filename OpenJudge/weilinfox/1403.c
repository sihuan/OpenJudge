#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a;
    scanf("%d", &a);

    if (a>0 && a%2==0 && sqrt((double)a)*sqrt((double)a)==(double)a) {
        printf ("yes");
    } else {
        printf("no");
    }





    return 0;
}

/**************************************************************
	Problem: 1403
	User: 201901060401
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:756 kb
****************************************************************/

