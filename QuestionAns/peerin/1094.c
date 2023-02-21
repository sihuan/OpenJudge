#include <stdio.h>
#include <string.h>
#include <ctype.h>

int getchar_no_space(char input[]){
  char result[101]={0};
  int index = 0;
  int input_len = strlen(input);
  for(int i = 0;i<input_len;++i){
    if(!isspace(input[i])){
      result[index++]=input[i];
    }
  }
    memcpy(input,result,101);
    return 1;
}

int main(){

  char input[101] = {0};
  gets(input);
  while(1){
    int len = strlen(input);
    int beg=0;
    int end=len-1;
    for(int i = 0;i<len;++i){
      if(!isspace(input[i])){
	beg = i;
	break;
      }
    }
    for(int i = len-1;i>=0;--i){
      if(!isspace(input[i])){
	end = i;
	break;
      }
    }
    input[end+1]='\0';
    char input2[101]={0};
    memcpy(input2,input,101);
    getchar_no_space(input2);
    if(strcmp(input2,"END")==0){
      printf("%s",input2);
      break;
    }else{
      printf("%s\n",input+beg);
    }
    gets(input);
  }
  return 0;
}

/**************************************************************
	Problem: 1094
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

