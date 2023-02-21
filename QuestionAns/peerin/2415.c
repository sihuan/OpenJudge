#include <stdio.h>
#define MAX_LEN 101

void rec(){
  char s[MAX_LEN];
  if(gets(s) == NULL)
    ; 
  else{
    rec();
    printf("%s\n",s);
  }
}

int main(int argc,char *argv[]){

  rec();
  return 0;
}

/**************************************************************
	Problem: 2415
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

