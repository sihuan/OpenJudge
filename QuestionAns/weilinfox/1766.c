#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

int main()
{
    int time, n;
    int i, j;
    char pwd[25], trys[25];

    scanf("%s", pwd);
    for (i=0; i<strlen(pwd); i++) {
        pwd[i]=toupper(pwd[i]);
    }

    n=0;
    while (scanf("%s", trys)==1) {
        for (i=0; i<strlen(trys); i++) {
            trys[i]=toupper(trys[i]);
        }

        n++;
        if (n<=5) {
            if (strcmp(pwd, trys)) {
                printf("Wrong!\n");
            } else {
                printf("Welcome!\n");
                break;
            }
        } else {
            printf("Out of limited!\n");
        }
    }



    return 0;
}

/**************************************************************
	Problem: 1766
	User: 201901060401
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

