#include <string.h>
#include <stdio.h>
int mystrcmp(char *s1,char *s2){
  int s1_len = strlen(s1);
  int s2_len = strlen(s2);
  if(s1_len!=s2_len){
    return 0;
  }
  int i;
  for(i = 0;i<s1_len;++i){
    char c1 = s1[i]>='a'?s1[i]-('a'-'A'):s1[i];
     char c2 = s2[i]>='a'?s2[i]-('a'-'A'):s2[i];
     if(c1!=c2){
       return 0;
     }
  }
  return 1;
}

int main(){

  char passwd[20] = {0};
  scanf("%s",passwd);
  char input[20] = {0};
  int count = 0;
  while(scanf("%s",input)!=EOF){
    count++;
    if(mystrcmp(input,passwd)&&count<=5){
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
	Problem: 1766
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

