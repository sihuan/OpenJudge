#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n, m;
    int i;
    char ch[105];
    int f;

    while (1) {
        gets(ch); /*putchar('k');
        getchar(); putchar('k');*/
        for (i=strlen(ch)-1; i>0; i--) {
            if (isspace(ch[i]))
                ch[i]='\0';
            else
                break;
        }
        f=0;
        for (i=0; i<strlen(ch); i++) {
            if (isspace(ch[i]) && f) {
                putchar(ch[i]);
            } else if (!isspace(ch[i])){
                putchar(ch[i]);
                f=1;
            }
        }
        putchar('\n');
        if (ch[strlen(ch)-1]=='D' && ch[strlen(ch)-2]=='N' && ch[strlen(ch)-3]=='E')
            break;
    }


    return 0;
}

/**************************************************************
	Problem: 1094
	User: 201901060401
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

