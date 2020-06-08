#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char str[11];
    int k,n;
    scanf("%s",str);
    n=strlen(str);
    scanf("%d",&k);
    if(k<=n)
        printf("%c",str[k-1]);
    else
        puts("error");
    return 0;
}

/**************************************************************
	Problem: 1253
	User: 201901060203
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

