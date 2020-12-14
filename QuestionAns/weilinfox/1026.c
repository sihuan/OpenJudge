#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main()
{
    int i, j;
    char ch;
    int a, b;
    int flag=0;

    while (scanf("%d%c%d", &a, &ch,&b)==3) {
        switch (ch) {
            case '+':
                printf("%d\n", a+b);
                break;
            case '-':
                printf("%d\n", a-b);
                break;
            case '*':
                printf("%d\n", a*b);
                break;
            case '/':
                printf("%d\n", a/b);
                break;
            case '%':
                printf("%d\n", a%b);
                break;
            default:
                if (a==0 && b==0 && ch==' ')
                    flag=1;
                else
                    printf("invalid op\n");

        }
        if (flag)
            break;
    }

    return 0;
}

/**************************************************************
	Problem: 1026
	User: 201901060401
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

