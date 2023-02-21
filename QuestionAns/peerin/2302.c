#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, x, y;
    scanf("%d", &n);
    for (y = 2 * n - 1; y >= -2 * n + 1; y--) {
        for (x = -2 * n + 1; x <= 2 * n - 1; x++) {
            if (x == 0 && y == 0)
                putchar(' ');
            else if (x % 2 != 0 && abs(x) >= abs(y))
                putchar('@');
            else if (y % 2 != 0 && abs(y) >= abs(x))
                putchar('@');
            else
                putchar(' ');
        }
        putchar('\n');
    }
}
/**************************************************************
	Problem: 2302
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/


/**************************************************************
	Problem: 2302
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

