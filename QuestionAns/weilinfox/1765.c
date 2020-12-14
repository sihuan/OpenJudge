#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

int main()
{
    int n;
    int i, j;
    char ch[64];

    scanf("%d", &n);
    while (n--) {
        scanf("%s", ch);
        for (i=0; i<strlen(ch)%3; i++) {
            printf("%c", ch[i]);
        }
        j=0;
        for (i=strlen(ch)%3; i<strlen(ch); i++) {
            if (strlen(ch)%3!=0 && i==strlen(ch)%3)
                putchar(',');
            printf("%c", ch[i]);
            if (++j%3==0 && i!=strlen(ch)-1)
                putchar(',');
        }
        putchar('\n');
    }

    return 0;
}

/**************************************************************
	Problem: 1765
	User: 201901060401
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

