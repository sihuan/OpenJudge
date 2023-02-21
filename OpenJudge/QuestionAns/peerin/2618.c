#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
  char s[21] = {0};
  scanf("%s",s);
  int p,q;
  scanf("%d%d",&p,&q);
  int len = strlen(s);
  printf("[");
  for (int i = p; i<=q; ++i) {
    if (i >= 0 && i <= len - 1) {
      printf("%c",s[i]);
    }
  }
  printf("]");
 return 0;
}


/**************************************************************
	Problem: 2618
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

