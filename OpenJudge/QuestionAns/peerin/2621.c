#include <stdio.h>
#include <string.h>

#define MAX_LEN 20

void rev(char s[], int i) {
  if(i==strlen(s)-1)
    printf("%c",s[i]);
  else {
    rev(s, i + 1);
    printf("%c", s[i]);
  }
}


int main()
{
    char num[MAX_LEN];
    gets(num);
    rev(num, 0);
}

/**************************************************************
	Problem: 2621
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

