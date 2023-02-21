#include <stdio.h>
#include <string.h>

int main(){

char s[101];
scanf("%s",s);
int len = strlen(s);
int i;
for(i = len-1;i>=0;--i)
    printf("%c",s[i]);



return 0;
}

/**************************************************************
	Problem: 1092
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

