#include <ctype.h>
#include <stdio.h>

int main()
{
    char st[6];
    char xx[10][12] = { "1 2 3 4", "2 3 4 5", "1 3 4 5", "1 2 4 5", "1 2 3 5", "1 2 3 4", "2 3 4 5", "1 3 4 5", "1 2 4 5", "1 2 3 5" };
    int wh;
    int i;
    while (gets(st) != NULL) {
        i = 4;
        while (!isdigit(st[i]))
            i--;
        wh = st[i] - 48;
        printf("%s 6 7\n", xx[wh]);
    }
}
/**************************************************************
	Problem: 2301
	User: 202001061101
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

