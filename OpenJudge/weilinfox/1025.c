#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main()
{
    int i, j;
    char ch;
    int score;

    while (scanf("%d", &score)==1) {
        if (score>100 || score<0) {
            printf("Error\n");
            continue;
        } else {
            score/=10;
            switch (score) {
                case 10:
                case 9:
                    printf("Excellent\n");
                    break;
                case 8:
                    printf("Good\n");
                    break;
                case 7:
                    printf("Average\n");
                    break;
                case 6:
                    printf("Pass\n");
                    break;
                default:
                    printf("Failing\n");
            }
        }
    }

    return 0;
}

/**************************************************************
	Problem: 1025
	User: 201901060401
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

