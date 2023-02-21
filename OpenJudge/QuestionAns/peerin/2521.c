#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
  char s[256] = {'\0'};
  scanf("%s",s);
  int len = strlen(s);
  for (int i = 0; i< len; ++i) {
    if(s[i]=='A')s[i]='T';
    else if(s[i]=='T')s[i]='A';
    else if(s[i]=='G')s[i]='C';
    else if(s[i]=='C')s[i]='G';
  }
  printf("%s",s);
  return 0;
}



/**************************************************************
	Problem: 2521
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

