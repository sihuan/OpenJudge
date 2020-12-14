#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char ch[1005];
    int i, j;
    int sum;

    while (gets(ch)!=NULL) {
        sum=0;
        int flag=0;
        for (i=0; i<strlen(ch); i++) {
            if (!isalpha(ch[i]))
                ch[i]=' ';
        }
        i=0;
        while (ch[i]!='\0') {
            if (isalpha(ch[i])) {
                if (!flag) {
                    sum++;
                    flag=1;
                }
            } else {
                flag=0;
            }
            i++;
        }
        printf("%d\n", sum);
    }
}

/**************************************************************
	Problem: 1169
	User: 201901060401
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

