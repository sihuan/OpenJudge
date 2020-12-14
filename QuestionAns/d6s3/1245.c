#include <stdio.h>

int move(int n, int x, int y, int z)
{
    if (n == 1)
        printf("   plate %d : from %d to %d\n", n, x, z);
    else {
        move(n - 1, x, z, y);
        printf("   plate %d : from %d to %d\n", n, x, z);
        move(n - 1, y, x, z);
    }
}

int main()
{
    int n, x, y, z, i = 0;
    while (scanf("%d %d %d %d", &n, &x, &y, &z) != EOF)
        if (i == 0) {
            printf("case %d :\n", ++i);
            move(n, x, y, z);
        } else {
            printf("\n");
            printf("case %d :\n", ++i);
            move(n, x, y, z);
        }
}
/**************************************************************
	Problem: 1245
	User: 201901060610
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

