#include <stdio.h>

int main(int argc, char *argv[])
{
  char s[101];
  scanf("%[^\n]",s);
  getchar();
  for (int i = 0;i<3; ++i) {
    printf("%s\n",s);
  }
  return 0;
}


/**************************************************************
	Problem: 2424
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

