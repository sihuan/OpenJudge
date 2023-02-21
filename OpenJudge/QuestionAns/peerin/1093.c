#include <string.h>
#include <stdio.h>

int main(){

  char passwd[20] = {0};
  scanf("%s",passwd);
  char input[20] = {0};
  int count = 0;
  while(scanf("%s",input)!=EOF){
    count++;
    if(strcmp(input,passwd)==0&&count<=5){
      printf("Welcome!\n");
    }
    else if(count>5){
      printf("Out of limited!\n");
    }
    else{

      printf("Wrong!\n");
    }


  }

  

  return 0;
}

/**************************************************************
	Problem: 1093
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

