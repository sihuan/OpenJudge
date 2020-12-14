#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char sta[30005], try[30005], temp[30005];
    int i, j, k;
    int lens, len;

    scanf("%s", sta);
    lens=strlen(sta);

    while (scanf("%s", try)==1) {
        strcpy(temp, sta);
        char t;

        len=strlen(try);
        for (i=0; i<lens; i++) {
            t=toupper(temp[i]);
            for (j=0; j<len; j++) {
                if (toupper(try[j])==t || t=='_')
                    break;
            }
            if (j>=len) {
                printf("%c", toupper(t));
                for (k=0; k<lens; k++) {
                    if (toupper(temp[k])==t)
                        temp[k]='_';
                }
            }
        }
        putchar('\n');
    }

    return 0;
}

/**************************************************************
	Problem: 2047
	User: 201901060401
	Language: C
	Result: Accepted
	Time:28 ms
	Memory:764 kb
****************************************************************/

