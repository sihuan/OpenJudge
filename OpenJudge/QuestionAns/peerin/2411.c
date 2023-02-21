#include <stdio.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
  char c;
  while (scanf("%c", &c) != EOF&&c!='\n') {
    c=tolower(c);
    printf("%d\n",c-'a'+1);
  }
  return 0;
}


/**************************************************************
	Problem: 2411
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

