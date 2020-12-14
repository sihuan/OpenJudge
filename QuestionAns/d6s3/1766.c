#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char mm[21], smm[21];
    int n = 0, f, i;
    scanf("%s", mm);
    while (scanf("%s", smm) != EOF) {
        f = 0;
        for (i = 0; i < strlen(smm); i++) {
            if ((mm[i] != smm[i]) && (abs(mm[i] - smm[i]) != 32)) {
                f = 1;
                break;
            }
        }
        if (n >= 5)
            printf("Out of limited!\n");
        else if (f==0)
            printf("Welcome!\n");
        else
            printf("Wrong!\n");
        n++;
    }
}
/**************************************************************
	Problem: 1766
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

