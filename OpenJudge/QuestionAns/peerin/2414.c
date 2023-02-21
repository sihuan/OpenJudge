#include <stdio.h>
#include <string.h>

void entry() {
  char s[101];
  if (scanf("%[^\n]",s) != EOF&&getchar()) {
    entry();
    puts(s);
  } else {
    return;
  }
}

int main(int argc, char *argv[])
{
  entry();
  return 0;
}


/**************************************************************
	Problem: 2414
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

