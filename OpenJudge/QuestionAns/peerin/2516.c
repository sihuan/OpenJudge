#include <stdio.h>
#include <string.h>

#define MAX_LEN 101

void str_swap(char s[],char t[]) {
  char tmp[MAX_LEN];
  strcpy(tmp, s); //tmp=s
  strcpy(s, t); //s=t
  strcpy(t, tmp);//t=tmp
}


int main()
{
    char s[MAX_LEN], t[MAX_LEN];
    gets(s);
    gets(t);
    str_swap(s, t);
    puts(s);
    puts(t);
}

/**************************************************************
	Problem: 2516
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

