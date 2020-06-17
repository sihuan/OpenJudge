#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a, b, c, d;
    int x, y, z;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    scanf("%d%d%d", &x, &y, &z);
    if (x>=a && y>=b && z>=c && x+y+z>=d) {
        printf ("congratulations");
    } else {
        printf("sorry");
    }





    return 0;
}

/**************************************************************
	Problem: 1404
	User: 201901060401
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

