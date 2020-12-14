#include <stdio.h>
#define MAX_STR_LEN 1009

 int str_len(char s[])
 {
     int i=0;
     while(s[i++]!=0);
     return i-1;
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
	User: 201601160202
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

