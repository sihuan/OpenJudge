#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main()
{
    int N, i = 0, j, l, m;
    char** str;
    char* t;
    char tp[100001];
    scanf("%d", &N);
    getchar();
    str = (char**)malloc(sizeof(char*) * (N + 1));
    for (i = 0; i < N; i++) {
        gets(tp);
        l = strlen(tp);
        str[i] = (char*)malloc(sizeof(char) * (l + 1));
        strcpy(str[i], tp);
    }
    for (i = 0; i < N - 1; i++)
        for (j = 0; j < N - 1 - i; j++)
            if (strcmp(str[j], str[j + 1]) > 0) {
                t = str[j];
                str[j] = str[j + 1];
                str[j + 1] = t;
            }
    for (i = 0; i < N; i++)
        puts(str[i]);
}

/**************************************************************
	Problem: 1334
	User: 202211070518
	Language: C
	Result: Accepted
	Time:6532 ms
	Memory:1356 kb
****************************************************************/

