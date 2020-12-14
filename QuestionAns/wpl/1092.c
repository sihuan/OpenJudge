#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[100];
    int lenth,i;
    scanf("%s",&str);
    lenth=strlen(str);
    for(i=lenth-1;i>=0;i--)
        printf("%c",str[i]);
    return 0;
}
/**************************************************************
	Problem: 1092
	User: 201901060819
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

