#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define IN_WORD 0
#define OUT_OF_WORD 1

int analyse(char s[]){
  int len = strlen(s);
  int result = 0;
  int status = OUT_OF_WORD;
  for(int i = 0;i<len;++i){

    if((ispunct(s[i])||isspace(s[i]))){
      if(status == IN_WORD){
      status = OUT_OF_WORD;
      //result++;
      }
      else if(status == OUT_OF_WORD){
	;
      }
    }
    else{
      if(status == IN_WORD){
	;
      }
      else if(status == OUT_OF_WORD){
	status = IN_WORD;
	result++;
      }
    }
  }

  return result;
}

char *gets(char *str);
int main(){
  char s[1001]={0};
  while(gets(s)!=NULL){
    printf("%d\n",analyse(s));
  }


  return 0;
}

/**************************************************************
	Problem: 1169
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

