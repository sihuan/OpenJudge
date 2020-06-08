#include <stdio.h>
#define MAX_STR_LEN 1001
int str_len(char s[])
{
int i;
  for(i=0;s[i]!='\0';i++);
return i;
}

int main()
{
    int n;
    char s[MAX_STR_LEN];
    while(gets(s) != NULL)
        printf("%d\n", str_len(s));
    return 0;
}

/**************************************************************
	Problem: 1189
	User: 201901060203
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

