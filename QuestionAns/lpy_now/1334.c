#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 
#define maxn 100000 + 100
 
char str[maxn];
int cmp(const void * a, const void * b)
{
    return strcmp(*(char**)a, *(char**)b);
}
 
int main(){
    int n;
    while( ~scanf("%d", &n) ){
            getchar();
        char **tmp;
        tmp = (char **)malloc(sizeof(char *) * (n + 10));
        for(int i = 0; i < n; i++)
        {
            gets(str);
            int len = strlen(str) + 1;
            tmp[i] = (char *) malloc(sizeof(char) * (len + 10));
            strcpy(tmp[i], str);
            memset(str, 0, sizeof(str));
        }
        qsort(tmp, n, sizeof(char *), cmp);
        for(int i = 0; i < n; i++)
            puts(tmp[i]);
        free(tmp);
    }
    return 0;
}
 

/**************************************************************
	Problem: 1334
	User: 201901061011
	Language: C
	Result: Accepted
	Time:180 ms
	Memory:1528 kb
****************************************************************/

