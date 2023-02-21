#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
  char s[20001] = {0};
  char table[127] = {0};
  table[' ']='0';
  char num = '2';
  for (int i = 'a'; i<='o'; i+=3) {
    table[i]=num;
    table[i+1]=num;
    table[i+2]=num;
    num++;
  }
  table['p']=table['q']= table['r']=table['s']='7';
  table['w']=table['x']= table['y']=table['z']='9';
  table['t']=table['u']= table['v']='8';
  while (scanf("%[^\n]",s) != EOF) {
    getchar();
    int len = strlen(s);
      char lastnum=-1;
      char curnum;
    for (int i = 0; i<len; ++i) {
      s[i]=tolower(s[i]);
      curnum=table[s[i]];
      //printf("%c\n", curnum);
      if (curnum == lastnum && curnum!='0') {
	printf("1");
      }
      if (s[i] >= 'p' && s[i] <= 's') {
	for (int j = 0; j<=s[i]-'p'; ++j) {
	  printf("%c",curnum);
	}
      } else if (s[i] >= 't' && s[i] <= 'v') {
	for (int j = 0; j<=s[i]-'t'; ++j) {
	  printf("%c",curnum);
	}
      }else if (s[i] >= 'w' && s[i] <= 'z') {
	for (int j = 0; j<=s[i]-'w'; ++j) {
	  printf("%c",curnum);
	}
      } else if(s[i]==' ') printf("%c",curnum);
      else {
	for (int j = 0; j<=(s[i]-'a')%3; ++j) {
	  printf("%c",curnum);
	}
      }
      lastnum=curnum;
    }
    printf("\n");
  }
return 0;
}


/**************************************************************
	Problem: 2523
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

