#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main()
{
    int n;
    int i, j;
    char ch[1005], c[1005];
    int f=0;

    while (gets(ch)!=NULL) {
        n=strlen(ch);
        for (i=0, j=0; i<n; i++) {
            if (isdigit(ch[i]) || islower(ch[i])) {
                c[j++]=ch[i];
            } else if (isupper(ch[i])) {
                c[j++]=tolower(ch[i]);
            }
        }
        c[j]='\0';
        for (i=0, j=strlen(c)-1; i<j; i++, j--) {
            if (c[i]!=c[j]) {
                printf("No.\n");
                break;
            }
        }
        if (i>=j) {
            printf("Yes.\n");
        }
    }

    return 0;
}

/**************************************************************
	Problem: 1061
	User: 201901060401
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

