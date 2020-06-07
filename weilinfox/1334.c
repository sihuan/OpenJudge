#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int m, i, j;
    char tmp[100001];
    char** a;
    char* t;

    scanf("%d", &m);
    getchar();
    a=(char**)malloc(sizeof(char*)*m);
    for (i=0; i<m; i++) {
        gets(tmp);
        a[i]=(char*)malloc(sizeof(char)*(strlen(tmp)+1));
        memset(a[i], 0, sizeof(a[i]));
        strncpy(a[i], tmp, sizeof(char)*strlen(tmp));
    }

    for (i=0; i<m; i++) {
        for (j=0; j<m-i-1; j++) {
            if (strcmp(a[j], a[j+1])>0) {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }

    for (i=0; i<m; i++) {
        printf("%s\n", a[i]);
        free(a[i]);
    }
    free(a);

    return 0;
}

/**************************************************************
	Problem: 1334
	User: 201901060401
	Language: C
	Result: Accepted
	Time:6488 ms
	Memory:1352 kb
****************************************************************/

