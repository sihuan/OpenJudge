#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main()
{
    double a, b;

    scanf("(%lf, %lf)", &a, &b);

    if (a==0.0 && b==0.0) {
        printf("(0.0, 0.0) is origin\n");
    } else if (a==0.0) {
        printf("(0.0, %.1lf) is on the y axis\n", b);
    } else if (b==0.0) {
        printf("(%.1lf, 0.0) is on the x axis\n", a);
    } else if (a>0.0 && b>0.0) {
        printf("(%.1lf, %.1lf) is in quadrand I\n", a, b);
    } else if (a>0.0 && b<0.0) {
        printf("(%.1lf, %.1lf) is in quadrand IV\n", a, b);
    } else if (a<0.0 && b>0.0) {
        printf("(%.1lf, %.1lf) is in quadrand II\n", a, b);
    } else if (a<0.0 && b<0.0) {
        printf("(%.1lf, %.1lf) is in quadrand III\n", a, b);
    }



    return 0;
}

/**************************************************************
	Problem: 1162
	User: 201901060401
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

