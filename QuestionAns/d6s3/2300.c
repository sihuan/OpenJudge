#include <stdio.h>
#include <string.h>

int main()
{
    char st[501];
    int zf = 0, dx = 0;
    while (gets(st) != NULL) {
        zf = strlen(st);
        dx += zf / 30;
        if (zf % 30 != 0)
            dx++;
    }
    if (dx <= 15)
        printf("1.0");
    else
        printf("%.1lf", 1.0 + (dx - 15) * 0.1);
}
/**************************************************************
	Problem: 2300
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

